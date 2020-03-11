#pragma once
#include "Coordinates.h"
#include "Graphics.h"
class Tree
{
private:
	Coordinates position{ 100,100 };
	int fps = 5;		//delay in each frame for slower update
	int size=0;		 //starting size of new tree
	int maxSize=100*fps;		//max size of a tree
	int growRate=1;			//speed of growing
	int age=0;		//starting age of new tree
	int maxAge=200*fps;		//with bigger fps, tree will live longer
	Color c = Colors::Blue;		//initial color of new tree, later turn to green
	
public:
	void Draw(Graphics& gfx);
	void Plant(Coordinates& inPosition);
	void Update();
	Coordinates getPosition();
	bool isAlive = false;
};

