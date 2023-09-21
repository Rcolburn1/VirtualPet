#ifndef GATOMON_H
#define GATOMON_H
#include "Digimon.h"

class Gatomon : public Digimon
{
	private:
		int catClawSharpness;

	protected:
		void increaseHappiness(int amount);

	public:
		Gatomon(const string& name, const string& Element, int sharpness);
		void useCatClawAttack();
		void adjustSharpness(int amount);
		int getSharpness();
};

#endif
