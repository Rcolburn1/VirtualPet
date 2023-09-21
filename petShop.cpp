#include "VirtualPet.h"
#include "Pokemon.h"

int main() {
	VirtualPet myLittleBoringPet("Basic Pet");
	myLittleBoringPet.feed();
	myLittleBoringPet.play();
	myLittleBoringPet.makeSound();

	cout << "Name: " << myLittleBoringPet.getName() << endl;
	cout << "Happiness: " << myLittleBoringPet.getHappiness() << endl;
	cout << "Hunger: " << myLittleBoringPet.getHunger() << endl;

	Pokemon pokemanz("Pokemanz", "Pokespeez");
	pokemanz.feed();
	pokemanz.play();
	pokemanz.makeSound();

	cout << "Name: " << pokemanz.getName() << endl;
	cout << "Happiness: " << pokemanz.getHappiness() << endl;
	cout << "Hunger: " << pokemanz.getHunger() << endl;
	cout << "Health: " << pokemanz.getHealth() << endl;
	cout << "Species: " << pokemanz.getSpecies() << endl;

	Pikachu PikaDude("PikaDude", "Electric Mouse", 120);
	cout << "Name: " << PikaDude.getName() << endl;
	cout << "Species: " << PikaDude.getSpecies() << " Pokemon" << endl;
	cout << "Electric Power: " << PikaDude.getElectricPower() << endl;
	cout << "Pikachu attack his Snorlax!" << endl;
	Pikachu.useElectricShock();
	cout << "Snorlax Fainted!" << endl;

	Digimon digitalMonster("Greymon", "Fire");
	cout << "Name: " << digitalMonster.getName() << endl;
	cout << "Element: " << digitalMonster.getElement() << endl;
	digitalMonster.useSpecialAttack();

	Gatomon Gatomonz("GatoGato", "Holy", 100);
	cout << "Name: " << Gatomonz.getName() << endl;
	cout << "Element: " << Gatomonz.getElement() << endl;
	cout << "Sharpness: " << Gatomonz.getSharpness() << endl;
	cout << "Gatomonz Attacks!" << endl;
	Gatomonz.useCatClawAttack();
	cout << "Sharpness: " << Gatomonz.getSharpness() << endl;

	return 0;
}
