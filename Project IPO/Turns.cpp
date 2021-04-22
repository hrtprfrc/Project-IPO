#include "Turns.h"
#include "Field.h"
#include <iostream>

using namespace std;

void Turns::NextTurn(Field* F)
{
	unsigned int x, y;
	cout << "Choose where you go. Enter X and Y coordinates: " << endl;
	cin >> x >> y;

	if (F->AddToField(((NumOfTurn % 2 == 0) ? 'X' : '0'), x, y))
	{
		NumOfTurn++;
	}
}

