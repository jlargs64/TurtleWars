#include "Unit.h"

Unit::Unit(){

}


Unit::~Unit(){

}

void Unit::setWeaponCapacity(int num){
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
