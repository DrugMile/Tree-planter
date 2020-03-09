#include "Tree.h"

void Tree::Draw(Graphics & gfx)
{
	gfx.drawTree(position, 50, Colors::Blue);
}

void Tree::Plant(Coordinates & inPosition)
{
	position = inPosition;
	size = 0;
	age = 0;
	isAlive = true;
}
//
Coordinates Tree::getPosition()
{
	return position;
}
