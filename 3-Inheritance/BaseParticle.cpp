#include "BaseParticle.h"
#include "sfwdraw.h"
#include "ThePlayer.h"

BaseParticle::BaseParticle()
{
	
}

void BaseParticle::UpdatePlayerPos()
{
	playerPosX = (*player).x;
	playerPosY = (*player).y;
}

void BaseParticle::update()
{
	
	posX = playerPosX + 100;
	posY = playerPosY + 100;
	
}

void BaseParticle::draw()
{
	sfw::drawTexture(PTextureHandle, posX, posY, 200, 200);
}
