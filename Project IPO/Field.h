#include <array>
#pragma once

using namespace std;

class Field
{
	array<char, 9> FieldArr;

public:
	Field();
	void AddToField(char, int, int);
	void PrintField();
	array<char, 9> getField();

};
