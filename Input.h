//
// Created by Phoebe Mitchell on 22/05/2022.
//

#ifndef SNAKE_INPUT_H
#define SNAKE_INPUT_H

#include <SFML/Window.hpp>

namespace sf {
    class Event;
}

class Input {
public:
    Input();
    ~Input();

    sf::Vector2i GetDirection();

    void HandleEvent(sf::Event event);
private:
    sf::Vector2i m_direction;
};


#endif //SNAKE_INPUT_H
