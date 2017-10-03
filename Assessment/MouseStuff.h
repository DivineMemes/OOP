#pragma once
#include "TheRealPlayer.h"
class MyMouse
{
public:
	bool isDown = false;
	bool action = false;
	MyMouse();
	float mX;
	float mY;
	float prevmX;
	float prevmY;
	void Cursor();
	float onMouseDown();
};
