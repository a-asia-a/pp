#include "Graph.h"

Graph::Graph(int numberOfNodes) :
	numberOfNodesInGraph(numberOfNodes)
{
	createGraph();
	//runInputFunction();
	//runStatesFunction();
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
	std::vector<Node>::iterator it;
	it = setNodesInGraph.begin();

	return it;
}

void Graph::runStatesFunction() {
	//std::cout << "start runStatesFunction" << std::endl;
	int i = 0;
	while (i < 100) {
		oneIteractionOfStatesFunction();
		i++;
	}
	//std::cout << "end runStatesFunction" << std::endl;
}

void Graph::oneIteractionOfStatesFunction() {
	//std::cout << "start oneIteractionOfStatesFunction" << std::endl;
	Protocol *protocol = protocol->getInstance();

	Node initiatorNode = randNodesToInteraction();
	Node responderNode = randNodesToInteraction();
	char stateOfInitiatorNode = initiatorNode.getStateOfNode();
	char stateOfResponderNode = responderNode.getStateOfNode();
	
	std::pair<char, char> newStatesOfNodes = protocol->getResultOfStatesFunction(stateOfInitiatorNode, stateOfResponderNode);
	
	initiatorNode.setStateOfNode(newStatesOfNodes.first);
	responderNode.setStateOfNode(newStatesOfNodes.second);

	std::cout << "wylosowano Node " << stateOfInitiatorNode << " i " << stateOfResponderNode;
	std::cout << "   nowe stany: " << newStatesOfNodes.first << " i " << newStatesOfNodes.second << std::endl;	
	//std::cout << "end oneIteractionOfStatesFunction" << std::endl;
	std::vector <Node> ::iterator it;
	for (it = setNodesInGraph.begin(); it != setNodesInGraph.end(); ++it) {
		std::cout << it->getStateOfNode() << " "; // << std::endl;
	}
	std::cout << std::endl;


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
	std::vector <Node> ::iterator it = graph->getHandlerToSetOfNodesInGraph();
	//advance(it, rnd);

	return it;
}