#pragma once
#include "ThePlayer.h"
#include "Gameobject.h"

class BaseParticle : public Gameobject
{
public:
	BaseParticle();
	float playerPosX;
	float playerPosY;
	float posX;
	float posY;
	ThePlayer*player;

	unsigned int PTextureHandle;
	void UpdatePlayerPos();
	virtual void update() override;
	virtual void draw() override;
};