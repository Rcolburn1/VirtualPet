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
		Digimon(const string& digiName, const string& digiElement);
		void specialAttack();
		string getElement();
};

#endif
