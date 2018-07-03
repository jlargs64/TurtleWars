#include <SFML/Graphics.hpp>
#include <iostream>

#include "PlayState.h"
#include "MenuState.h"
#include "GameState.h"


void PlayState::draw(const float dt){
	game->window.draw(rect);
	game->window.draw(map);
}

void PlayState::update(const float dt){


}

void PlayState::handleInput(){
	sf::Event event;

	while (this->game->window.pollEvent(event)){
		switch (event.type){
		case sf::Event::Closed:
			this->game->window.close();
			break;

		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::Escape)
				PauseGame();
			break;

		}
	}


}

PlayState::PlayState(Game* game){
	this->game = game;

	rect.setPosition(sf::Vector2f(100, 100));
	rect.setSize(sf::Vector2f(100, 100));
	rect.setFillColor(sf::Color::Green);

	map.generateMap(5, 5);
	map.setLocation(sf::Vector2f(200, 100));
}

void PlayState::PauseGame(){


}
