//
// Created by Phoebe Mitchell on 16/05/2022.
//

#include <iostream>

#include "Game.h"
#include "GameObject.h"
#include "Time.h"

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
    Time time;
    while (m_window->GetIsOpen()) {
        time.Update();
        m_window->PollEvents();
        UpdateGameObjects();
        DrawGameObjects();
        m_window->Display();
    }
}

GameObject *Game::AddGameObject(GameObject *gameObject) {
    m_gameObjects.push_back(gameObject);
    return gameObject;
}

void Game::UpdateGameObjects() {
    for (GameObject *gameObject : m_gameObjects) {
        gameObject->Update();
    }
}

void Game::DrawGameObjects() {
    for (GameObject *gameObject : m_gameObjects) {
        gameObject->Draw(m_window);
    }
}
