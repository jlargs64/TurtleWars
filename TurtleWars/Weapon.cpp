#include "Weapon.h"

Weapon::Weapon(){

}


Weapon::~Weapon(){
}

int Weapon::getAmmoCapacity(){
	return ammoCapacity;
}

std::string Weapon::getName()
{
	return name;
}

void Weapon::setWeaponSprite(std::string fileName){
	weaponTexture.loadFromFile(fileName);
	weaponSprite.setTexture(weaponTexture);
}
