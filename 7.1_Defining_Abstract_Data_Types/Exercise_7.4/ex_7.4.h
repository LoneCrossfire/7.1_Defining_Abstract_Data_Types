#ifndef CP5_EX7_04.h
#define CP5_EX7_04.h

#include <string>

class Person
{
	std::string name;
	std::string address;

	std::string get_name() const { return name; }
	std::string get_address() const { return address; }
};

#endif
