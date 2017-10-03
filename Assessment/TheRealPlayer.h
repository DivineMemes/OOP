#pragma once
#include "gameObject.h"
class TheRealPlayer : public Gameobject
{
public:
	TheRealPlayer();
	float x;
	float y;
	int radius;
	unsigned int TextureHandle;
	virtual void update() override;
	virtual void draw() override;
	void ThePlayerScreenWrap();
	void ThePlayerControls();
};
