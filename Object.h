#pragma once
#include<iostream>
#include"Item.h"
#include<string>
class Object
{
public:
	void setObjectName(std::string ObjectName);
	std::string getObjectName() {
		return m_ObjectName;
	}
	virtual ~Object();
	void setObjectDescription(std::string ObjectDescription);
	std::string m_ObjectDescription;
	std::string m_ObjectName;
	Item* item;


};

