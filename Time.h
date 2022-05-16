//
// Created by Phoebe Mitchell on 16/05/2022.
//

#ifndef SNAKE_TIME_H
#define SNAKE_TIME_H

namespace sf {
    class Clock;
}

class Time {
public:
    Time();
    ~Time();

    void Update();
    static float GetTime();
    static float GetDeltaTime();
private:
    sf::Clock *m_clock;
    static float m_time;
    static float m_deltaTime;
};


#endif //SNAKE_TIME_H
