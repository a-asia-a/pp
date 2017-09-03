#include "Node.h"
#include <map>
#include <iostream>

Node::Node(char initializeInput)
	:initializeInputOfNode(initializeInput)
{
}

char Node::getInputOfNode() {
	return initializeInputOfNode;
}

void Node::setInputOfNode(char initializeInput) {
	this->initializeInputOfNode = initializeInput;
}

char Node::getStateOfNode(){
	return stateOfNode;
}

void Node::setStateOfNode(char state){
	this->stateOfNode = state;
}

char Node::getOutputOfNode() {
	return outputOfNode;
}

void Node::setOutputOfNode(char output) {
	this->outputOfNode = output;
}

int Node::getIdOfNode() {
	return id;
}

void Node::setIdOfNode(int id) {
	this->id = id;
}
