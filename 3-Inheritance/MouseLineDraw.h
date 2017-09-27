#pragma once
#include "LineDrawer.h"
class MouseLineDraw
{
public:
	float posX;
	float posY;

	float posX2;
	float posY2;

	bool Switch = false;

	LineDrawer *currentLine;
	
	void update(LineDrawer * lineARR, int size);
	void FindNextLine(LineDrawer *lineARR, int size);
	

};