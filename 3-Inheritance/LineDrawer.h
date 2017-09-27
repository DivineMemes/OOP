#pragma once
class LineDrawer
{
public:
	float pos1X;
	float pos1Y;
	float pos2X;
	float pos2Y;

	bool DrawThis = false;

	void update();
	void draw();

};