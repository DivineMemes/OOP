#include "sfwdraw.h"

#include "Line.h"
#include "Box.h"


Box::Box()
{
	

}

void Box::draw()
{
	//bottomw
	sfw::drawLine(bottomleftX, bottomleftY, 
					toprightX, bottomleftY);
	//left
	sfw::drawLine(bottomleftX, bottomleftY,
				  bottomleftX, toprightY);
	//top
	sfw::drawLine(bottomleftX, toprightY,
					toprightX, toprightY);
	//right
	sfw::drawLine(toprightX, toprightY,
		          toprightX, bottomleftY);
}


