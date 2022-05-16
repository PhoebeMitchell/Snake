//
// Created by Phoebe Mitchell on 16/05/2022.
//

#include "Window.h"
#include <SFML/Graphics.hpp>

Window::Window(int width, int height, std::string name) {
    m_renderWindow = new sf::RenderWindow(sf::VideoMode(width, height), name);
}

Window::~Window() {
    delete m_renderWindow;
}

void Window::PollEvents() {
    sf::Event event;
    while (m_renderWindow->pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            m_renderWindow->close();
        }
    }

    m_renderWindow->clear(sf::Color::Black);
}

bool Window::GetIsOpen() {
    return m_renderWindow->isOpen();
}

void Window::Draw(sf::Drawable *drawable) {
    m_renderWindow->draw(*drawable);
}

void Window::Display() {
    m_renderWindow->display();
}
