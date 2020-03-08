#include "Tree.h"

Tree::Tree(Coordinates & inPosition)
{
	position = inPosition;
}

Coordinates Tree::getPosition()
{
	return position;
}
