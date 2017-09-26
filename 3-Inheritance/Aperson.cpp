#include "Aperson.h"
#include <iostream>
APerson::APerson()
{
	fullName = "";
	happiness = 50;
}

APerson::APerson(std::string initialName, int initialHappiness)
{
	fullName = initialName;
	happiness = initialHappiness;
}

void APerson::greet()
{
	std::cout << "sup " << fullName << std::endl;
}

bool APerson::isHappy()
{

	return happiness > 70;
}
