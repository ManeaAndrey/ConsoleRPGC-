#pragma once
#include<string>


class Player
{
public:
	std::string m_PlayerName;
	void setPlayerName(std::string PlayerName);
	std::string getPlayerName() {
		return m_PlayerName;
	}
	virtual ~Player();
	

protected:
	virtual void Attack();
	int m_Health;
	int m_AttackPower;
	
	




};

