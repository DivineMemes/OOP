#pragma once

class Television
{
private:
	int currentChannel;
	int currentVolume;
public:
	Television();
	Television(int chn, int vol);
	int channel;
	int volume;

	void increaseVolume(int vol);
	void decreaseVolume(int vol);

	void increaseChannel(int chn);
	void decreaseChannel(int chn);
	void printTV();
};
