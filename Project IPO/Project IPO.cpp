#include <iostream>
#include "Field.h"

int main()
{
	Field NewField;

	//NewField.PrintField();
	NewField.AddToField('x', 1, 1);
	NewField.AddToField('x', 2, 2);
	NewField.AddToField('x', 3, 3);
	NewField.PrintField();

}
