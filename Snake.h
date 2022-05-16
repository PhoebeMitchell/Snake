//
// Created by Phoebe Mitchell on 16/05/2022.
//

#ifndef SNAKE_SNAKE_H
#define SNAKE_SNAKE_H

#include <vector>
#include <SFML/Graphics.hpp>

#include "GameObject.h"

class Rectangle;

class Snake : public GameObject {
public:
    Snake(int length, int segmentSize, int xPos, int yPos, sf::Color color);
    ~Snake();

    void Draw(Window *window) override;
private:
    std::vector<Rectangle *> m_snakeSegments;
};


#endif //SNAKE_SNAKE_H
