#pragma once
#include <set>
#include <map>

int globalNumberOfNode = 0;

class Protocol 
{	
private:
	static Protocol* instance;
	
	std::set <char> inputAlphabetOfProtocol;
	std::set <char> outputAlphabetOfProtocol;
	std::set <char> statesOfProtocol;
	std::set <int> resultOfOutputProtocol;
	std::map <char, char> inputFunctionOfProtocol;
	std::map <std::pair <char,char>, std::pair <char,char> > statesFunctionOfProtocol;
	std::map <char, char> outputFunctionOfProtocol;
	char result;
	Protocol();

public:
	static Protocol* getInstance();
	void addElemToInputAlphabetOfProtocol(char valueOfElement);
	void deleteElemFromInputAlphabetOfProtocol(char valueOfElement);
	void addElemToOutputAlphabetOfProtocol(char valueOfElement);
	void deleteElemFromOutputAlphabetOfProtocol(char valueOfElement);
	void addElemToStatesOfProtocol(char valueOfElement);
	void deleteElemFromStatesOfProtocol(char valueOfElement);
	void addInputFunctionOfProtocol(char valueOfElement1, char valueOfElement2);
	void deleteInputFunctionOfProtocol(char valueOfElement);
	void addStatesFunctionOfProtocol(char firstValueOfFirstPair, char secondValueOfFirstPair, char firstValueOfSecondPair, char secondValueOfSecondPair);
	void deleteStatesFunctionOfProtocol(char valueOfFirstElement, char valueOfSecondElement);
	void addOutputFunctionOfProtocol(char valueOfElement1, char valueOfElement2);
	void deleteOutputFunctionOfProtocol(char valueOfElement);

	void showElemOfInputAlphabetOfProtocol();
	void showElemOfOutputAlphabetOfProtocol();
	void showElemOfStatesAlphabetOfProtocol();
	void showElemOfInputFunctionOfProtocol();
	void showElemOfStatesFunctionOfProtocol();
	void showElemOfOutputFunctionOfProtocol();

	std::set<char>::iterator getHandlerToInputAlhabet();
	
	int getSizeOfInputAlphabet();
	char getResultOfInputFunction(char inputChar);
	char getResultOfOutputFunction(char outputChar);
	std::pair<char,char> getResultOfStatesFunction (char stateOfFirstNode, char stateOfSecondNode);
};
