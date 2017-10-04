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

std::fstream score;
int Gamescore = 0;
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
bool notDead = true;
int disableCount = 0;
int main()
{
	score.open("score", std::ios::out | std::ios::in);

	if (score.fail())
	{
		score.clear();

		score.open("score", std::ios::out);
	}
	else
	{
		// read the value if it does
		
		score.seekp(0);
	}

	
	std::string buffer;
	while (std::getline(score, buffer))
	{
		std::cout << buffer << std::endl;
	}
	
	srand(time(NULL));
	sfw::initContext(800, 600, "WaveShot");
	sfw::setBackgroundColor(BLACK);
	TheRealPlayer player;
	player.x = 400;
	player.y = 300;
	player.radius = 10;
	MyMouse mouse;
	
	Enemy enemy;
	enemy.posX = 100;
	enemy.posY = 100;
	enemy.radius = 10;

	Enemy army[10];
	for (int i = 0; i < 10; ++i)
	{
		army[i].posX = rand() % 800;
		army[i].posY = rand() % 600;
		army[i].Xspeed = 0.05 * sfw::getTime();
		army[i].Yspeed = 0.05 * sfw::getTime();
		army[i].radius = rand() % 36 + 3;
	}
	
	
	while (sfw::stepContext())
	{
		std::cout << disableCount << std::endl;
		// update all the things!	
		if (notDead)
		{

			for (int i = 0; i < 10; ++i)
			{
				army[i].update(player);
				//army[i].enabled = true;
				army[i].draw();
				army[i].Xspeed += 1 * 0.0005f;
				army[i].Yspeed += 1 * 0.0005f;
			}
			
			player.ThePlayerControls();
			player.ThePlayerScreenWrap();
			Gamescore += sfw::getTime();
			

			// draw everything!
			mouse.Cursor();
		
			player.draw();
			player.update(mouse);
			mouse.OnMouseDown();

			//enemy & player collision checks
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
				
				
			}
			//bullet & enemy collision checks
			for (int i = 0; i < 20; ++i)
			{
				if (player.bullet[i].enabled)
				{
					for (int j = 0; j < 10; ++j)
					{
						if (army[j].enabled == true)
						{
							if (checkCollisionBE(player.bullet[i], army[j]))
							{
								army[j].enabled = false;
								disableCount++;
								break;
							}
						}
					}
				}
			}
			
			if (disableCount >= 10)
			{
				for (int i = 0; i < 10; ++i)
				{
					army[i].enabled = true;
					army[i].posX = rand() % 800;
					army[i].posY = rand() % 600;
					army[i].Xspeed = 1 * sfw::getTime() / sfw::getTime() + 1;
					army[i].Yspeed = 1 * sfw::getTime() / sfw::getTime() + 1;
					army[i].radius = rand() % 36 + 3;
					disableCount = 0;
				}
			}

		}
		else if (notDead == false)
		{
			score.clear();
			score.seekp(0, std::ios_base::end);
			score << std::endl << Gamescore;
			score.flush();
			score.close();
			std::cout << "YOU LOSE" << std::endl;
			exit(0);
		}
	}
	score.clear();
	score.seekp(0, std::ios_base::end);
	score << std::endl << Gamescore;
	score.flush();
	score.close();
}