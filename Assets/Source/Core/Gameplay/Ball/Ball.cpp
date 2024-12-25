#include "D:\Unity Projects 2024\Co-Op Snake 2D\Pong-SFML\Assets\Header\Gameplay\Ball\Ball.h"
namespace Gameplay
{
	Ball::Ball()
	{


		loadTexture();
		initializeVariables();
	}
	void Ball::initializeVariables()
	{
		pong_ball_sprite.setTexture(pong_ball_texture);
		pong_ball_sprite.setScale(scale_x, scale_y);

		pong_ball_sprite.setPosition(position_x, position_y);
	}
	void Ball::move()
	{
		pong_ball_sprite.move(velocity);
	}
	void Ball::loadTexture()
	{
		if (!pong_ball_texture.loadFromFile(texture_path))
		{
			throw std::runtime_error("Failed to load ball texture!");
		}
	}

	void Ball::update()
	{
		move();
	}

	

	void Ball::render(RenderWindow* game_window)
	{
		game_window->draw(pong_ball_sprite);
	}
	

}
