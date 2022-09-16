#include "NPC.h"

void NPC::setNpcName(std::string Name)
{
	this->m_NpcName = Name;
}

void NPC::setNpcDescription(std::string Description)
{
	this->m_NpcDescription = Description;
}

NPC::~NPC()
{
}


void NPC::setdialogue(std::vector<std::vector<std::string>> dialogue)
{
	this->dialogue = dialogue;
}

void NPC::setIntro(std::string Intro)
{
	this->Intro = Intro;
}

void NPC::setOutro(std::string Outro)
{
	this->Outro = Outro;
}


