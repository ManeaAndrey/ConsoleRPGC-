#pragma once
#include<iostream>
#include <string>
#include<vector>

class NPC
{
public:
	void setNpcName(std::string Name);
	void setNpcDescription(std::string Description);
	~NPC();
	std::string Intro;
	std::string Outro;
	std::vector<std::vector<std::string>> dialogue;
	void setdialogue(std::vector<std::vector<std::string>> dialogue);
	void setIntro(std::string Intro);
	void setOutro(std::string Outro);
		
	std::string getNpcName() {
		return m_NpcName;
	}
	std::string getIntro() {
		return Intro;
	}
	std::string getOutro() {
		return Outro;
	}
	
	std::string m_NpcDescription;

private:
	std::string m_NpcName;
	

};

