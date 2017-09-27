#include <string>
#include <iostream>
#include "Aperson.h"
#include "Officer.h"
#include "ThePlayer.h"
#include "sfwdraw.h"
#include "BaseParticle.h"
#include "MouseFunctions.h"
#include "MouseLineDraw.h"
#include "LineDrawer.h"
int main()
{
	/*
	APerson me ("memegod", 90);
	me.greet();
	me.isHappy();
	Officer datboi("datboi pepesworth", 20, 1231231);
	datboi.greet();
	datboi.isHappy();
	me.greet();
	*/
	sfw::initContext(800, 600, "MR.Orange");
	sfw::setBackgroundColor(BLACK);
	unsigned int imgMeme = sfw::loadTextureMap("mrmeme.png");
	unsigned int imgParticle = sfw::loadTextureMap("orangeParticle.png");
	unsigned int quickSong = sfw::loadSound("mr_orange__gets_very_lost.wav");
	ThePlayer meme;
	meme.TextureHandle = imgMeme;
	meme.x = 400;
	meme.y = 300;
	
	LineDrawer lines[500];
	MouseLineDraw mouse;
	mouse.currentLine = &lines[0];
	//BaseParticle particle;
	//particle.player = &meme;

	float followTime = 1;
	sfw::playSound(quickSong, true);
	
	while(sfw::stepContext()) 
	{
		mouse.update(lines, 500);
		//follow for follower
		/*
		followTime -= sfw::getDeltaTime();

		if (followTime <= 0)
		{
			//std::cout << "Folloow";

			//particle.UpdatePlayerPos();
			
			followTime = 1;
		}

		particle.PTextureHandle = imgParticle;
		*/
		

		meme.draw();
		meme.update();
		
		MouseDrawLine(meme);
		MouseDrawPoint();
		DrawMouse();
		meme.ThePlayerScreenWrap();
		
		

		for (int i = 0; i < 500; i++)
		{
			lines[i].draw();

			
		}

		//particle.draw();
		//particle.update();
		
	}
	
	return 0;
}