//
// Created by Phoebe Mitchell on 16/05/2022.
//

#ifndef SNAKE_GAMEOBJECT_H
#define SNAKE_GAMEOBJECT_H

class Window;

class GameObject {
public:
    virtual void Draw(Window *window) = 0;
    virtual void Update() = 0;
};


#endif //SNAKE_GAMEOBJECT_H
