//
// Created by Phoebe Mitchell on 16/05/2022.
//

#include "Snake.h"
#include "Rectangle.h"
#include "Window.h"

Snake::Snake(int size, int segmentSize, int xPos, int yPos, sf::Color color) {
    for (int i = 0; i < size; i++) {
        Rectangle *segment = new Rectangle(segmentSize, segmentSize, color);
        segment->SetPosition(xPos, yPos + segmentSize * i);
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
