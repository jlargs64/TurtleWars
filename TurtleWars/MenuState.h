#pragma once

#include <SFML/Graphics.hpp>
#include "gameState.h"

class MenuState : public GameState
{
public:
	MenuState(Game* game);
	virtual void draw(const float dt);
	virtual void update(const float dt);
	virtual void handleInput();

	sf::Font font;
	sf::Text mainMenuText;
	sf::Text pressPlay;
private:
	sf::View view;
	void loadGame();
};

