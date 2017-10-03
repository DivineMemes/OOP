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
bool checkCollision(TheRealPlayer& player, Enemy &enemy)
{
	// do some math in here to figure out if they are colliding
	float xSquared = pow(enemy.posX - player.x, 2);
	float ySquared = pow(enemy.posY - player.y, 2);
	float distance = sqrt(xSquared + ySquared);
	
	if (player.radius + enemy.radius > distance)
	{
		return true;
	}
	if (player.radius + enemy.radius < distance)
	{
		return false;
	}
	// return true if they are
	// return false if they aren't
}
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
				// did collision occur?
				if (checkCollision(player, army[i]) == true)
				{

					// yass, okay, what now?
					notDead = false;

				}
			}

		}
		if (notDead == false)
		{
			std::cout << "YOU LOSE" << std::endl;
		}
	}


}