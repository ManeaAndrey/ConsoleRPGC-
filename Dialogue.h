#pragma once
#include<iostream>
#include<string>
#include<vector>

class DialogueNode;


class DialogueOption {
public:
	
	DialogueOption(std::string Text, DialogueNode* nextNode, int returnOption);
	std::string m_Text;
	DialogueNode* m_nextNode;
	int m_returnOption;
};



class DialogueNode {
public:
	DialogueNode(std::string Text);
	std::string m_Text;
	std::vector<DialogueOption> dialogueOption;

};

class Dialogue
{
	
public:
	
	Dialogue();
	~Dialogue();
	int Talkto();
	
	char selection;
private:
	std::vector <DialogueNode*> m_dialogueNodes;

};

