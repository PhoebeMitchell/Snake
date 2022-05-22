//
// Created by Phoebe Mitchell on 16/05/2022.
//

#include "Snake.h"
#include "Rectangle.h"
#include "Window.h"
#include "Time.h"
#include "Input.h"

Snake::Snake(int size, int segmentSize, int xPos, int yPos, sf::Color color, float initialSpeed, Input *input) {
    m_input = input;
    m_direction = sf::Vector2i(0, 1);
    m_moveDelay = initialSpeed;
    m_segmentSize = segmentSize;
    for (int i = 0; i < size; i++) {
        Rectangle *segment = new Rectangle(segmentSize, segmentSize, color);
        segment->SetPosition(sf::Vector2i(xPos, yPos - segmentSize * i));
        m_snakeSegments.push_back(segment);
    }
}

Snake::~Snake() {
    for (Rectangle *segment : m_snakeSegments) {
        delete segment;
    }
}

void Snake::Draw(Window *window) {
    for (Rectangle *segment : m_snakeSegments) {
        window->Draw(segment->GetRectangleShape());
    }
}

void Snake::Update() {
    float time = Time::GetTime();
    if (time - m_lastMoveTime >= m_moveDelay) {
        sf::Vector2i direction = m_input->GetDirection();
        if (direction != sf::Vector2i(0, 0)) {
            m_direction = m_input->GetDirection();
        }
        Move();
        m_lastMoveTime = time;
    }
}

void Snake::Move() {
    Rectangle *head = m_snakeSegments[0];
    Rectangle *tail = m_snakeSegments[m_snakeSegments.size() - 1];
    tail->SetPosition(head->GetPosition() + m_direction * m_segmentSize);
    std::rotate(m_snakeSegments.begin(), m_snakeSegments.begin() + m_snakeSegments.size() - 1, m_snakeSegments.end());
}

std::vector<Rectangle *> *Snake::GetSegments() {
    return &m_snakeSegments;
}
