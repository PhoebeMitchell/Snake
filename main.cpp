#include "SFML/Graphics.hpp"
#include "Game.h"
#include "Snake.h"
#include "Food.h"

int main() {
    Game game(500, 500, "Snake");
    Snake snake(3, 10, 250, 250, sf::Color::Green, .5f, game.GetInput());
    Food food(10, 500, 500, &snake);
    game.AddGameObject(&snake);
    game.AddGameObject(&food);
    game.Start();
    return 0;
}
