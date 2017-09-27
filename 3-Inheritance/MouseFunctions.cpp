#include "MouseFunctions.h"
#include "ThePlayer.h"
#include <iostream>
int clicks = 0;
int click1X = 0;
int click1Y = 0;
int click2X = 0;
int click2Y = 0;
bool firstClick = false;
void MouseDrawLine(ThePlayer p)
{
	if (sfw::getMouseButton(MOUSE_BUTTON_LEFT) == true)
	{
		int mousex = sfw::getMouseX();
		int mousey = sfw::getMouseY();
		//std::cout << mousex << "\n" << mousey << std::endl;
		sfw::drawLine(p.x, p.y, mousex, mousey);
	}
}
	void MouseDrawPoint()
	{
		
		if (sfw::getMouseButton(MOUSE_BUTTON_RIGHT) == 1 )
		{
			clicks++;
			/*std::cout << click1X;
			std::cout << click1Y;
			std::cout << click2X;
			std::cout << click2Y;*/
			click1X = sfw::getMouseX();
			click1Y = sfw::getMouseY();
			
			if (clicks == 1)
			{
				click1X = sfw::getMouseX();
				click1Y = sfw::getMouseY();
			}
			else if (clicks == 2)
			{
				click2X = sfw::getMouseX();
				click2Y = sfw::getMouseY();
				sfw::drawLine(click1X, click1Y, click2X, click2Y);
				clicks = 0;
			}
		}
	
	}

	void DrawMouse()
	{
		sfw::drawCircle(sfw::getMouseX(), sfw::getMouseY(), 10);
	}

