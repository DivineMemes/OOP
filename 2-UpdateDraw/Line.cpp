#include "Line.h"

Line::Line()
{
	startX = 0;
	startY = 0;
	
	endX = 800;
	endY = 600;
}

void Line::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}
