#include "Set.h"

using namespace std;

Set::Set()
{
}

void Set::addElementToSet(char valueOfElem)
{
	elem.insert(valueOfElem);
}

void Set::deleteElementFromSet(char valueOfElem)
{
	elem.erase(valueOfElem);
}
