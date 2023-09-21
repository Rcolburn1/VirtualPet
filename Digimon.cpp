#include "Digimon.h"

Digimon::Digimon(const string& name, int happiness, int hunger, const string& Element)
{
	name = name;
	happiness = happiness;
	hunger = hunger;
	element = Element;
}

void Digimon::specialAttack()
{
	cout << "Special Attack!" << endl;
}

