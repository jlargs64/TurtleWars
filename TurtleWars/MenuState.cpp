#include "SFML/Graphics.hpp"

#include <iostream>

#include "MenuState.h"
#include "GameState.h"
#include "PlayState.h"

MenuState::MenuState(Game * game){
	this->game =game;
	
	if (!font.loadFromFile("Assets/PixelOperator.ttf")) {
		std::cerr << "can't load font" << std::endl;
	}
	//Adding two pieces of text to screen
	mainMenuText.setFont(font);
	mainMenuText.setString("TURTLE WARS");
	mainMenuText.setPosition(300,250);
	pressPlay.setFont(font);
	pressPlay.setString("PRESS SPACE TO PLAY");
	pressPlay.setPosition(300,300);
}

void MenuState::draw(const float dt){
	game->window.draw(mainMenuText);
	game->window.draw(pressPlay);
}

void MenuState::update(const float dt){

}

void MenuState::handleInput(){
	sf::Event event;

	while (game->window.pollEvent(event)){
		switch (event.type)
		{
		case sf::Event::Closed:
			game->window.close();
			break;
		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::Escape)
				game->window.close();
			else if (event.key.code == sf::Keyboard::Space)
				loadGame();
			break;
		}
	}
}

void MenuState::loadGame(){
	game->pushState(new PlayState(game));
}