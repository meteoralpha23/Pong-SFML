#include <iostream>
#include <SFML/Graphics.hpp>
#include "D:\Unity Projects 2024\Co-Op Snake 2D\Pong-SFML\Assets\Header\Core\GameWindowManager.h"
int main()
{
    Core::GameWindowManager gameWindowManager;

    gameWindowManager.initialize();
    while (gameWindowManager.isGameRunning())
    {
        gameWindowManager.render();
    }
    return 0;
    
}