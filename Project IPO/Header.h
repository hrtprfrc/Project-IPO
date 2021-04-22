#pragma once

#include "Field.h"
#include <iostream>

#define CROSS 0
#define CIRCLE 1

class Drawer 
{
private:
	int player;
public:
	Drawer() {
		player = CROSS;
	}

	void Draw(int curPlayer, Field field) 
	{
		std::cout << "Turn: ";
		std::cout << (curPlayer == CROSS) ? 'X' : '0' << '\n';

		field.PrintField();
	}
};