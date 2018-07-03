#include "Tile.h"

Tile::Tile()
{
}


Tile::~Tile()
{
}

void Tile::setLocation(sf::Vector2f position) {
	tileSprite.setPosition(position);
}

void Tile::setTexture(sf::Texture &texture) {
	tileSprite.setTexture(texture, true);
	tileSprite.setOrigin(sf::Vector2f(50, 50));
}

void Tile::draw(sf::RenderTarget &target,sf::RenderStates states) const {
	target.draw(tileSprite);
}
