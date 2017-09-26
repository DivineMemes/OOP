#pragma once
class Box
{
public:
	Box();

	float bottomleftX;
	float bottomleftY;
	float toprightX;
	float toprightY;

	void draw();
};