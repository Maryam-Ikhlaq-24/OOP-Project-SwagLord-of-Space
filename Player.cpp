#include "Player.h"
void Player::initVariables()
{
	this->movementSpeed = 1.f;
	this->attackCooldownMax = 10.f;

	this->attackCooldown = this->attackCooldownMax;
}

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
	this->sprite.scale(0.1f, 0.1f);
}

Player::Player()
{
	this->initVariables();
	this->initTexture();
	this->initSprite();
}

Player:: ~Player()
{

}
const sf::Vector2f& Player::getPos() const
{
	return this->sprite.getPosition();
}
void Player::move(const float dirX, const float dirY)
{
	this->sprite.move(this->movementSpeed * dirX, this->movementSpeed * dirY);
}
const bool Player::canAttack()
{
	if (this->attackCooldown >= this->attackCooldownMax)
	{
		this->attackCooldown = 0.f;
		return true;
	}
	return false;
}
void Player::updateAttack()
{
	if(this->attackCooldown < this->attackCooldownMax)
	this->attackCooldown += 0.5f;
}
// Functions
void Player::update()
{
	this->updateAttack();
}

void Player::render(sf::RenderTarget& target)
{
	target.draw(this->sprite);
}
