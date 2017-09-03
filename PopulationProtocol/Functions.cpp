//#include "Protocol.h"
//#include <fstream>
//#include <iostream>
//#include <string>

//#define STATUS_OK 1
//#define STATUS_FAILURE 0

#include "Functions.h"

//void Functions::translateProtocol() {
void translateProtocol() {
	std::ifstream fileProtocol;
	fileProtocol.open("C:/Users/jwozniak/Documents/Visual Studio 2015/Projects/PopulationProtocol/example.txt");
	std::string line;
	bool Status;
	Protocol *protocol = protocol->getInstance();

	if (fileProtocol.is_open())
		Status = STATUS_OK;
	else
		Status = STATUS_FAILURE;

	if (STATUS_OK == Status) {
		std::cout << "otworzono" <<std::endl;
		while (!fileProtocol.eof()) {
			std::getline(fileProtocol, line);
			
			
			if (line == "<input>") {
				std::getline(fileProtocol, line);
				while (line != "</input>") {
					protocol->addElemToInputAlphabetOfProtocol(line[0]);
					//std::cout << line[0] << std::endl;
					std::getline(fileProtocol, line);
				}
			}
			if (line == "<states>") {
				std::getline(fileProtocol, line);
				while (line != "</states>") {
					protocol->addElemToStatesOfProtocol(line[0]);
					//std::cout << line[0] << std::endl;
					std::getline(fileProtocol, line);
				}
			}
			if (line == "<output>") {
				std::getline(fileProtocol, line);
				while (line != "</output>") {
					protocol->addElemToOutputAlphabetOfProtocol(line[0]);
					//std::cout << line[0] << std::endl;
					std::getline(fileProtocol, line);
				}
			}
			
			if (line == "<inputFunction>") {
				bool foundFirstValue = false;
				char value1, value2;

				std::getline(fileProtocol, line);
				while (line != "</inputFunction>") {
					std::size_t found = line.find_first_not_of("(->)");
					while (found != std::string::npos) {
						if (foundFirstValue == false){
							value1 = line[found];
							foundFirstValue = true;
						}
						else{
							value2 = line[found];
						}	
						found = line.find_first_not_of("(->)", found + 1);	
					}
					foundFirstValue = false;
					protocol->addInputFunctionOfProtocol(value1,value2);
					//std::cout << value1 << "*" << value2 << std::endl;
					std::getline(fileProtocol, line);
				}
			}
			if (line == "<statesFunction>") {
				int idxFoundValue = 0;
				char tabFoundValue[4];

				std::getline(fileProtocol, line);
				while (line != "</statesFunction>") {
					std::size_t found = line.find_first_not_of("(->)");
					while (found != std::string::npos) {
						if (line[found] != ',') {
							tabFoundValue[idxFoundValue] = line[found];
							//std::cout << idxFoundValue << " " << line[found] << std::endl;
							idxFoundValue++;
						}
						found = line.find_first_not_of("(->)", found + 1);
					}
					idxFoundValue = 0;
					// poprawiæ, zeby to ladneij wygladalo (funkcja w funkcji? lub uzyc vecotra?)
					protocol->addStatesFunctionOfProtocol(tabFoundValue[0], tabFoundValue[1], tabFoundValue[2], tabFoundValue[3]);
					//std::cout << tabFoundValue[0] << "," << tabFoundValue[1] << 
					//	"*" << tabFoundValue[2] << "," << tabFoundValue[3] << std::endl;
					std::getline(fileProtocol, line);
				}
			}

			if (line == "<outputFunction>") {
				bool foundFirstValue = false;
				char value1, value2;

				std::getline(fileProtocol, line);
				while (line != "</outputFunction>") {
					std::size_t found = line.find_first_not_of("(->)");
					while (found != std::string::npos) {
						if (foundFirstValue == false) {
							value1 = line[found];
							foundFirstValue = true;
						}
						else {
							value2 = line[found];
						}
						found = line.find_first_not_of("(->)", found + 1);
					}
					foundFirstValue = false;
					protocol->addOutputFunctionOfProtocol(value1, value2);
					//std::cout << value1 << "*" << value2 << std::endl;
					std::getline(fileProtocol, line);
				}
			}
		
			if (line == "<main>") {
				std::getline(fileProtocol, line);
				// potem zmienic, zeby to nie byl global
				protocol->globalNumberOfNode = atoi(line.c_str());
				std::cout << "globalNumberOfNode w function " << protocol->globalNumberOfNode << std::endl;
				//Graph *graph = graph->getInstance(atoi(line.c_str()));
			}		
		}
	}
}

