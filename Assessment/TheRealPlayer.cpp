#include "TheRealPlayer.h"
#include "sfwdraw.h"
#include "Effects.h"
#include <iostream>

TheRealPlayer::TheRealPlayer()
{
	for (int i = 0; i < 20; i++)
	{
		bullet[i].enabled = false;
	}
}

void TheRealPlayer::update(MyMouse mouse)
{
	if (mouse.MouseIsDown())
	{
		for (int i = 0; i < 20; i++)
		{
			if (bullet[i].enabled == false)
			{
				bullet[i].xPos = x;
				bullet[i].yPos = y;
				bullet[i].speedX = 3;
				bullet[i].speedY = 3;
				bullet[i].radius =  5;
				bullet[i].lifetime = 5;
				bullet[i].enabled = true;
				break;
			}
		}
	}
	for (int i = 0; i < 20; i++)
	{
		if (bullet[i].enabled == true)
		{
			bullet[i].bulletUpdate(mouse);	
		}
	}
}

void TheRealPlayer::draw()
{
	sfw::drawCircle(x, y, radius, 100, RandomColors());
	for (int i = 0; i < 20; i++)
	{
		if (bullet[i].enabled == true)
		{
			bullet[i].bulletDraw();
		}
	}
}
void TheRealPlayer::ThePlayerScreenWrap()
{
	if (x >= 800)
	{
		x = 1;
	}
	else if (x <= 0)
	{
		x = 801;
	}
	else if (y <= 0)
	{
		y = 601;
	}
	else if (y >= 600)
	{
		y = 1;
	}
}
void TheRealPlayer::ThePlayerControls()
{
	if (SprintTime < 0)
	{
		SprintTime = 0;
	}
	if (SprintTime > 2)
	{
		SprintTime = 2;
	}
	if (sfw::getKey(' ') && SprintTime > 0 )
	{
		speedX = 6;
		speedY = 6;
		SprintTime -= sfw::getDeltaTime();
		//time --;
		
	}
	else
	{
		SprintTime += sfw::getDeltaTime();
		speedX = 2;
		speedY = 2;
	}




	if (sfw::getKey('W'))
	{
		y += speedY;
		
	}
	if (sfw::getKey('S'))
	{
		y -= speedY;
		
	}
	if (sfw::getKey('D'))
	{
		x += speedX;
		
	}
	if (sfw::getKey('A'))
	{
		x -= speedX;
		
	}
}