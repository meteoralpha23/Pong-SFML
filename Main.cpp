#include <iostream>
#include <SFML/Graphics.hpp>

#include "D:\Unity Projects 2024\Co-Op Snake 2D\Pong-SFML\Assets\Header\Core\GameWindowManager.h"
#include "D:\Unity Projects 2024\Co-Op Snake 2D\Pong-SFML\Assets\Header\Event\EventManager.h"
using namespace Event;
int main()
{
    Core::GameWindowManager gameWindowManager;
   EventManager eventManager;

    gameWindowManager.initialize();
    while (gameWindowManager.isGameRunning())
    {
        eventManager.pollEvents(gameWindowManager.getGameWindow());
        gameWindowManager.render();
    }
    return 0;
    
}