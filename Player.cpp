#include "Player.h"

void Player::initTexture()
{
	//Load a texture from file
	if (!this->texture.loadFromFile("Texture/Ship.png"))
	{
		std::cout << "ERROR::PLAYER::INITTEXTURE::Could mot load texture file." << "\n";
		
	}

	/*void Player::initTexture()
	{
		if (!this->texture.loadFromFile("Texture/ship.png"))
		{
			throw std::runtime_error("ERROR::PLAYER::INITTEXTURE::Could not load texture file.");
		}
	}
void Player::initTexture()
{
	if (!this->texture.loadFromFile("Texture/Ship.png"))
	{
		throw std::runtime_error("ERROR::PLAYER::INITTEXTURE::Could not load texture file 'ship.png'. Check the file path.");
	}
}*/

}


void Player::initSprite()
{
				// set the texture to sprite
	this->sprite.setTexture(this->texture);
			// resize the sprite
}

Player::Player()
{
	this->initTexture();
	this->initSprite();
}

Player:: ~Player()
{

}
			// Functions
void Player::update()
{
}

void Player::render(sf::RenderTarget& target)
{
	target.draw(this->sprite);
}
