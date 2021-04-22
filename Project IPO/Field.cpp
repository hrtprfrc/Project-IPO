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

bool Field::AddToField(char c, int x, int y)
{
	try
	{
		int index = 3 * (x - 1) + (y - 1);
		if (x < 4 && y < 4 && x > 0 && y > 0 && FieldArr[index] == '.')
		{
			FieldArr[index] = c;
			return true;
		}
		else
			return false;
	}
	catch (...) { return false; }
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

array<char, 9> Field::getField()
{
	return FieldArr;
}

