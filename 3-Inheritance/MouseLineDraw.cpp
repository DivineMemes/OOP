#include "MouseLineDraw.h"
#include "sfwdraw.h"
#include <iostream>
using namespace std;





void MouseLineDraw::update(LineDrawer * lineARR, int size)
{
	if (Switch == true && sfw::getMouseButton(MOUSE_BUTTON_RIGHT))
	{
		
		posX = sfw::getMouseX();
		posY = sfw::getMouseY();
		//sfw::drawCircle(posY, posX, 10);
		cout << "X1: " << posX << "  " << "Y1: " << posY << endl;
	}
	if(Switch == false && sfw::getMouseButton(MOUSE_BUTTON_RIGHT))
	{
		posX2 = sfw::getMouseX();
		posY2 = sfw::getMouseY();
		//sfw::drawCircle(posX2, posY2, 10);
		cout << "X2: " << posX2 << "  " << "Y2: " << posY2 << endl;
	}
	
	if (sfw::getKey('Q')) { Switch = true; cout << "Switch to on" << endl; }
	if (sfw::getKey('E')) { Switch = false; cout << "Switch to off" << endl; }
	if (sfw::getKey(' '))
	{
		//cout << "Draw" << endl;
		currentLine->DrawThis = true;
		currentLine->pos1X = posX;
		currentLine->pos1Y = posY;
		
		//Only want to find a line
		//if we need one
		


		currentLine->pos2X = posX2;
		currentLine->pos2Y = posY2;
		
		if (currentLine->DrawThis == true)
		{
			FindNextLine(lineARR, size);
		}
		
	}

}

void MouseLineDraw::FindNextLine(LineDrawer * lineARR, int size)
{
	// We need to loop through the entire array
	for (int i = 0; i < size; i++)
	{
		if (lineARR[i].DrawThis == false)
		{
			currentLine = &lineARR[i];
		}
	}
	//Find one that has not been drawn

	
	//And set this equal to our currentLine
	//mouse.line = &lines[mouse.Index];
}


