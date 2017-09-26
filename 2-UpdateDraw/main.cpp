#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sfwdraw.h"
#include "Player.h"
#include "effects.h"
#include "Circle.h"

int main()
{
	

	//create window and drawing context
	sfw::initContext(800, 600, "SFW");
	//set background color
	sfw::setBackgroundColor(NONE);
	//set the game loop
	Circle circle;


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
		 circle.draw();



		
	}
	//clean up your crap
	sfw::termContext();
}