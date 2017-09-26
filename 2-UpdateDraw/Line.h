#pragma once
#include "sfwdraw.h"
class Line
{
public:
	float startX;   // start-position on the x-axis
	float startY;   // start-position on the y-axis

	float endX;     // end-position on the x-axis
	float endY;     // end-position on the y-axis

	void draw();    // draws the line
};