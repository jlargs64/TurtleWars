#include "LandUnits.h"

Gecko::Gecko(){
	movementRange = 3;
	attackPower = 25;
	defense = 15;
	health = 75;
	name = "Gecko";

	unitTexture.loadFromFile("Assets/Sprites/Def_Turtle.png");
	unitSprite.setTexture(unitTexture);
	unitSprite.setOrigin(sf::Vector2f(50, 50));
}

BoxTurtle::BoxTurtle(){
	unitCost = 50;
	weaponCapacity = 1;
	movementRange = 2;
	attackPower = 35;
	defense = 50;
	health = 150;
	name = "Box Turtle";
	movementType = amphibious;

	//unitTexture.loadFromFile();
	unitSprite.setTexture(unitTexture);
}

Lizard::Lizard(){
	unitCost = 40;
	movementRange = 3;
	attackPower = 50;
	defense = 30;
	health = 100;
	name = "Lizard";

	unitTexture.loadFromFile("Assets/Sprites/Lizard_Move.png");
	unitSprite.setTexture(unitTexture);
}

Frog::Frog(){
	unitCost = 60;
	movementRange = 3;
	attackPower = 30;
	defense = 20;
	health = 90;
	name = "Frog";

	//unitTexture.loadFromFile();
	unitSprite.setTexture(unitTexture);
}

Alligator::Alligator(){
	unitCost = 100;
	weaponCapacity = 2;
	movementRange = 2;
	attackPower = 100;
	defense = 100;
	health = 200;
	name = "Alligator";
	movementType = amphibious;

	//unitTexture.loadFromFile();
	unitSprite.setTexture(unitTexture);
}

Toad::Toad(){
	unitCost = 75;
	movementRange = 3;
	attackPower = 40;
	defense = 50;
	health = 125;
	name = "Toad";

	//unitTexture.loadFromFile();
	unitSprite.setTexture(unitTexture);
}