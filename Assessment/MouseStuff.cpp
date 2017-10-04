#include "MouseStuff.h"
#include "sfwdraw.h"
#include <iostream>
#include <windows.h>


MyMouse::MyMouse()
{
}
void MyMouse::Cursor()
{
	mX = sfw::getMouseX();
	mY = sfw::getMouseY();

	sfw::drawCircle(mX, mY, 1, 100);
}

float MyMouse::OnMouseDown()
{
	if (sfw::getMouseButton(0))
	{
		action = true;
		isDown = true;
		//Button is held down
	}
	else
	{
		isDown = false;
		prevmX = sfw::getMouseX();
		prevmY = sfw::getMouseY();
		//Button is held up
	}
	if (action == true && isDown == false)
	{
		savedPosX = prevmX;
		savedPosY = prevmY;
		action = false;
		
	}
	return (savedPosX, savedPosY);
}

bool MyMouse::MouseIsDown()
{
	if (sfw::getMouseButton(0))
	{
		action = true;
		isDown = true;
	}
	else
	{
		isDown = false;
		prevmX = sfw::getMouseX();
		prevmY = sfw::getMouseY();
	}


	if (action == true && isDown == false)
	{
		return true;
	}

	return false;
}