#include "sfwdraw.h"
#include <iostream>
#include <windows.h>
#include <fstream>
#include "TheRealPlayer.h"
#include "MouseStuff.h"
#include "Enemies.h"
#include <ctime>
#include <cmath>
#include "bullet.h"
bool checkCollisionPE(TheRealPlayer& player, Enemy &enemy)
{
	// do some math in here to figure out if they are colliding
	float xSquaredPE = pow(enemy.posX - player.x, 2);
	float ySquaredPE = pow(enemy.posY - player.y, 2);
	float distancePE = sqrt(xSquaredPE + ySquaredPE);

	if (player.radius + enemy.radius > distancePE)
	{
		return true;
	}
	if (player.radius + enemy.radius < distancePE)
	{
		return false;
	}
}
	bool checkCollisionBE(Bullet& bullet, Enemy &enemy)
	{
		// do some math in here to figure out if they are colliding
		float xSquaredBE = pow(bullet.xPos - enemy.posX, 2);
		float ySquaredBE = pow(bullet.yPos - enemy.posY, 2);
		float distanceBE = sqrt(xSquaredBE + ySquaredBE);

		if (bullet.radius + enemy.radius > distanceBE)
		{
			return true;
		}
		if (bullet.radius + enemy.radius < distanceBE)
		{
			return false;
		}
	}
	// return true if they are
	// return false if they aren't

bool notDead = true;
int main()
{
	srand(time(NULL));
	sfw::initContext(800, 600, "WaveShot");
	sfw::setBackgroundColor(BLACK);
	TheRealPlayer player;
	player.x = 400;
	player.y = 300;
	player.radius = 10;
	MyMouse mouse;
	/*Bullet bullets[20];
	for(int i = 0; i < 20; ++i)
	{ 
		bullets[i].radius = 5;
	}*/
	Enemy enemy;
	enemy.posX = 100;
	enemy.posY = 100;
	enemy.radius = 10;

	Enemy army[10];
	for (int i = 0; i < 10; ++i)
	{
		army[i].posX = rand() % 800;
		army[i].posY = rand() % 600;
		army[i].radius = rand() % 36 + 3;
	}
	
	
	while (sfw::stepContext())
	{
		// update all the things!	
		if (notDead)
		{

			for (int i = 0; i < 10; ++i)
			{
				army[i].update(player);
				army[i].enabled;
				army[i].draw();
			}
			/*for (int i = 0; i < 20; ++i)
			{
				bullets[i].bulletUpdate(mouse, player);
				bullets[i].bulletDraw(player);
			}*/

			//enemy.update(player);
			player.ThePlayerControls();
			player.ThePlayerScreenWrap();
			
			

			// draw everything!
			mouse.Cursor();
		
			player.draw();
			player.update(mouse);
			mouse.OnMouseDown();
			//enemy.draw();

			for (int i = 0; i < 10; ++i)
			{
				if (army[i].enabled == true)
				{
					if (checkCollisionPE(player, army[i]) == true)
					{

						// yass, okay, what now?
						notDead = false;

					}
				}
				// did collision occur?
				
			}
			for (int i = 0; i < 20; ++i)
			{
				if (player.bullet[i].enabled)
				{
					for (int j = 0; j < 10; ++j)
					{
						if (checkCollisionBE(player.bullet[i], army[j]))
						{
							army[j].enabled = false;
						}
					}
				}
			}

		}
		else if (notDead == false)
		{
			std::cout << "YOU LOSE" << std::endl;
		}
	}


}