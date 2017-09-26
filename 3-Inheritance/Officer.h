#pragma once
#include "Aperson.h"
#include<string>

class Officer : public APerson
{
protected:
	int badgeNumber;
public: 
	Officer();
	Officer(std::string initialName, 
		int initialHappiness, int initialBadgeNumber);
	virtual void greet() override;
};