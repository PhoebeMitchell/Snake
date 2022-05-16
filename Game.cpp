//
// Created by Phoebe Mitchell on 16/05/2022.
//

#include "Game.h"
#include "GameObject.h"
#include <iostream>

Game::Game(int width, int height, std::string name) {
    m_window = new Window(width, height, name);
}

Game::~Game() {
    delete m_window;
}

void Game::Start() {
    Loop();
}

void Game::Loop() {
    while (m_window->GetIsOpen()) {
        m_window->PollEvents();
        DrawGameObjects();
        m_window->Display();
    }
}

GameObject *Game::AddGameObject(GameObject *gameObject) {
    m_gameObjects.push_back(gameObject);
    return gameObject;
}

void Game::DrawGameObjects() {
    for (GameObject *gameObject : m_gameObjects) {
        gameObject->Draw(m_window);
    }
}
