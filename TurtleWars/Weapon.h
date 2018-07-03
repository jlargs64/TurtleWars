#pragma once
#include "SFML/Graphics.hpp"
#include <string>

class Weapon
{
public:
	Weapon();
	~Weapon();

	int getAmmoCapacity();
	std::string getName();
	void setWeaponSprite(std::string fileName);

protected:
	int damage;
	int rpm;
	int ammoCapacity;
	int range;
	std::string name;

	sf::Sprite weaponSprite;
	sf::Texture weaponTexture;
};
