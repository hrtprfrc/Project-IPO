#include <array>
#pragma once

using namespace std;

class Field
{
	array<int, 16> FieldArr;

public:
	Field();
	void AddToField(char, int, int);
	void PrintField();
	array<int, 16> getField();

};
