#include "Field.h"
#include <iostream>

using namespace std;

Field::Field()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int index = 4 * i + j;
			FieldArr[index] = 0;
		}
	}
}

void Field::AddToField(char c, int x, int y)
{
	try
	{
		int index = 4 * (x - 1) + (y - 1);
		FieldArr[index] = 1;
	}
	catch (...) {	}
}

void Field::PrintField()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int index = 4 * i + j;
			cout << FieldArr[index];
		}
		cout << endl;
	}
}

std::array<int, 16> Field::getField()
{
	return FieldArr;
}

