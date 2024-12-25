#include "D:\Unity Projects 2024\Co-Op Snake 2D\Pong-SFML\Assets\Header\Gameplay\Ball\Ball.h"
namespace Gameplay
{
	Ball::Ball()
	{
		ball_sprite.setRadius(radius);
		ball_sprite.setPosition(position_x, position_y);

	}

	void Ball::update()
	{
	}

	void Ball::render(RenderWindow* game_window)
	{
		game_window->draw(ball_sprite);
	}

}
