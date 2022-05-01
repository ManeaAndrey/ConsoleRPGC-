
#include <iostream>
#include"windows.h"
#include "SceneFunctions.h"
#include "Priest.h"
#include"item.h"
#include<string>
#include<vector>

int main()
{
	Title();
	PlaysoundIntro();
	if (Intro())
		std::cout << "You have started the game\n";
	else {
		std::cout << "Bye!\n";
		return 0;
	}
	system("cls");
	Title();
	Playsound1();
	std::string Name;
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "Chose a name for your hero: ";
	std::cin >> Name;
	Player player;
	player.setPlayerName(Name);
	std::cout<<player.getPlayerName()<<" ";
	bool PlayerClass;
	if (ChoseClass()) {
		std::cout << "The Priest " << Name << " sets off on their journey!\n";
		PlayerClass = 1;
	}
	else {
		std::cout << "The Alchemist " << Name << " sets off on their journey!\n";
		PlayerClass = 0;
	}
	std::vector<Item*> Inventar;
	if (PlayerClass)
		 Inventar=CreatePriestInventory();
	else
		Inventar=CreateAlchemistInventory();
	system("cls");
	Title();
	ShowInventory(Inventar);
	Playsound2();
	int direction = ChoseDirection(Name);

}

