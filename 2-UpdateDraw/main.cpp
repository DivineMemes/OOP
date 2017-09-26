#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sfwdraw.h"
#include "Player.h"
#include "effects.h"
#include "Circle.h"
#include "Line.h"
#include "Box.h"

int main()
{
	

	//create window and drawing context
	sfw::initContext(800, 600, "SFW");
	unsigned int imgMeme = sfw::loadTextureMap("meme.jpg");
	//set background color
	sfw::setBackgroundColor(BLACK);
	//set the game loop
	Circle circle;
	Line line;
	Box box;
	/*
	std::cout << "bottom left X coord" << std::endl;
	std:: cin >> box.bottomleftX;
	std::cout << "bottom left Y coord" << std::endl;
	std:: cin >>box.bottomleftY;
	
	std::cout << "bottom right X coord" << std::endl;
	std::cin>>box.toprightX;
	std::cout << "bottom right Y coord" << std::endl;
	std::cin >> box.toprightY;*/
	//simple stuff
	/*
	Player me;
	me.x1 = 400;
	me.y1 = 300;

	Player2 me2;
	me2.x2 = 400;
	me2.y2 = 300;
	*/
	while(sfw::stepContext())
	{
		//simple stuff runtime
		/*
		me.update();
		me.draw();
		me.screenWrap();

		me2.draw2();
		me2.update2();
		me2.screenWrap2();
		*/
		 sfw::drawTexture(imgMeme, 400, 300, 300, 300);
		 circle.draw();
		 line.draw();
		 box.draw();
		 //sfw::drawTexture(400, 0, 2, 0);
		
		
	}
	//clean up your crap
	sfw::termContext();
}