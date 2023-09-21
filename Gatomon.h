#ifndef GATOMON_H
#define GATOMON_H

class Gatomon : public Digimon
{
	private:
		int catClawSharpness;

	protected:
		void increaseHappiness(int amount);

	public:
		Gatomon(const string& name, const string& Element, int happiness, int hunger, int sharpness);
		void useCatClawAttack();
		void adjustSharpness(int amount);
		void getSharpness();
};

#endif
