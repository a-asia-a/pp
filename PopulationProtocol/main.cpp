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

[STAThreadAttribute]
int main()
{
	srand(time(NULL));
	//PopulationProtocol::MyFormPropertiesOfPP form1;
	//Application::Run(%form1);
	
	PopulationProtocol::MyForm form;
	Application::Run(%form);
	
	

	
	Protocol *p = p->getInstance();
	Functions *aa = new Functions();
	aa->translateProtocol();
	
	
	translateProtocol();
	int numberOfNodes = getNumberOfNodes();
	//Graph *graph = graph->getInstance(p->globalNumberOfNode);
	Graph *graph = graph->getInstance(numberOfNodes);

	//Node node1 = randNodesToInteraction();
	//graph->saveGraph();
	
	int licznikL = 0; 
	int licznikF = 0;
	int licznikP = 0;

	unsigned long long int ilIter = 0;
	unsigned long long int partIter = 0;

		time_t timeStart1 = clock();
		for (int i = 0; i < 10; i++) {
			//std::cout << "wyniki " << i << std::endl;
			//graph->readSavedGraph();
			time_t timeStart = clock();
			graph->runInputFunction();
			partIter = graph->runStatesFunction();
			graph->getResultOfProtocol();

			//if (i == 30000 || i == 60000 || i == 85000)
				//std::cout << i << std::endl;
			
			// Alg tradycyjny
			/*
			if (graph->getWynik() == 1)
				if (graph->getSymbolWynik() == 'L' || graph->getSymbolWynik() == 'l')
					licznikL++;
				if (graph->getSymbolWynik() == 'F' || graph->getSymbolWynik() == 'f')
					licznikF++;
			if (graph->getWynik() == 0)
				licznikF++;
			time_t time = (clock() - timeStart);
			//std::cout << (double)((1000 * time) / CLOCKS_PER_SEC) << "ms" << std::endl;
			ilIter += partIter;
			*/

			// Alg. birds died
			
				if (graph->getSymbolWynik() == 'L')
					licznikL++;
				if (graph->getSymbolWynik() == 'F')
					licznikF++;
				if (graph->getSymbolWynik() == 'P')
					licznikP++;

			
			time_t time = (clock() - timeStart);
			//std::cout << (double)((1000 * time) / CLOCKS_PER_SEC) << "ms" << std::endl;
			ilIter += partIter;

		}
		time_t time1 = (clock() - timeStart1);
		std::cout << " odp L: " << licznikL << " " << "odp F: " << licznikF << " " << "odp P: " << licznikP << std::endl;
		std::cout << (double)((1000 * time1) / CLOCKS_PER_SEC) << "ms" << std::endl;
		std::cout << " il iteracji " << ilIter << std::endl;
		std::cout << "koniec" << std::endl;

	
	


	

	/*
	for(int i = 0 ; i<2)
	Protocol *protocol = protocol->getInstance();
	int rnd = rand() % numberOfNodesInGraph;
	std::set <char> ::const_iterator it(protocol->getHandlerToInputAlhabet());
	//Protocol::getHandlerToInputAlhabet();
	advance(it, rnd);
	std::cout << "Node trzymal symbol wejsciowy: " << *it << std::endl;
	*/


	//std::cout << "wyswietl" << std::endl;
	/*Protocol *	protocol = protocol->getInstance();
	protocol->showElemOfInputAlphabetOfProtocol();
	protocol->showElemOfOutputAlphabetOfProtocol();
	protocol->showElemOfStatesAlphabetOfProtocol();
	protocol->showElemOfInputFunctionOfProtocol();
	protocol->showElemOfStatesFunctionOfProtocol();
	protocol->showElemOfOutputFunctionOfProtocol();*/

	

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