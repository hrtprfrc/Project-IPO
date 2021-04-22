#include <iostream>
#include "Field.h"
#include "Header.h" 

int main()
{
	Field NewField;
	Drawer newDraw; 
	newDraw.Draw(0, NewField); 

	//NewField.PrintField(); 
	NewField.AddToField('x', 1, 1);
	//NewField.PrintField(); 

}
