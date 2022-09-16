#pragma once
#include<string>
#include<vector>
#include"Item.h"
#include"NPC.h"
#include"Object.h"
#include"SceneFunctions.h"




class Player
{
public:
	void SetPlayerName(std::string PlayerName);
	std::string GetPlayerName();
	virtual ~Player();
	std::vector<Item*> m_Inventar;
	virtual void SetHealth(int Health);
	virtual void SetMaxHealth(int MaxHealth);
	virtual void CheckItem();
	virtual std::vector<Item*> CreateInventory();
	virtual void ShowInventory();
	virtual void ExamineObject(Object* object);
	virtual void HealDamage(int Health);
	virtual void TakeDamage(int Damage);
	virtual void Scene1();
	virtual int GetPlayerHealth();
	virtual void UseItem();//not implemented
	virtual void TalkTo(NPC* npc);
	virtual void ExamineNpc(NPC* npc);

protected:
	int m_Health;
	int m_MaxHealth;
	std::string m_PlayerName;

};

