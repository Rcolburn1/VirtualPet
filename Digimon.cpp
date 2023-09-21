#include "Digimon.h"

Digimon::Digimon(const string& name, const string& digiElement) : VirtualPet(name)
{
	name = digiName;
	happiness = 100;
	hunger = 100;
	element = digiElement;
}

void Digimon::specialAttack()
{
	cout << "Special Attack!" << endl;
}

void Digimon::getElement()
{
	cout << element << endl;
}


