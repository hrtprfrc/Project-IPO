#include <iostream>
#include "Field.h"
#include "Header.h" 
#include "Turns.h" 

int main()
{
	Field NewField;
	Drawer newDraw; 
	Turns newTurns; 

	newDraw.Draw(0, NewField); 
	while (1)
	{
		newTurns.NextTurn(NewField); 
		newDraw.Draw(newTurns.NumOfTurn%2,NewField); 
	}
	

}
