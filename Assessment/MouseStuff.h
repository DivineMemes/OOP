#pragma once

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
	float savedPosX;
	float savedPosY;
	void Cursor();
	float OnMouseDown();
	bool MouseIsDown();
};