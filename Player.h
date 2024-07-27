#pragma once
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<iostream>
class Player
{
private:
sf::Sprite sprite;
sf::Texture texture;

	// Private functions 
	void initTexture();
	void initSprite();
public:
	Player();
	virtual ~Player();



				// Functions
	void update();
	void render(sf::RenderTarget& target);
	
};

