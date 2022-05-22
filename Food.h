//
// Created by Phoebe Mitchell on 22/05/2022.
//

#ifndef SNAKE_FOOD_H
#define SNAKE_FOOD_H

#include "GameObject.h"

class Snake;
class Rectangle;

class Food : public GameObject {
public:
    Food(int size, int windowWidth, int windowHeight, Snake *snake);
    ~Food();

    void Draw(Window *window) override;
    void Update() override;

    void Spawn();
private:
    sf::Vector2i GeneratePosition();
    bool IsValidPosition(sf::Vector2i position);

    Rectangle *m_rectangle;
    int m_size;
    int m_windowWidth;
    int m_windowHeight;
    Snake *m_snake;
};


#endif //SNAKE_FOOD_H
