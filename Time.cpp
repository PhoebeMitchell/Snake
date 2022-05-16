//
// Created by Phoebe Mitchell on 16/05/2022.
//

#include "Time.h"
#include <SFML/Graphics.hpp>

Time::Time() {
    m_clock = new sf::Clock;
}

Time::~Time() {
    delete m_clock;
}

void Time::Update() {
    float currentTime = m_clock->getElapsedTime().asSeconds();
    m_deltaTime = currentTime - m_time;
    m_time = currentTime;
}

float Time::GetTime() {
    return m_time;
}

float Time::GetDeltaTime() {
    return Time::m_deltaTime;
}

float Time::m_time = 0;
float Time::m_deltaTime = 0;
