#pragma once
#include <string>
#include "SFML/Graphics.hpp"
#include "Weapon.h"
class Unit
{

public:
	Unit();
	~Unit();
	
	std::vector<Weapon*> weapons;

	enum movementStates { isMoving = 0, isPlanted, inShell } movementState;
	enum movementTypes { land = 0, swim, fly, amphibious } movementType;

	void setWeaponCapacity(int num);
	void setHealth(int health);
	void setName(std::string name);
	void setMovementRange(int range);
	void setUnitSprite(std::string fileName);

	int getHealth();
	int getMovementRange();
	bool isDead();
	bool isCritical();
	std::string getName();

private:
	int health;
	int defense;
	int movementRange;
	int weaponCapacity;
	bool dead;
	bool critical;

	sf::Sprite unitSprite;
	sf::Texture unitTexture;
	std::string name;

};

