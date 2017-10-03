#include "Enemies.h"
#include "TheRealPlayer.h"
#include <cstdlib>
#include <ctime>
#include "sfwdraw.h"

void Enemy::update(TheRealPlayer& player)
{
	if (posX < player.x)
	{
		posX++ * sfw::getDeltaTime();
	}
	else if (posX > player.x)
	{
		posX-- * sfw::getDeltaTime();
	}
	if (posY < player.y)
	{
		posY++ * sfw::getDeltaTime();
	}
	else if (posY > player.y)
	{
		posY-- * sfw::getDeltaTime();
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
