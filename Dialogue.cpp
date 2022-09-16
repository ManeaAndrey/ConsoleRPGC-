#include "Dialogue.h"

Dialogue::Dialogue()
{
	DialogueNode* node0 = new DialogueNode("Why do you bother me, aprentice ?");
	DialogueNode* node1 = new DialogueNode("I am here to make sure you don't blow yourself up.");
	DialogueNode* node2 = new DialogueNode("Yes, add red crystal shards.");
	DialogueNode* node3 = new DialogueNode("Nah, pay attention to the intro !");

	
	node0->dialogueOption.push_back(DialogueOption("1-What is your role here?",node1,0));
	node0->dialogueOption.push_back(DialogueOption("2-Goodbye master", nullptr, 0));
	m_dialogueNodes.push_back(node0);

	node1->dialogueOption.push_back(DialogueOption("1-Can you help me with this recipe?", node2, 0));
	node1->dialogueOption.push_back(DialogueOption("2-Goodbye master", nullptr, 0));
	node1->dialogueOption.push_back(DialogueOption("3-Tell me more about the Pilgrimage", node3, 0));
	m_dialogueNodes.push_back(node1);

	node2->dialogueOption.push_back(DialogueOption("1-Thank you, Goodbye!", nullptr, 0));
	m_dialogueNodes.push_back(node2);

	node3->dialogueOption.push_back(DialogueOption("1-Rude,Bye !", nullptr, 1));
	m_dialogueNodes.push_back(node3);

}

Dialogue::~Dialogue()
{
}

int Dialogue::Talkto()
{

	DialogueNode* CurrentSelection = m_dialogueNodes[0];
	do
	{
		std::cout << CurrentSelection->m_Text << std::endl;
		for (int i = 0; i < CurrentSelection->dialogueOption.size(); i++)
		{
			std::cout << CurrentSelection->dialogueOption[i].m_Text <<std::endl;
		}
		int input;
		std::cin >> input;
		input--;
		
		//end of conversation check/returnOption for result
		if (CurrentSelection->dialogueOption[input].m_nextNode == nullptr) {
			return CurrentSelection->dialogueOption[input].m_returnOption;
		}
		CurrentSelection = CurrentSelection->dialogueOption[input].m_nextNode;
		std::cout << std::endl;
	} while (true);

}


DialogueOption::DialogueOption(std::string Text, DialogueNode* nextNode, int returnOption) :
	m_Text(Text), m_nextNode(nextNode), m_returnOption(returnOption)
{

};

DialogueNode::DialogueNode(std::string Text) :
	m_Text(Text)
{

};