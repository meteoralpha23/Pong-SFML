#include "../../Header/Core/GameWindowManager.h"



void Core::GameWindowManager::initialize()
{
	game_window = new RenderWindow();
	createGameWindow();
}



void Core::GameWindowManager::createGameWindow()
{

	game_window->create(sf::VideoMode::getDesktopMode(),
		game_title,sf::Style::Fullscreen);

}

bool Core::GameWindowManager::isGameRunning()
{
	return game_window->isOpen();
}

void Core::GameWindowManager::render()
{
	game_window->clear(sf::Color(200, 50, 50, 255));

	game_window->display();

}
RenderWindow* Core::GameWindowManager::getGameWindow()
{
	return game_window;
}

