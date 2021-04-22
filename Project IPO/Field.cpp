#include "Field.h"
#include <iostream>

using namespace std;

Field::Field()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int index = 3 * i + j;
			FieldArr[index] = '.';
		}
	}
}

void Field::AddToField(char c, int x, int y)
{
	try
	{
		int index = 3 * (x - 1) + (y - 1);
		FieldArr[index] = c;
	}
	catch (...) {	}
}

void Field::PrintField()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int index = 3 * i + j;
			cout << FieldArr[index];
		}
		cout << endl;
	}
}

std::array<char, 9> Field::getField()
{
	return FieldArr;
}

