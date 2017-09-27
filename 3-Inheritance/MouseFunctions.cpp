#include "MouseFunctions.h"
#include "ThePlayer.h"
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
