#include <iostream>
#include "person.h"

Person::Person()
{
	name = "";
	age = 0;
}

Person::Person(std::string n, int a, std::string s)
{
	name = n;
	age = a;
	soc = s;
}

void Person::print()
{
	std::cout << name << std::endl;
	std::cout << age << std::endl;
}

bool Person::checkSoc(std::string test)
{
	return soc == test;
}