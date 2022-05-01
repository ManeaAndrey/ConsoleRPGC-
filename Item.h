#pragma once
#include<iostream>
#include<string>
class Item
{
public:
	Item();
	void setDamage(int damage) {
		this->m_damage = damage;
	}
	void setDefense(int defense) {
		this->m_defense = defense;
	}
	void setItemName(std::string ItName) {
		this->ItemName = ItName;
	}
	void setItemDescription(std::string ItDes) {
		this->ItemDescription = ItDes;
	}
	void setItemId(int Id) {
		this->ItemID = Id;
	}

	int getDamage() {
		return m_damage;
	}
	int getDefense() {
		return m_defense;
	}
	std::string getItemName() {
		return ItemName;
	}
	std::string getItemDescription() {
		return ItemDescription;
	}
	int getItemId() {
		return ItemID;
	}


protected:
	std::string ItemName;
	int ItemID;
	int m_damage;
	int m_defense;
	std::string ItemDescription;

};

