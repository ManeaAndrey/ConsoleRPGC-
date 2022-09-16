#include "Alchemist.h"




Alchemist::Alchemist()
{	
}

Alchemist::~Alchemist()
{
}

void Alchemist::setHealth(int Health)
{
	m_Health = Health;
	
}




std::vector<Item*> Alchemist::CreateInventory()
{
	
	Item* I1 = new Item();
	std::string I1Description="The drip";
	I1->setDamage(0);
	I1->setDefense(10);
	I1->setItemName("Alchemist Garb");
	I1->setItemDescription(I1Description);
	m_Inventar.push_back(I1);

	Item* I2 = new Item();
	std::string I2Description="Makes big ouch !";
	I2->setDamage(5);
	I2->setDefense(0);
	I2->setItemName("Cermonial Knife");
	I2->setItemDescription(I2Description);
	m_Inventar.push_back(I2);


	Item* I4 = new Item();
	std::string I4Description;
	I4->setDamage(0);
	I4->setDefense(0);
	I4->setItemName("Concentrated Poison");
	I4->setItemDescription(I4Description);
	m_Inventar.push_back(I4);

	Item* I5 = new Item();
	std::string I5Description;
	I5->setDamage(0);
	I5->setDefense(0);
	I5->setItemName("Healing Salve");
	I5->setItemDescription(I5Description);
	m_Inventar.push_back(I5);
	return m_Inventar;
}


void Alchemist::Scene1()
{
	
	char input;
	std::cout << "Press '1' to add the fire beatle\n";
	std::cout << "Press '2' to add red crystal shards\n";
	std::cin >> input;

	Item* I3 = new Item();
	std::string I3Description;
	I3->setDamage(100);
	I3->setDefense(0);
	I3->setItemName("Explosive Mixture");
	I3->setItemDescription(I3Description);
	do {
		switch (input) {
		case '1':
			std::cout << "Wrong choice, the mixture explodes in your face.\n";
			TakeDamage(15);
			std::cout << "Health remaning is:"<< GetPlayerHealth() << "\n";
			break;
		case '2':
			std::cout<<"Just like the recipe says, the explosive mixture is complete\n";
			m_Inventar.push_back(I3);
			break;
		default:std::cout << "invalid option, try again.\n";
		}
		
		}
		while (!(input == '1') && !(input == '2'));
		
	}


