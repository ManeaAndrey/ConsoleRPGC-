#pragma once
#include "Player.h"
class Priest :
   virtual public Player
{
public:
	
	Priest();
	~Priest();
	void setHealth(int Health);
	
	std::vector<Item*> CreateInventory();
	
	
	

};

