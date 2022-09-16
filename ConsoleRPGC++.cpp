
#include <iostream>
#include"windows.h"
#include "SceneFunctions.h"
#include "Priest.h"
#include"Alchemist.h"
#include"NPC.h"
#include"item.h"
#include<string>
#include<vector>
#include "Dialogue.h"


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
	Player* player = new Player;
	
	
	if (ChoseClass()) {
		 std::cout << "The Priest " << Name << " sets off on their journey!\n";
		 player = new Priest();
		 Priest* priest = dynamic_cast<Priest*>(player);
		 priest->SetHealth(100);
		 priest->SetMaxHealth(100);
	
	}
	else {
		std::cout << "The Alchemist " << Name << " sets off on their journey!\n";
	    player = new Alchemist();
		Alchemist* alchemist = dynamic_cast<Alchemist*>(player);
		alchemist->SetHealth(50);
		alchemist->SetMaxHealth(50);
	
		
	}
	
	player->SetPlayerName(Name);
	
	
	system("cls");
	Title();	

	player->m_Inventar=player->CreateInventory();
	//player->ShowInventory();
	//char direction = ChoseDirection(Name);
	Continue();
	//std::cout << player->GetPlayerHealth();
	//std::cout << player->GetPlayerHealth()<<"\n";
	//player->CheckItem();
	
	Playsound2();
	NPC* AlchemistMaster = new NPC;
	CreateAlchemistMasterNPC(AlchemistMaster);
	//player->TalkTo(AlchemistMaster);


	Dialogue Test;
	//Test.Talkto();
	int test = Test.Talkto();
    if (test == 1) {
		std::cout << "conv over\n";
	}

	
	system("cls");
	Title(); 
	player->Scene1();
	delete player;
	delete AlchemistMaster;


}

