#include "Field.h"
#pragma once

using namespace std;

class Turns
{
	int NumOfTurn = 0;

public:

	Turns() {}
	void NextTurn(Field);
};

