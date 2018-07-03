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
	
	int getHealth();
	int getMovementRange();
	bool isDead();
	bool isCritical();
	std::string getName();
	sf::Sprite getSprite();

	int health;
	int attackPower;
	int defense;
	int movementRange;
	int weaponCapacity;
	int unitCost;
	bool dead;
	bool critical;

	sf::Sprite unitSprite;
	sf::Texture unitTexture;
	std::string name;
	//Visibility?
protected:
	void setWeaponCapacity(int num);
	void setHealth(int health);
	void setName(std::string name);
	void setMovementRange(int range);
	void setUnitSprite(std::string fileName);
};

