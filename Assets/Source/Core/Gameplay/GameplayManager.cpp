#include "D:\Unity Projects 2024\Co-Op Snake 2D\Pong-SFML\Assets\Header\Gameplay\GameplayManager.h"
namespace Gameplay
{
	
	GameplayManager::GameplayManager(EventManager* manager)
	{
		event_manager = manager;
		initialize();

		boundary = new Boundary();

		
	}






	void GameplayManager::initialize()
	{
		ball = new Ball();
		player1 = new Paddle(player1_position_x, player1_position_y);
		player2 = new Paddle(player2_postion_x, player2_postion_y);
		
		
	}

	void GameplayManager::update()
	{
		
		ball->update();
		player1->update(event_manager->isKeyPressed(Keyboard::W),
			event_manager->isKeyPressed(Keyboard::S));
		player2->update(event_manager->isKeyPressed(Keyboard::Up),
			event_manager->isKeyPressed(Keyboard::Down));
		
	}
	void GameplayManager::render(RenderWindow* game_window)
	{
		boundary->render(game_window);
		ball->render(game_window);
		player1->render(game_window);
		player2->render(game_window);
	}

}
