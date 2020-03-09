#pragma once
#include "Coordinates.h"
#include "Graphics.h"
class Tree
{
private:
	Coordinates position{ 100,100 };
	int fps = 5;
	int size=0;
	int maxSize=100*fps;
	int growRate=1;
	int age=0;
	int maxAge=200*fps;
	Color c = Colors::Blue;
	
public:
	void Draw(Graphics& gfx);
	void Plant(Coordinates& inPosition);
	void Update();
	Coordinates getPosition();
	bool isAlive = false;
};

