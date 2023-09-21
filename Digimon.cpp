#include "Digimon.h"

Digimon::Digimon(const string& digiName, const string& digiElement) : VirtualPet(digiName)
{
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

