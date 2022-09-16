#include "Player.h"



void Player::SetPlayerName(std::string PlayerName)
{
	this->m_PlayerName = (PlayerName);
}

std::string Player::GetPlayerName()
{
	return m_PlayerName;
}

Player::~Player()
{
}

void Player::SetHealth(int Health)
{
	m_Health = Health;
	
}

void Player::SetMaxHealth(int MaxHealth)
{
	m_MaxHealth = MaxHealth;
}




void Player::CheckItem()
{
	int num = -1;
	do {
		char input;
		std::cout << "Select Item to inspect:\n";
		ShowInventory();
		std::cin >> input;
		
		if (isdigit(input))
		{
			num = input - '0';
			std::cout << num << std::endl;
		}
	} while (num==-1);

	int count = 1;
	
	for (auto& Item : m_Inventar) {
		if (count == num) {
			std::cout << count << " " << Item->getItemName() <<":"<<"\n";
			std::cout <<" " << Item->getItemDescription() << "\n";
		}
		count++;
	}

}
int Player::GetPlayerHealth() {
	return m_Health;
}

void Player::UseItem()
{





}

std::vector<Item*> Player::CreateInventory()
{
	return std::vector<Item*>();
}

void Player::ShowInventory()
{
	int count=1;
	for (auto& Item : m_Inventar) {
		std::cout << count <<" "<< Item->getItemName() << "\n";
		count++;
	}
}




void Player::ExamineObject(Object* object)
{
	
	std::cout << object->m_ObjectDescription<<std::endl;
	
}

void Player::HealDamage(int Health)
{
	if (m_Health + Health > m_MaxHealth)
		m_Health = m_MaxHealth;
	else
		m_Health += Health;
	
}

void Player::TakeDamage(int Damage)
{
	if (m_Health - Damage <= 0)
		Failed();
	else
	m_Health -= Damage;

}

void Player::Scene1()
{
}

void Player::TalkTo(NPC* npc)
{
	std::cout << npc->Intro << "\n";
	int selection{};
	int end = npc->dialogue[0].size();
	do {
		for (int i = 0; i < end; i++)
		{
			if (i == 0) {
				std::cout << "Choose a dialogue option:\n";
			}
			std::cout << npc->dialogue[0][i] << "\n";
			
			if (i == npc->dialogue[0].size() - 1) {
				std::cin >> selection;
				if (selection == end - 1)
					break;
				system("cls");
				Title();
				std::cout << npc->dialogue[1][selection] << "\n";
				std::cout << "Anything else?" << "\n";
			}
		}
	} while (selection != end-1);

	std::cout << npc->Outro << "\n";

}

void Player::ExamineNpc(NPC* npc)
{
	std::cout << npc->m_NpcDescription << std::endl;
}




