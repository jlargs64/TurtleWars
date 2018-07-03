#pragma once

#include <SFML/Graphics.hpp>

class Tile : public sf::Drawable
{
public:
	Tile();
	~Tile();

	void setLocation(sf::Vector2f position);
	void setTexture(sf::Texture &texture);

	enum {
		land,
		water
	} type;
	sf::Vector2f position;

private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

	sf::Sprite tileSprite;
};

