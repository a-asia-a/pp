#pragma once
#include "Node.h"
//#include "Protocol.h"
#include <vector>
#include "Functions.h"
#include <fstream>

class Graph
{
private:
	static Graph* instance;	
	std::vector <Node> setNodesInGraph;
	int numberOfNodesInGraph;
public:
	bool result;
	int wynik;
public:	
	static Graph* getInstance(int numerOfNodes);
	Graph(int numberOfNodes);
	~Graph();
	int getNumberOfNodesInGraph();
	char randInputValueForNode();
	void createGraph();
	void runInputFunction();
	void runStatesFunction();
	void runOutputFunction();
	void setResultOfProtocol(bool result);
	void oneIteractionOfStatesFunction();
	std::vector<Node>::iterator getHandlerToSetOfNodesInGraph();
	Node randNodesToInteraction();
	std::vector <Node> ::iterator randPointerToNodesToInteraction();
	bool allNodesHaveTheSameState();
	bool getResultOfProtocol();
	void saveGraph();
	void readSavedGraph();
	int getWynik();
};
