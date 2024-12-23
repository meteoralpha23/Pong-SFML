#include "../../Header/Core/GameWindowManager.h"



void Core::GameWindowManager::initialize()
{
	game_window = new RenderWindow();
	createGameWindow();
}



void Core::GameWindowManager::createGameWindow()
{
	game_window->create(VideoMode(game_window_width, game_window_height),
		game_title);

}

bool Core::GameWindowManager::isGameRunning()
{
	return game_window->isOpen();
}

void Core::GameWindowManager::render()
{

}
RenderWindow* Core::GameWindowManager::getGameWinodw()
{
	return game_window;
}

