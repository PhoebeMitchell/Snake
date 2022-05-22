//
// Created by Phoebe Mitchell on 22/05/2022.
//

#include "Input.h"

Input::Input() {

}

Input::~Input() {

}

void Input::HandleEvent(sf::Event event) {
    switch (event.key.code) {
        case sf::Keyboard::Left:
            m_direction = sf::Vector2i(-1, 0);
            break;
        case sf::Keyboard::Right:
            m_direction = sf::Vector2i(1, 0);
            break;
        case sf::Keyboard::Up:
            m_direction = sf::Vector2i(0, -1);
            break;
        case sf::Keyboard::Down:
            m_direction = sf::Vector2i(0, 1);
            break;
    }
}

sf::Vector2i Input::GetDirection() {
    return m_direction;
}
