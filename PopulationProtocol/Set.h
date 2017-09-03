#pragma once
#include <set>

class Set
{
public:
	std::set<char> elem;

	Set();
	void addElementToSet(char valueOfElem);
	void deleteElementFromSet(char valueOfElem);
};

