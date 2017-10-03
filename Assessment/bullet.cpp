#include "bullet.h"
#include "sfwdraw.h"
#include "MouseStuff.h"
#include "TheRealPlayer.h"


void Bullet::bulletDraw(TheRealPlayer player)
{
	sfw::drawCircle(player.x, player.y, player.radius);
}

void Bullet::bulletUpdate(MyMouse mouse)
{
	mouse.onMouseDown();
}
