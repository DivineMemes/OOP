#pragma once
#include "sfwdraw.h"
#include <string>


class Particle
{
public:
	float speedX;
	float speedY;
	std::string particle;
	void DrawLineParticle();
};