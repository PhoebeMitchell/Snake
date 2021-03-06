//
// Created by Phoebe Mitchell on 16/05/2022.
//

#ifndef SNAKE_SNAKE_H
#define SNAKE_SNAKE_H

#include <vector>
#include <SFML/Graphics.hpp>

#include "GameObject.h"

class Rectangle;
class Input;

class Snake : public GameObject {
public:
    Snake(int size, int segmentSize, int xPos, int yPos, sf::Color color, float initialSpeed, Input *input);
    ~Snake();

    void Draw(Window *window) override;
    void Update() override;
    void SetDirection(sf::Vector2i direction);
    std::vector<Rectangle *> *GetSegments();
private:
    void Move();

    std::vector<Rectangle *> m_snakeSegments;
    int m_segmentSize;
    float m_moveDelay;
    float m_lastMoveTime;
    sf::Vector2i m_direction;
    Input *m_input;
};


#endif //SNAKE_SNAKE_H
