#pragma once
#include "Coordinates.h"
class Tree
{
private:
	Coordinates position{ 100,100 };
	int size;
	int maxSize;
	int growRate;
	int age;
	int maxAge;
	int color;
public:
	Tree(Coordinates& inPozicija);

	Coordinates getPosition();
};

