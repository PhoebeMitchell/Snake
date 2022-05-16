//
// Created by Phoebe Mitchell on 16/05/2022.
//

#ifndef SNAKE_RECTANGLE_H
#define SNAKE_RECTANGLE_H

#include <SFML/Graphics.hpp>

class Rectangle {
public:
    Rectangle(int width, int height, sf::Color color);
    ~Rectangle();

    sf::RectangleShape *GetRectangleShape();
    void SetPosition(int x, int y);
private:
    sf::RectangleShape *m_rectangleShape;
};


#endif //SNAKE_RECTANGLE_H
