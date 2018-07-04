#include "AerialUnits.h"

HorseFlies::HorseFlies() {
	unitCost = 15;
	movementRange = 4;
	attackPower = 10;
	defense = 25;
	health = 15;
	name = "Horse Flies";
	movementType = fly;

	unitTexture.loadFromFile("Assets/Sprites/Fly_Swam.png");
	unitSprite.setTexture(unitTexture);
}

Mosquito::Mosquito() {
	unitCost = 35;
	movementRange = 3;
	attackPower = 20;
	defense = 35;
	health = 20;
	name = "Mosquito";
	movementType = fly;

	//unitTexture.loadFromFile();
	unitSprite.setTexture(unitTexture);
}

DragonFly::DragonFly() {
	unitCost = 75;
	weaponCapacity = 1;
	movementRange = 3;
	attackPower = 20;
	defense = 50;
	health = 30;
	name = "Dragon Fly";
	movementType = fly;

	//unitTexture.loadFromFile();
	unitSprite.setTexture(unitTexture);
}
