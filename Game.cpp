//
// Created by Phoebe Mitchell on 16/05/2022.
//

#include "Game.h"

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
    }
}