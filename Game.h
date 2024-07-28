#pragma once
#include<map>
#include"Player.h"
#include"Bullet.h"

class Game
{
private:
	// window
	sf::RenderWindow* window;
	// resources
	std::map<std::string, sf::Texture*> textures;
	std::vector<Bullet*> bullets;

	// player
	Player* player;

	// Private Funcs
	
	void initwindow();
	void initTextures();
	void initplayer();

public:
	Game();
	virtual ~Game();
				// Func
void run();

void updatePollEvents();
void updateInput();
void updateBullets();
void update();
void render();


};

