#include "MouseStuff.h"
#include "sfwdraw.h"
#include <iostream>
#include <windows.h>
#include "ParticleEmitter.h"
#include "TheRealPlayer.h"

MyMouse::MyMouse()
{
}
void MyMouse::Cursor()
{
	mX = sfw::getMouseX();
	mY = sfw::getMouseY();

	sfw::drawCircle(mX, mY, 1, 100);
}

float MyMouse::onMouseDown()
{
	


	if (sfw::getMouseButton(0))
	{
		action = true;
		isDown = true;
		//std::cout << "Button is held down" << std::endl;
	}
	else
	{
		isDown = false;
		prevmX = sfw::getMouseX();
		prevmY = sfw::getMouseY();
		//std::cout << "Button is held up" << std::endl;
	}


	if (action == true && isDown == false)
	{
		action = false;
	}
	return (prevmX, prevmY);

	
}
