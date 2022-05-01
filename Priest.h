#pragma once
#include "Player.h"
class Priest :
   virtual public Player
{
public:
	Priest(int Health, int AttackPower);
	~Priest();
	int m_Health;
	int m_AttackPower;



};

