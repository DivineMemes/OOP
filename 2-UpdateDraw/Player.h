#pragma once

class Player
{
public:
	Player();
	float x1; //x1-position
	float y1; //y1-position

	void playerControls();
	void update();
	void draw();
	void screenWrap();
};

class Player2
{
public:
	Player2();
	float x2; //x2-position
	float y2; //y2-position

	void player2Controls();
	void update2();
	void draw2();
	void screenWrap2();
};