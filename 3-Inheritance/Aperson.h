#pragma once
#include <string>
class APerson
{
protected:
	std::string fullName;
	int happiness;
public:
	APerson();
	APerson(std::string initialName, int initialHappiness);
	virtual void greet();
	bool isHappy();

};