#ifndef PIKACHU_H
#define PIKACHU_H

#include "Pokemon.h"

class Pikachu : public Pokemon
{
	private:
		int electricPower;

	protected:
		void increaseHappiness(int amount);

	public:
		Pikachu(const string& name, const string& species, int health, int power);
		void useElectricShock();
		void getElectricPower();
};

#endif

