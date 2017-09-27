#include "ThePlayer.h"
#include "sfwdraw.h"
#include "BaseParticle.h"



ThePlayer::ThePlayer()
{
	x = 400;
	y = 300;
}

void ThePlayer::update()
{
	ThePlayerControls();
}

void ThePlayer::draw()
{
	
	sfw::drawTexture(TextureHandle, x, y, 150, 150);
	
}

void ThePlayer::ThePlayerControls()
{
	if (sfw::getKey('W'))
	{
		y += 2;
		//randomColors();
	}
	if (sfw::getKey('S'))
	{
		y -= 2;
		//randomColors();
	}
	if (sfw::getKey('D'))
	{
		x += 2;
		//randomColors();
	}
	if (sfw::getKey('A'))
	{
		x -= 2;
		//randomColors();
	}
	
	}
void ThePlayer::ThePlayerScreenWrap()
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
