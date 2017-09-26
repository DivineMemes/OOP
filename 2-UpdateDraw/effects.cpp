#include "sfwdraw.h"
#include "effects.h"
#include <ctime>
#include <cstdlib>

void randomColors()
{
	srand(time(NULL));
	int colorRand = rand() % 7 + 1;
	if (colorRand == 1)
	{
		sfw::setBackgroundColor(BLACK);
	}
	if (colorRand == 2)
	{
		sfw::setBackgroundColor(CYAN);
	}
	if (colorRand == 3)
	{
		sfw::setBackgroundColor(MAGENTA);
	}
	if (colorRand == 4)
	{
		sfw::setBackgroundColor(YELLOW);
	}
	if (colorRand == 5)
	{
		sfw::setBackgroundColor(RED);
	}
	if (colorRand == 6)
	{
		sfw::setBackgroundColor(GREEN);
	}
	if (colorRand == 7)
	{
		sfw::setBackgroundColor(BLUE);
	}
}


