//
// Created by Phoebe Mitchell on 16/05/2022.
//

#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H

#include <string>
#include <vector>
#include "Window.h"

class GameObject;
class Time;
class Input;

class Game {
public:
    Game(int width, int height, std::string name);
    ~Game();

    void Start();
    GameObject *AddGameObject(GameObject *gameObject);
    Input *GetInput();
private:
    void Loop();
    void UpdateGameObjects();
    void DrawGameObjects();

    Window *m_window;
    std::vector<GameObject *> m_gameObjects;
};


#endif //SNAKE_GAME_H
