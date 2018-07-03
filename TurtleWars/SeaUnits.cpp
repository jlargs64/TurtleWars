#include "SeaUnits.h"

Tadpole::Tadpole(){
	unitCost = 10;
	movementRange = 3;
	attackPower = 10;
	defense = 25;
	health = 10;
	name = "Tadpole";
	movementType = swim;

	//unitTexture.loadFromFile();
	unitSprite.setTexture(unitTexture);
}

GreenSeaTurtle::GreenSeaTurtle(){
	unitCost = 50;
	weaponCapacity = 1;
	movementRange = 3;
	attackPower = 20;
	defense = 75;
	health = 50;
	name = "Green Sea Turtle";
	movementType = swim;

	//unitTexture.loadFromFile();
	unitSprite.setTexture(unitTexture);
}
