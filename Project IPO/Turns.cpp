#include "Turns.h"
#include "Field.h"
#include <iostream>

using namespace std;

void Turns::NextTurn(Field F)
{
	unsigned int x, y;
	cout << "Choose where you go" << endl;
	cin >> x >> y;

	NumOfTurn++;

	F.AddToField();
}

