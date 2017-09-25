#include "Television.h"
#include <iostream>

Television::Television()
{
	channel = currentChannel;
	volume = currentVolume;
}

Television::Television(int chn, int vol)
{
	channel = chn;
	volume = vol;
	printTV();
}

void Television::increaseVolume(int vol)
{
	volume++;
	printTV();
}

void Television::decreaseVolume(int vol)
{
	volume--;
	printTV();
}

void Television::increaseChannel(int chn)
{
	channel++;
	printTV();
}

void Television::decreaseChannel(int chn)
{
	channel--;
	printTV();
}

void Television::printTV()
{
	std::cout << "The current channel is " << channel << std::endl;
	std::cout << "The current volumes at " << volume << std::endl;
}
