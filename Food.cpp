//
// Created by Phoebe Mitchell on 22/05/2022.
//

#include <SFML/Graphics.hpp>
#include "Food.h"
#include "Rectangle.h"
#include "Window.h"
#include "Snake.h"
#include <iostream>

Food::Food(int size, int windowWidth, int windowHeight, Snake *snake) {
    m_size = size;
    m_snake = snake;
    m_windowWidth = windowWidth;
    m_windowHeight = windowHeight;
    m_rectangle = new Rectangle(m_size, m_size, sf::Color::White);
    Spawn();
}

Food::~Food() {
    delete m_rectangle;
}

void Food::Spawn() {
    m_rectangle->SetPosition(GeneratePosition());
}

sf::Vector2i Food::GeneratePosition() {
    srand(time(NULL));
    sf::Vector2i position;
    do {
        position.x = rand() % (m_windowWidth / m_size);
        position.y = rand() % (m_windowHeight / m_size);
    } while (!IsValidPosition(position));
    return sf::Vector2i(position * m_size);
}

bool Food::IsValidPosition(sf::Vector2i position) {
    for (Rectangle *rectangle : *m_snake->GetSegments()) {
        sf::Vector2i segmentPosition = rectangle->GetPosition();
        segmentPosition /= m_size;
        if (position == segmentPosition) {
            return false;
        }
    }
    return true;
}

void Food::Draw(Window *window) {
    window->Draw(m_rectangle->GetRectangleShape());
}

void Food::Update() {

}
