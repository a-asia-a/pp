#include "MyForm.h"
#include "MyFormPropertiesOfPP.h"
#include "Protocol.h"
#include "Node.h"
#include "Graph.h"
#include "Functions.h"
#include <iostream>
#include <time.h>


using namespace System;
using namespace System::Windows::Forms;

Protocol* Protocol::instance = 0;
Graph* Graph::instance = 0;

int main()
{
	srand(time(NULL));
	//PopulationProtocol::MyFormPropertiesOfPP form1;
	////PopulationProtocol::MyForm form;
	//Application::Run(%form1);
	


	Protocol *p = p->getInstance();

	//Functions *aa = new Functions();
	//aa->translateProtocol();
	translateProtocol();
	std::cout << "init graph " << p->globalNumberOfNode << std::endl;

	Graph *graph = graph->getInstance(p->globalNumberOfNode);
	//Node node1 = randNodesToInteraction();
	graph->runInputFunction();
	graph->runStatesFunction();
	/*
	for(int i = 0 ; i<2)
	Protocol *protocol = protocol->getInstance();
	int rnd = rand() % numberOfNodesInGraph;
	std::set <char> ::const_iterator it(protocol->getHandlerToInputAlhabet());
	//Protocol::getHandlerToInputAlhabet();
	advance(it, rnd);
	std::cout << "Node trzymal symbol wejsciowy: " << *it << std::endl;
	*/

/*
	//std::cout << "wyswietl" << std::endl;
	Protocol *	protocol = protocol->getInstance();
	protocol->showElemOfInputAlphabetOfProtocol();
	protocol->showElemOfOutputAlphabetOfProtocol();
	protocol->showElemOfStatesAlphabetOfProtocol();
	protocol->showElemOfInputFunctionOfProtocol();
	protocol->showElemOfStatesFunctionOfProtocol();
	protocol->showElemOfOutputFunctionOfProtocol();
*/
	

	// inicjalizacja przy przyciœniêciu switch'a
	//Protocol PP;
	//PP.addElemToInputAlphabetOfProtocol('0');
	//PP.addElemToInputAlphabetOfProtocol('1');
	//PP.addElemToInputAlphabetOfProtocol('L');
	//PP.addElemToInputAlphabetOfProtocol('F');
	//PP.deleteElemFromInputAlphabetOfProtocol('0');
	//PP.deleteElemFromInputAlphabetOfProtocol('1');
	//PP.deleteElemFromInputAlphabetOfProtocol('L');
	//PP.deleteElemFromInputAlphabetOfProtocol('F');
	//PP.deleteElemFromInputAlphabetOfProtocol('0');

	//PP.showElemOfInputAlphabetOfProtocol();
	
	


	getchar();
	return 0;

}