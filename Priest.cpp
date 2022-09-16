#include "Priest.h"


Priest::Priest()
{
	
}

Priest::~Priest()
{
}

void Priest::setHealth(int Health)
{
	m_Health = Health;
	
}



std::vector<Item*> Priest::CreateInventory()
{
	
	Item* I1 = new Item();
	std::string I1Description;
	I1->setDamage(0);
	I1->setDefense(10);
	I1->setItemName("Robe of the Hawk");
	I1->setItemDescription(I1Description);
	m_Inventar.push_back(I1);

	Item* I2 = new Item();
	std::string I2Description;
	I2->setDamage(0);
	I2->setDefense(10);
	I2->setItemName("Chainmail");
	I2->setItemDescription(I2Description);
	m_Inventar.push_back(I2);

	Item* I3 = new Item();
	std::string I3Description;
	I3->setDamage(20);
	I3->setDefense(0);
	I3->setItemName("Iron Rapier");
	I3->setItemDescription(I3Description);
	m_Inventar.push_back(I3);
	return m_Inventar;
}



