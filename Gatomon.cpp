#include "Gatomon.h"
#include <iostream>
#include <string>

Gatomon::Gatomon(const string& name, const string& Element, int sharpness) : Digimon(name, Element)
{
	catClawSharpness = sharpness;
}

void Gatomon::useCatClawAttack()
{
	cout << "Gatomon uses its claws!" << endl;
	adjustSharpness(-10);
}

void Gatomon::adjustSharpness(int amount)
{
	if(amount > 0)
	{
		catClawSharpness += amount;
		cout << "Gatomon's claws sharpen!" << endl;
	}

	else if(amount < 0)
	{
		catClawSharpness += amount;
		cout << "Gatomon's claws dull!" << endl;
	}
}

void Gatomon::getSharpness()
{
	cout << catClawSharpness << endl;
}
