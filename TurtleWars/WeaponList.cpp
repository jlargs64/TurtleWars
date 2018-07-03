#include "WeaponList.h"

GatlingGun::GatlingGun(){
	ammoCapacity = 500;
	rpm = 10;
	damage = 25;
	range = 1;
	name = "Gatling Gun";

	//setWeaponSprite();
}

MissileLauncher::MissileLauncher()
{
	ammoCapacity = 20;
	rpm = 1;
	damage = 150;
	range = 2;
	name = "Missile Launcher";

	//setWeaponSprite();
}

Sniper::Sniper()
{
	ammoCapacity = 50;
	rpm = 1;
	damage = 75;
	range = 3;
	name = "Sniper";

	//setWeaponSprite();
}

Mortar::Mortar()
{
	ammoCapacity = 75;
	rpm = 3;
	damage = 35;
	range = 4;
	name = "Mortar";

	//setWeaponSprite();
}

FlameThrower::FlameThrower()
{
	ammoCapacity = 75;
	rpm = 3;
	damage = 50;
	range = 1;
	name = "Flamethrower";

	//setWeaponSprite();
}