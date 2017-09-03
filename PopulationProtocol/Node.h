#pragma once
#include "Protocol.h"

class Node
{
private:
	char initializeInputOfNode;
	char stateOfNode; 
	char outputOfNode;
	int id;
	
public:
	Node(char inputChar);
	//Node(char state, int id);
	char getInputOfNode();
	void setInputOfNode(char initializeInput);
	char getStateOfNode();
	void setStateOfNode(char state);
	char getOutputOfNode();
	void setOutputOfNode(char output);
	int getIdOfNode();
	void setIdOfNode(int id);
};
