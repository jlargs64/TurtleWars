#include "SFML/Graphics.hpp"
#include "Game.h"
#include "GameState.h"

Game::Game() {
	window.create(sf::VideoMode(800,600), "Turtle Wars");
	window.setFramerateLimit(60);

}

Game::~Game(){
	while (!states.empty()) {
		popState();
	}
}

void Game::pushState(GameState * state){
	states.push_back(state);
}

void Game::popState(){
	states.back();
	delete states.back();
	states.pop_back();
}

GameState * Game::currentState(){
	if (states.empty()) {
		return nullptr;
	}
	else {
		return states.back();
	}
}

void Game::gameLoop(){
	sf::Clock clock;

	while (window.isOpen()) {
		sf::Time elapsed = clock.restart();
		float dt = elapsed.asSeconds();

		if (currentState() == nullptr) {
			continue;
		}

		currentState()->handleInput();
		currentState()->update(dt);

		window.clear();

		currentState()->draw(dt);

		window.display();
	}
}
