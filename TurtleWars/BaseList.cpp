#include "BaseList.h"

BasicTurtle::BasicTurtle() {
	weaponCapacity = 3;
	unitCost = 0;
	movementRange = 1;
	health = 400;
	defense = 250;
	attackPower = 30;

	dead = false;
	critical = true;
	name = "Basic Base";
	movementState = isMoving;
	movementType = land;

	unitTexture.loadFromFile("Assets/Sprites/Def_Turtle_Move.png");
	unitSprite.setTexture(unitTexture);
}

GalapagosTurtle::GalapagosTurtle() {
	weaponCapacity = 3;
	unitCost = 0;
	movementRange = 1;
	health = 600;
	defense = 300;
	attackPower = 0;

	dead = false;
	critical = true;
	name = "Galapagos Turtle";
	movementState = isMoving;
	movementType = land;

	unitTexture.loadFromFile("Assets/Sprites/Gala_Turtle_Move.png");
	unitSprite.setTexture(unitTexture);
}

SnappingTurtle::SnappingTurtle() {
	weaponCapacity = 2;
	unitCost = 0;
	movementRange = 2;
	health = 400;
	defense = 200;
	attackPower = 50;

	dead = false;
	critical = true;
	name = "Snapping Turtle";
	movementState = isMoving;
	movementType = land;

	unitTexture.loadFromFile("Assets/Sprites/Snap_Turtle_Move.png");
	unitSprite.setTexture(unitTexture);
}

SnakeTurtle::SnakeTurtle() {
	weaponCapacity = 2;
	unitCost = 0;
	movementRange = 2;
	health = 400;
	defense = 200;
	attackPower = 50;

	dead = false;
	critical = true;
	name = "Snake Turtle";
	movementState = isMoving;
	movementType = land;

	unitTexture.loadFromFile("Assets/Sprites/Snake_Turtle_Move.png");
	unitSprite.setTexture(unitTexture);
}

SeaTurtle::SeaTurtle() {
	weaponCapacity = 4;
	unitCost = 0;
	movementRange = 1;
	health = 500;
	defense = 250;
	attackPower = 0;

	dead = false;
	critical = true;
	name = "Sea Turtle";
	movementState = isMoving;
	movementType = amphibious;

	unitTexture.loadFromFile("Assets/Sprites/Sea_Turtle_Move.png");
	unitSprite.setTexture(unitTexture);
}
