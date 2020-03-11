#include "Tree.h"

void Tree::Draw(Graphics & gfx)
{
	int radius = size / fps;
	gfx.drawTree(position, radius, c);
}

void Tree::Plant(Coordinates & inPosition)
{
	c = Colors::Blue;
	position = inPosition;
	size = 0;
	age = 0;
	isAlive = true;
}
void Tree::Update()
{
	age++;
	size = growRate * age;
	if (size > maxSize)
	{
		size = maxSize;
		c = Colors::Green;
	}
	if (age > maxAge)
	{
		age = maxAge;
		isAlive = false;
	}
}
//
Coordinates Tree::getPosition()
{
	return position;
}
