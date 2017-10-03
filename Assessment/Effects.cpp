#include "Effects.h"
#include "sfwdraw.h"
#include <ctime>
#include <cstdlib>

int RandomColors()
{
		srand(time(NULL));
		int colorRand = rand() % 6 + 1;
		int color = 0;
		if (colorRand == 1)
		{
			color = CYAN;
		}
		if (colorRand == 2)
		{
			color=MAGENTA;
		}
		if (colorRand == 3)
		{
			color = YELLOW;
		}
		if (colorRand == 4)
		{
			color=RED;
		}
		if (colorRand == 5)
		{
			color=GREEN;
		}
		if (colorRand == 6)
		{
			color = BLUE;
		}
		
		return color;
}


