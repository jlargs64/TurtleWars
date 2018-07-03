#pragma once

#include <SFML/Graphics.hpp>
#include "gameState.h"


class PlayState : public GameState
{
public:

	virtual void draw(const float dt);
	virtual void update(const float dt);
	virtual void handleInput();

	PlayState(Game* game);

	sf::RectangleShape rect;
private:
	void PauseGame();
};