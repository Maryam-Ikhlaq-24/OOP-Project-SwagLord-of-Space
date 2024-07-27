#pragma once
#include"Player.h"

class Game
{
private:
	sf::RenderWindow* window;
	// player
	Player* player;

	// Private Funcs
	void initwindow();
	void initplayer();

public:
	Game();
	virtual ~Game();
				// Func
void run();

void update();
void render();

};

