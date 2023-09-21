#include "Gatomon.h"

Gatomon::Gatomon(const string& name, const string& Element, int happiness, int hunger, int sharpness)
{
	name = name;
	element = Element;
	happiness = hapiness;
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
