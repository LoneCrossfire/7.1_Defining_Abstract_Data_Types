#ifndef CP5_EX7_09.h
#define CP5_EX7_09.h

#include <string>
#include <iostream>

class Person
{
	std::string name;
	std::string address;

	std::string get_name() const { return name; }
	std::string get_address() const { return address; }
};

std::istream &read (std::istream& is, Person& person)
{
    return is >> person.name >> person.address;
}

std::ostream &print (std::ostream& os, const Person& person)
{
    retun os << person.name << " " << person.address;
}

#endif
