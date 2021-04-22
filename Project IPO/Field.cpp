#include "Field.h"

void Field()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			//Field[i][j] = 0;
		}
	}
}

void Field::AddToField(char c, int x, int y)
{

}

std::array<int, 16> Field::getField()
{
	return FieldArr;
}

