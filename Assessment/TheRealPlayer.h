#pragma once
#include "gameObject.h"
#include "bullet.h"

class TheRealPlayer : public Gameobject
{
public:
	TheRealPlayer();

	Bullet bullet[20];

	float x;
	float y;
	float speedX;
	float speedY;
	float radius;
	float SprintTime;
	//bool sprint = false;
	void update(MyMouse mouse);
	virtual void draw() override;
	void ThePlayerScreenWrap();
	void ThePlayerControls();
};