#include "Circle.h"


Circle::Circle()
{
	posX = 400;
	posY = 300;
	radius = 70;
}

void Circle::draw()
{
	sfw::drawCircle(posX, posY, radius);
}
