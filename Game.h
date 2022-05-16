//
// Created by Phoebe Mitchell on 16/05/2022.
//

#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H

#include <string>
#include "Window.h"

class Game {
public:
    Game(int width, int height, std::string name);
    ~Game();

    void Start();
private:
    void Loop();

    Window *m_window;
};


#endif //SNAKE_GAME_H
