#include "Enemies.h"
#include "TheRealPlayer.h"
#include <cstdlib>
#include <ctime>
#include "sfwdraw.h"

void Enemy::update(TheRealPlayer& player)
{
	if (posX < player.x)
	{
		posX += Xspeed;
	}
	else if (posX > player.x)
	{
		posX -= Xspeed;
	}
	if (posY < player.y)
	{
		posY += Yspeed;
	}
	else if (posY > player.y)
	{
		posY -= Yspeed;
	}
}

void Enemy::draw()
{	
	/*srand(time(NULL));
	spawnX = rand() % 800 + 1;
	spawnY = rand() % 600 + 1;*/
	if (enabled)
	{
		sfw::drawCircle(posX, posY, radius, 100, WHITE);
	}
}
