#pragma once
#include "Player.h"
class Alchemist :
   virtual public Player
{
public:
	Alchemist(int Health, int AttackPower);
	~Alchemist();
	 int m_Health;
	 int m_AttackPower;


};

