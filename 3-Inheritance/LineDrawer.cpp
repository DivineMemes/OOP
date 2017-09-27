#include "LineDrawer.h"
#include "sfwdraw.h"
void LineDrawer::update()
{
}

void LineDrawer::draw()
{
	if (DrawThis == true)
	{
		sfw::drawLine(pos1X, pos1Y, pos2X, pos2Y);
	}
	
}
