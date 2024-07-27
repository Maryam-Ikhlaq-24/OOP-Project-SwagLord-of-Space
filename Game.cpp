#include "Game.h"
		// Private Funcs
void Game::initwindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "SwagLord of Space", sf::Style::Close | sf::Style::Titlebar);
	this->window->setFramerateLimit(144);
	this->window->setVerticalSyncEnabled(false);
}

void Game::initplayer()
{
	this->player = new Player();
}

		// Con/Destructor
Game::Game()
{
	this->initwindow();
	this->initplayer();
}


Game::~Game()
{
	delete this->window;
	delete this->player;

}
				// Funcs

void Game::run()
{
	while( this->window->isOpen())
	this->update();
	this->render();
}

void Game::update()
{
	sf::Event e;
	while (this->window->pollEvent(e))
	{
		if (e.Event::type == sf::Event::Closed)
			this ->window->close();
		if(e.Event::KeyPressed && e.Event::key.code == sf::Keyboard::Escape)
			this->window->close(); 
	}
			// Move Player
}

void Game::render()
{
	this->window->clear();
				// Draw All stuff
	this->player->render(*this->window);
	this->window->display();

}

