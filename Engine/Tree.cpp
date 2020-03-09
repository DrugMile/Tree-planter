#include "Tree.h"

Tree::Tree(Coordinates & inPosition)
{
	position = inPosition;
}

void Tree::Draw(Graphics & gfx)
{
	gfx.drawTree(position, 50, Colors::Blue);
}

Coordinates Tree::getPosition()
{
	return position;
}
