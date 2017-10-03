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
	float radius;
	unsigned int TextureHandle;
	void update(MyMouse mouse);
	virtual void draw() override;
	void ThePlayerScreenWrap();
	void ThePlayerControls();
};
