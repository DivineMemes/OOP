#pragma once
#include <string>


//if class contents are auto private
//if struct aforementioned = public by default
class Person
{
	std::string soc;
public:
	Person();
	Person(std::string n, int a, std::string s);
	std::string name;
	int age;

	void print();
	bool checkSoc(std::string test);
};