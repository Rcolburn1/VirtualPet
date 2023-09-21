#include "Pikachu.h"

Pikachu::Pikachu(const string& name, const string& species, int health, int power) : Pokemon(name)
{
	name = name;
	species = species;
	health = health;
	electricPower = power;
}

void Pikachu::useElectricShock()
{
	cout << "Pikachu uses Thunder!" << endl;
}

void Pikachu::getElectricPower()
{
	cout << electricpower << endl;
}

