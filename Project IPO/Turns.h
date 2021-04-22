#include "Field.h"
#pragma once

using namespace std;

class Turns
{
public: 

	int NumOfTurn = 0; 
	Turns() {}
	void NextTurn(Field);
};

