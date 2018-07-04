#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "gameState.h"
#include "Map.h"
#include "Unit.h"

class PlayState : public GameState
{
public:

	virtual void draw(const float dt);
	virtual void update(const float dt);
	virtual void handleInput();

	PlayState(Game* game);
	~PlayState();

	Map map;
	std::vector<std::vector<Unit*>> units;

	int teams;
	int turn;

private:
	void PauseGame();
};