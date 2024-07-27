#include "Player.h"

void Player::initTexture()
{
			// Load a texture from file
	if (!this->texture.loadFromFile("Texture/ship.png"))
	{
		std::cout << "ERROR::PLAYER::INITTEXTURE::Could mot load texture file." << "\n";
	}
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
