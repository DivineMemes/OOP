#pragma once

#include "MouseStuff.h"
class Bullet 
{

public:
	Bullet();
	bool enabled;
	
	float lifetime;

	float xPos;
	float yPos;
	float speedX;
	float speedY;
	int radius;

	void bulletDraw();
	void bulletUpdate(MyMouse mouse);
};