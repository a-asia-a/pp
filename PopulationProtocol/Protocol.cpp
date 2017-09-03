#include "Protocol.h"
#include <iostream>

Protocol::Protocol(){
}

Protocol* Protocol::getInstance() {
	if (instance == 0)
		instance = new Protocol;
	return instance;
}

void Protocol::addElemToInputAlphabetOfProtocol(char valueOfElement){
	inputAlphabetOfProtocol.insert(valueOfElement);
}
void Protocol::deleteElemFromInputAlphabetOfProtocol(char valueOfElement) {
	if (!inputAlphabetOfProtocol.empty())
		inputAlphabetOfProtocol.erase(valueOfElement);
	else
		std::cout << "Set is empty!";
}

void Protocol::addElemToOutputAlphabetOfProtocol(char valueOfElement){
	outputAlphabetOfProtocol.insert(valueOfElement);
}
void Protocol::deleteElemFromOutputAlphabetOfProtocol(char valueOfElement) {
	if (!outputAlphabetOfProtocol.empty())
		outputAlphabetOfProtocol.erase(valueOfElement);
	else
		std::cout << "Set is empty!";
}

void Protocol::addElemToStatesOfProtocol(char valueOfElement){
	statesOfProtocol.insert(valueOfElement);
}
void Protocol::deleteElemFromStatesOfProtocol(char valueOfElement) {
	if (!statesOfProtocol.empty())
		statesOfProtocol.erase(valueOfElement);
	else
		std::cout << "Set is empty!";
}

void Protocol::showElemOfStatesAlphabetOfProtocol() {
	std::set<char>::iterator it;
	std::cout << "states" << std::endl;
	for (it = statesOfProtocol.begin(); it != statesOfProtocol.end(); ++it)
		std::cout << *it << '\n';
}

void Protocol::showElemOfInputAlphabetOfProtocol(){
	std::set<char>::iterator it;
	std::cout << "input" << std::endl;
	for (it = inputAlphabetOfProtocol.begin(); it != inputAlphabetOfProtocol.end(); ++it)
		std::cout << *it << '\n';

}
void Protocol::showElemOfOutputAlphabetOfProtocol() {
	std::set<char>::iterator it;
	std::cout << "output: " << std::endl;
	for (it = outputAlphabetOfProtocol.begin(); it != outputAlphabetOfProtocol.end(); ++it)
		std::cout << *it << '\n';

}

void Protocol::addInputFunctionOfProtocol(char valueOfElement1, char valueOfElement2) {
	inputFunctionOfProtocol.insert({ valueOfElement1, valueOfElement2 });
}

void Protocol::deleteInputFunctionOfProtocol(char valueOfElement1) {
	inputFunctionOfProtocol.erase(valueOfElement1);
}

void Protocol::showElemOfInputFunctionOfProtocol() {
	std::map<char,char>::iterator it;
	std::cout << "input function: " << std::endl;
	for (it = inputFunctionOfProtocol.begin(); it != inputFunctionOfProtocol.end(); ++it)
		std::cout << it->first << "->" << it->second << '\n';
}

void Protocol::addStatesFunctionOfProtocol(char firstValueOfFirstPair, char secondValueOfFirstPair, char firstValueOfSecondPair, char secondValueOfSecondPair) {
	statesFunctionOfProtocol.insert({ {firstValueOfFirstPair,secondValueOfFirstPair},{firstValueOfSecondPair,secondValueOfSecondPair} });
}
void Protocol::deleteStatesFunctionOfProtocol(char valueOfElement1, char valueOfElement2) {
	statesFunctionOfProtocol.erase({ valueOfElement1,valueOfElement2 });
}
void Protocol::showElemOfStatesFunctionOfProtocol() {
	std::map<std::pair<char,char>, std::pair<char, char>>::iterator it;
	std::cout << "states function: " << std::endl;
	for (it = statesFunctionOfProtocol.begin(); it != statesFunctionOfProtocol.end(); ++it)
		std::cout << it->first.first <<","<< it->first.second << 
		"->" << it->second.first << "," << it->second.second << '\n';
}

void Protocol::addOutputFunctionOfProtocol(char valueOfElement1, char valueOfElement2){
	outputFunctionOfProtocol.insert({ valueOfElement1,valueOfElement2 });
}
void Protocol::deleteOutputFunctionOfProtocol(char valueOfElement1) {
	outputFunctionOfProtocol.erase(valueOfElement1);
}
void Protocol::showElemOfOutputFunctionOfProtocol() {
	std::map<char , char>::iterator it;
	std::cout << "output function: " << std::endl;
	for (it = outputFunctionOfProtocol.begin(); it != outputFunctionOfProtocol.end(); ++it)
		std::cout << it->first << "->" << it->second << '\n';
}

std::set<char>::iterator Protocol::getHandlerToInputAlhabet() {
	std::set<char>::iterator it;
	it = inputAlphabetOfProtocol.begin();

	return it;
}

int Protocol::getSizeOfInputAlphabet() {
	return inputAlphabetOfProtocol.size();
}

char Protocol::getResultOfInputFunction(char inputChar) {
	//std::cout << "inputFunction " << inputFunctionOfProtocol[inputChar] << std::endl;
	return inputFunctionOfProtocol[inputChar];
}

char Protocol::getResultOfOutputFunction(char outputChar) {
	//std::cout << "outputFunction " << outputFunctionOfProtocol[inputChar] << std::endl;
	return outputFunctionOfProtocol[outputChar];
}

std::pair<char, char> Protocol::getResultOfStatesFunction(char stateOfFirstNode, char stateOfSecondNode) {
	//statesFunctionOfProtocol[firstNodeState, secondNodeState];
	auto res = statesFunctionOfProtocol.find(std::make_pair(stateOfFirstNode, stateOfSecondNode));
	return res->second;	
}

