#include "Officer.h"
#include <iostream>
Officer::Officer()
{
	fullName = "";
	happiness = 50;
	badgeNumber = 0;
}
Officer::Officer(std::string initialName, int initialHappiness, int initialBadgeNumber)
{
	fullName = initialName;
	happiness = initialHappiness;
	badgeNumber = initialBadgeNumber;
}
void Officer::greet()
{
	std::cout << "my name " << fullName << "." << std::endl;
	std::cout << "officers numb " << badgeNumber << "." << std::endl;
}
