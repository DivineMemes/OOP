#pragma once
#include "gameObject.h"
#include <iostream>
#include <string>
#include "TheRealPlayer.h"

class Enemy : public Gameobject
{
public:
	float posX;
	float posY;
	int radius;
	bool enabled = true;
	virtual void update(TheRealPlayer& player);
	virtual void draw();
};