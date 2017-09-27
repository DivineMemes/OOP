#pragma once
#include "Gameobject.h"
class ThePlayer : public Gameobject
{
public:
	ThePlayer();
	float x;
	float y;
	unsigned int TextureHandle;
	virtual void update() override;
	virtual void draw() override;
	void ThePlayerScreenWrap();
	void ThePlayerControls();
};