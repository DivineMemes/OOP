#pragma once
class Bullet
{

public:
	bool enabled = true;

	float xPos;
	float yPos;
	int radius;

	void bulletDraw(TheRealPlayer player);
	void bulletUpdate(MyMouse mouse);
};