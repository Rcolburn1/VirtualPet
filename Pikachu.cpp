#include "Pikachu.h"

Pikachu::Pikachu(const string& name, const string& species, int health, int power)
{
	name = name;
	species = species;
	health = health;
	electricPower = power;
}

void useElectricShock()
{
	cout << "Pikachu uses Thunder!" << endl;
}

