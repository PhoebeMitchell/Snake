#include "SFML/Graphics.hpp"
#include "Game.h"

int main() {
    Game game(500, 500, "Snake");
    game.Start();
    return 0;
}
