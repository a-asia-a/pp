#include "Graph.h"
#define DEBUG 1

Graph::Graph(int numberOfNodes) :
	numberOfNodesInGraph(numberOfNodes)
{
	createGraph();
}

Graph::~Graph()
{
}

Graph* Graph::getInstance(int numberOfNodes) {
	if (instance == 0)
		instance = new Graph(numberOfNodes);
	return instance;
}

int Graph::getNumberOfNodesInGraph() {
	return numberOfNodesInGraph;
}

char Graph::randInputValueForNode(){
	Protocol *protocol = protocol->getInstance();
	int rnd = std::rand() % protocol->getSizeOfInputAlphabet();
	std::set <char> ::iterator it = protocol->getHandlerToInputAlhabet();
	advance(it, rnd);

	return *it;
}

void Graph::createGraph(){
	for (int i = 0; i < numberOfNodesInGraph; i++){
		char inicializeInputChar = randInputValueForNode();	
		Node nodeTemp(inicializeInputChar);
		setNodesInGraph.push_back(nodeTemp);
		//std::cout << "dodano nowy wezel o stanie pocz " << inicializeInputChar << std::endl;
	}
	//std::cout << "end CreateGraph" << std::endl;
}

void Graph::runInputFunction() {
	Protocol *protocol = protocol->getInstance();
	std::vector<Node>::iterator it;
	for (it = setNodesInGraph.begin(); it != setNodesInGraph.end(); ++it) {
		char stateOfNode = protocol->getResultOfInputFunction(it->getInputOfNode());
		it->setStateOfNode(stateOfNode);
		//std::cout << "stan " << it->getStateOfNode() <<std::endl;
	}
	//std::cout << "end InputFunction" << std::endl;
}

std::vector<Node>::iterator Graph::getHandlerToSetOfNodesInGraph() {
	//std::vector<Node>::iterator it;
	return setNodesInGraph.begin();
}

void Graph::runStatesFunction() {
#ifdef DEBUG
	std::vector <Node> ::iterator it;
	for (it = setNodesInGraph.begin(); it != setNodesInGraph.end(); ++it) {
		std::cout << it->getStateOfNode() << " "; // << std::endl;
	}
	std::cout << std::endl;
#endif

	int i = 0;
	while (allNodesHaveTheSameState() == false) {
		if (i > 1000) {
			resultOfProtocol(false);
			break;
		}
		oneIteractionOfStatesFunction();
		runOutputFunction();
		i++;
	}
}

void Graph::runOutputFunction() {
	Protocol *protocol = protocol->getInstance();
	std::vector <Node> ::iterator it;
	for (it = setNodesInGraph.begin(); it != setNodesInGraph.end(); ++it) {
		char outputState = protocol->getResultOfOutputFunction(it->getStateOfNode());
		it->setOutputOfNode(outputState);
		//std::cout << outputState << " "; // << std::endl;
	}
	//std::cout << std::endl;
}

void Graph::oneIteractionOfStatesFunction() {
	Protocol *protocol = protocol->getInstance();
	Graph *graph = graph->getInstance(protocol->globalNumberOfNode);
	
	int rnd1 = std::rand() %  graph->getNumberOfNodesInGraph();
	int rnd2 = std::rand() %  graph->getNumberOfNodesInGraph();
	while (rnd2 == rnd1) {
		rnd2 = std::rand() % graph->getNumberOfNodesInGraph();
	}
	//std::cout << "rnd " << rnd1 << "  " << rnd2 << std::endl;

	char stateOfInitiatorNode = setNodesInGraph[rnd1].getStateOfNode();
	char stateOfResponderNode = setNodesInGraph[rnd2].getStateOfNode();	
	std::pair<char, char> newStatesOfNodes = protocol->getResultOfStatesFunction(stateOfInitiatorNode, stateOfResponderNode);
	//std::cout << "(" << stateOfInitiatorNode << "," << stateOfResponderNode << ") -> (" <<
	//	newStatesOfNodes.first << "," << newStatesOfNodes.second <<")" << std::endl;

	setNodesInGraph[rnd1].setStateOfNode(newStatesOfNodes.first);
	setNodesInGraph[rnd2].setStateOfNode(newStatesOfNodes.second);
	
#ifdef DEBUG
	std::vector <Node> ::iterator it;
	for (it = setNodesInGraph.begin(); it != setNodesInGraph.end(); ++it) {
		std::cout << it->getStateOfNode() << " "; // << std::endl;
	}
	std::cout << std::endl;
#endif
	
	//Graph *graph = graph->getInstance(protocol->globalNumberOfNode);
	//char stateOfInitiatorNode = initiatorNodePointer->getStateOfNode();
	//char stateOfResponderNode = responderNodePointer->getStateOfNode();
	//std::pair<char, char> newStatesOfNodes = protocol->getResultOfStatesFunction(stateOfInitiatorNode, stateOfResponderNode);
	//initiatorNodePointer->setStateOfNode(newStatesOfNodes.first);	
	//responderNodePointer->setStateOfNode(newStatesOfNodes.second);
}

Node Graph::randNodesToInteraction() {
	Protocol *p = p->getInstance();
	Graph *graph = graph->getInstance(p->globalNumberOfNode);
	int rnd = std::rand() % graph->getNumberOfNodesInGraph();
	std::vector <Node> ::iterator it = graph->getHandlerToSetOfNodesInGraph();
	advance(it, rnd);

	return *it;
}

std::vector <Node> ::iterator Graph::randPointerToNodesToInteraction() {
	Protocol *p = p->getInstance();
	Graph *graph = graph->getInstance(p->globalNumberOfNode);
	int rnd = std::rand() % graph->getNumberOfNodesInGraph();
	std::cout << "rnd " << rnd << std::endl;
	std::vector <Node> ::iterator it = graph->getHandlerToSetOfNodesInGraph();
	advance(it, rnd);
	//std::cout << "www  " << setNodesInGraph[0].getStateOfNode() << std::endl;

	return it;
}

bool Graph::allNodesHaveTheSameState() {
	Protocol *protocol = protocol->getInstance();
	std::vector <Node> ::iterator it;
	bool allOutputOfNodesAreEqual = false;
	int sumOfOutput = 0;
	for (it = setNodesInGraph.begin(); it != setNodesInGraph.end(); ++it) {
		sumOfOutput += int(it->getOutputOfNode()) - 48;
	}

	if (sumOfOutput == 0 || sumOfOutput == protocol->globalNumberOfNode) {
		resultOfProtocol(true);
		return true;
	}
	else
		return false;
}

int Graph::resultOfProtocol(bool result) {
	std::cout << result << std::endl;
	return result;
}