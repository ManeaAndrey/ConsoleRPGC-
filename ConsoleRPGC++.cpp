
#include <iostream>
#include "SceneFunctions.h"
#include "Wizard.h"

int main()
{
  
	if (Intro())
		std::cout << "You have started the game\n";
	else
		std::cout << "Bye\n";

	std::string Name;
	std::cout << "Chose a name for your hero: ";
	std::cin >> Name;
	Player player;
	player.setPlayerName(Name);
	std::cout<<player.getPlayerName();

}

