#pragma once
#include <string>
class Gameobject
{
public:
	std::string name;

	bool enabled;

	virtual void update();
	virtual void draw();
};