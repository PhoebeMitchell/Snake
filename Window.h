//
// Created by Phoebe Mitchell on 16/05/2022.
//

#ifndef SNAKE_WINDOW_H
#define SNAKE_WINDOW_H

#include <string>

class Input;

namespace sf {
    class RenderWindow;
    class Drawable;
}

class Window {
public:
    Window(int width, int height, std::string name);
    ~Window();

    void PollEvents();
    bool GetIsOpen();
    void Draw(sf::Drawable *drawable);
    void Display();
    Input *GetInput();
private:
    sf::RenderWindow *m_renderWindow;
    Input *m_input;
};


#endif //SNAKE_WINDOW_H
