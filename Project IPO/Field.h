#include <array>
#pragma once

class Field
{
	std::array<int, 16> FieldArr;

public:
	Field();
	void AddToField(char, int, int);
	void PrintField();
	std::array<int, 16> getField();

};
