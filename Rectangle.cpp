//
// Created by Phoebe Mitchell on 16/05/2022.
//

#include "Rectangle.h"

Rectangle::Rectangle(int width, int height, sf::Color color) {
    m_rectangleShape = new sf::RectangleShape(sf::Vector2f(width, height));
    m_rectangleShape->setFillColor(color);
}

void Rectangle::SetPosition(int x, int y) {
    m_rectangleShape->setPosition(x, y);
}

Rectangle::~Rectangle() {
    delete m_rectangleShape;
}

sf::RectangleShape *Rectangle::GetRectangleShape() {
    return m_rectangleShape;
}
