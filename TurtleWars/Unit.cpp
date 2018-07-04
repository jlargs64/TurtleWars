#include "Unit.h"

Unit::Unit(){
	weaponCapacity = 0;
	unitCost = 20;
	movementRange = 1;
	health = 100;
	defense = 10;
	attackPower = 15;
	dead = false;
	critical = false;
	name = "";
	movementState = isMoving;
	movementType = land;
}


Unit::~Unit(){

}

void Unit::setWeaponCapacity(int num){
	weaponCapacity = num;
}

void Unit::setHealth(int health){
	this->health = health;
}

void Unit::setName(std::string name){
	this->name = name;
}

void Unit::setMovementRange(int range){
	movementRange = range;
}

void Unit::setUnitSprite(std::string fileName){
	unitTexture.loadFromFile(fileName);
	unitSprite.setTexture(unitTexture);
}

sf::Sprite Unit::getSprite() {
	return unitSprite;
}

void Unit::update(float dt) {
	
}

int Unit::getHealth(){
	return health;
}

int Unit::getMovementRange(){
	return movementRange;
}

bool Unit::isDead()
{
	return dead;
}

bool Unit::isCritical()
{
	return critical;
}

std::string Unit::getName(){
	return name;
}
