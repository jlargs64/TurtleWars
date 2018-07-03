#pragma once

#include "Tile.h"
#include "SFML\Graphics.hpp"
#include <vector>

class Map : public sf::Drawable {
public:
	Map();
	Map(int width, int height);

	void generateMap(int width, int height);
	void setLocation(sf::Vector2f position);

	std::vector<std::vector<Tile>> tiles;

private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

	sf::Vector2f position;
	sf::Texture tileTexture;
};

