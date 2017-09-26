#pragma once
#include "sfwdraw.h"
class Circle
{
public:
	Circle();
	float posX;     // position on the x-axis
	float posY;     // position on the y-axis

	float radius;   // describes the size of the circle

	void draw();    // draws the circle
};