#include "Object.h"

void Object::setObjectName(std::string ObjectName)
{
   this->m_ObjectName=ObjectName;
}

Object::~Object()
{
}

void Object::setObjectDescription(std::string ObjectDescription)
{
	this->m_ObjectDescription = ObjectDescription;
}


