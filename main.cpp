#include "SFML/Graphics.hpp"
#include "Game.h"
#include "Snake.h"

int main() {
    Game game(500, 500, "Snake");
    Snake snake(3, 10, 250, 250, sf::Color::Green, .5f);
    game.AddGameObject(&snake);
    game.Start();
    return 0;
}
