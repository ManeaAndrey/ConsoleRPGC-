#pragma once
#include "Player.h"
class Alchemist :
    public Player
{
public:
	
	Alchemist();
	~Alchemist();
	 void setHealth(int Health);
	
	 std::vector<Item*> CreateInventory();

	 void Scene1();

};

