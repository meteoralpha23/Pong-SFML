#pragma once
#include<SFML/Graphics.hpp>
#include "D:\Unity Projects 2024\Co-Op Snake 2D\Pong-SFML\Assets\Header\Gameplay\Paddle\Paddle.h"
#include<iostream>
using namespace sf;
namespace Gameplay
{
	class Ball
	{
	protected:

		Texture pong_ball_texture;
		Sprite pong_ball_sprite;

		std::string texture_path = "Assets/Textures/Ball.png";
		
		const float scale_x = 0.06f;
		const float scale_y = 0.06f;

		const float position_x = 615.0f;
		const float position_y = 335.0f;
	
		const float ball_speed =  0.5f;
		Vector2f velocity = Vector2f(ball_speed, ball_speed);
		
		const float top_boundary = 20.0f;
		const float bottom_boundary = 700.0f;

		const float left_boundary = 0.0f;
		const float right_boundary = 1280.0f;

		//Center Position
		const float center_position_x = 615.0f;
		const float center_position_y = 325.0f;
		void loadTexture();
		void initializeVariables();

		void move();
	public:
		Ball();
		
		void handlePaddlcollision(Paddle* player1,Paddle* player2);
		void handleBoudaryCollision();
		void handleOutofBoundCollision();
		void reset();
		void onCollision(Paddle* player1, Paddle* player2);
		void update(Paddle* player1, Paddle* player2);
		void render(RenderWindow* game_window);
	};
}