#include "Pikachu.h"

Pikachu::Pikachu(const string& name, const string& species, int power) : Pokemon(name, species)
{
	electricPower = power;
}

void Pikachu::useElectricShock()
{
	cout << "Pikachu uses Thunder!" << endl;
}

int Pikachu::getElectricPower()
{
	return electricPower;
}

