#include "bullet.h"
#include "sfwdraw.h"
#include "glm\glm.hpp"
#include <iostream>




Bullet::Bullet()
{
	
}

void Bullet::bulletDraw()
{
	//xPos = player.x;
	//yPos = player.y;
	sfw::drawCircle(xPos, yPos, radius);

}

void Bullet::bulletUpdate(MyMouse mouse)
{
	lifetime -= sfw::getDeltaTime();
	if (lifetime <= 0)
	{
		enabled = false;
	}

	
	std::cout << lifetime;
	if (xPos <= mouse.savedPosX)
	{
		xPos += speedX;
	}
	if (xPos >= mouse.savedPosX)
	{
		xPos -= speedX;
	}
	if (yPos <= mouse.savedPosY)
	{
		yPos += speedY;
	}
	if (yPos >= mouse.savedPosY)
	{
		yPos -= speedY;
	}
}
