#include "Player.h"
#include "effects.h"
#include "sfwdraw.h"


Player::Player()
{
	x1 = 0;
	y1 = 0;
}

void Player::playerControls()
{
	if (sfw::getKey('W'))
	{
		y1+=2;
		randomColors();
	}
	if (sfw::getKey('S'))
	{
		y1-=2;
		randomColors();
	}
	if (sfw::getKey('D'))
	{
		x1+=2;
		randomColors();
	}
	if (sfw::getKey('A'))
	{
		x1-=2;
		randomColors();
	}
}

void Player::draw()
{
	sfw::drawCircle(x1, y1, 25);
}

void Player::update()
{
	playerControls();
}

void Player::screenWrap()
{
	if (x1 >= 800)
	{
		x1 = 1;
	}
	else if (x1 <= 0)
	{
		x1 = 801;
	}
	else if (y1 <= 0)
	{
		y1 = 601;
	}
	else if (y1 >= 600)
	{
		y1 = 1;
	}
}

//////////////////////////////////////////////

Player2::Player2()
{
	x2 = 0;
	y2 = 0;
}

void Player2::player2Controls()
{
	if (sfw::getKey(KEY_UP))
	{
		y2+=2;
		randomColors();
	}
	else if (sfw::getKey(KEY_DOWN))
	{
		y2-=2;
		randomColors();
	}
	else if (sfw::getKey(KEY_RIGHT))
	{
		x2+=2;
		randomColors();
	}
	else if (sfw::getKey(KEY_LEFT))
	{
		x2-=2;
		randomColors();
	}
}

void Player2::draw2()
{
	sfw::drawCircle(x2, y2, 25);
}

void Player2::update2()
{
	player2Controls();
}

void Player2::screenWrap2()
{
	if (x2 >= 800)
	{
		x2 = 1;
	}
	else if (x2 <= 0)
	{
		x2 = 801;
	}
	else if (y2 <= 0)
	{
		y2 = 601;
	}
	else if (y2 >= 600)
	{
		y2 = 1;
	}
}