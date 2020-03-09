/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include "Tree.h"

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	maple1(Coordinates{ 100,100 }),
	maple2(Coordinates{ 200,200 })
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
/*	gfx.drawCircle(Coordinates{ 300,200 }, 40, Colors::Green);
	gfx.drawCircle(Coordinates{ 200,100 }, 50, Colors::Magenta);
	gfx.drawCircle(Coordinates{ 600,400 }, 70, Colors::White);
	gfx.drawCircle(Coordinates{ 700,50 }, 70, Colors::Cyan);
	gfx.drawCircle(Coordinates{ 400,400 }, 20, Colors::Yellow);
	gfx.drawCircle(Coordinates{ 900,600 }, 100, Colors::LightGray);
	gfx.drawTree(Coordinates{ 300,200 }, 30, Colors::Red);
	gfx.drawCircle(Coordinates{ 450,0 }, 50, Colors::Blue);
	*/
	maple1.Draw(gfx);
	maple2.Draw(gfx);
}
