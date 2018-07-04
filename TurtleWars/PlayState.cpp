#include <SFML/Graphics.hpp>
#include <iostream>

#include "PlayState.h"
#include "MenuState.h"
#include "GameState.h"

#include "LandUnits.h"


void PlayState::draw(const float dt){
	game->window.draw(map);

	for (int t = 0; t < units.size(); t++) {
		for (int u = 0; u < units[t].size(); u++) {
			game->window.draw(units[t][u]->getSprite());
		}
	}
}

void PlayState::update(const float dt){
	for (int t = 0; t < units.size(); t++) {
		for (int u = 0; u < units[t].size(); u++) {
			//units[t][u]->update(dt);
		}
	}

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

	map.generateMap(5, 7);
	map.setLocation(sf::Vector2f(200, 100));

	teams = 2;
	turn = 1;

	units.resize(teams);
	units[0].push_back(new Gecko());
	units[0][0]->hex.x = 2;
	units[0][0]->hex.y = 3;
}

PlayState::~PlayState() {
	for (int t = 0; t < units.size(); t++) {
		for (int u = 0; u < units[t].size(); u++) {
			delete units[t][u];
		}
	}
}

void PlayState::PauseGame(){


}
