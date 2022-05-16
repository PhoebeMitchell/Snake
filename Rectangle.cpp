//
// Created by Phoebe Mitchell on 16/05/2022.
//

#include "Rectangle.h"

Rectangle::Rectangle(int width, int height, sf::Color color) {
    m_rectangleShape = new sf::RectangleShape(sf::Vector2f(width, height));
    m_rectangleShape->setFillColor(color);
}

void Rectangle::SetPosition(sf::Vector2i position) {
    m_rectangleShape->setPosition(position.x, position.y);
}

Rectangle::~Rectangle() {
    delete m_rectangleShape;
}

sf::RectangleShape *Rectangle::GetRectangleShape() {
    return m_rectangleShape;
}

sf::Vector2i Rectangle::GetPosition() {
    return sf::Vector2i(m_rectangleShape->getPosition());
}
