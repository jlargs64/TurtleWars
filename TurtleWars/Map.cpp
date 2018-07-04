#include "Map.h"

#include <cmath>

Map::Map() : Map(1, 1) {
	
}

Map::Map(int width, int height) {
	generateMap(width, height);
	tileTexture.loadFromFile("Assets/Sprites/Hex.png");
}

void Map::generateMap(int width, int height) {
	tiles.resize(height);
	for (int y = 0; y < tiles.size(); y++) {
		tiles[y].resize(width + y % 2);
		for (int x = 0; x < tiles[y].size(); x++) {
			tiles[y][x].setTexture(tileTexture);
			// Set tiles randomly?
		}
	}
}

void Map::setLocation(sf::Vector2f position) {
	this->position = position;
	for (int y = 0; y < tiles.size(); y++) {
		for (int x = 0; x < tiles[y].size(); x++) {
			tiles[y][x].setLocation(getHexLocation(sf::Vector2i(x, y)));
		}
	}
}

sf::Vector2f Map::getHexLocation(sf::Vector2i hex) {
	return sf::Vector2f(position.x + hex.x * 100.f - 50.f * (int(std::round(hex.y)) % 2), position.y + hex.y * 56.f);
}

void Map::draw(sf::RenderTarget &target, sf::RenderStates states) const {
	for (int y = 0; y < tiles.size(); y++) {
		for (int x = 0; x < tiles[y].size(); x++) {
			target.draw(tiles[y][x]);
		}
	}
}