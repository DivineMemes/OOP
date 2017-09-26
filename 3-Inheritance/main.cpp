#include <string>
#include "Aperson.h"
#include "Officer.h"
#include "ThePlayer.h"
#include "sfwdraw.h"
#include "BaseParticle.h"
#include <iostream>

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
	sfw::initContext(800, 600, "SFW");
	sfw::setBackgroundColor(WHITE);
	unsigned int imgMeme = sfw::loadTextureMap("mrmeme.png");
	unsigned int imgParticle = sfw::loadTextureMap("orangeParticle.png");
	
	ThePlayer meme;
	meme.TextureHandle = imgMeme;
	meme.x = 400;
	meme.y = 300;
	BaseParticle particle;
	particle.player = &meme;

	float followTime = 1;

	while(sfw::stepContext()) 
	{
		followTime -= sfw::getDeltaTime();

		if (followTime <= 0)
		{
			//std::cout << "Folloow";

			particle.UpdatePlayerPos();
			
			followTime = 1;
		}

		particle.PTextureHandle = imgParticle;
		meme.draw();
		meme.update();
		particle.draw();
		particle.update();
		
		
	}
	return 0;
}