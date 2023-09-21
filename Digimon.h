#ifndef DIGIMON_H
#define DIGIMON_H

#include "VirtualPet.h"

class Digimon : public VirtualPet
{
	private:
		string element;

	protected:
		void increaseHappiness(int amount);
	
	public:
		Digimon(const string& name, int happiness, int hunger, const string& Element);
		void specialAttack();
};

#endif
