#include "TheRealPlayer.h"
#include "sfwdraw.h"
#include "Effects.h"
unsigned int TextureHandle;
TheRealPlayer::TheRealPlayer()
{
}
void TheRealPlayer::update()
{
	
}
void TheRealPlayer::draw()
{
	sfw::drawCircle(x, y, radius, 100, RandomColors());
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
	if (sfw::getKey('W'))
	{
		y += 2;
	}
	if (sfw::getKey('S'))
	{
		y -= 2;
	}
	if (sfw::getKey('D'))
	{
		x += 2;
	}
	if (sfw::getKey('A'))
	{
		x -= 2;
	}
}
