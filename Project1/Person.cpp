#include "Person.h"


Person::Person(std::string firstName, std::string lastName, std::string phoneNumber,const Address& address) //Address() calls Address constructor
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->phoneNumber = phoneNumber;
	this->address = address;
	uniqueId++;
	idNumber = uniqueId;
}

Person::Person(std::string firstName, std::string lastName, std::string phoneNumber)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->phoneNumber = phoneNumber;
	this->address = Address();
	uniqueId++;
	idNumber = uniqueId;
}

Person::Person(std::string firstName, std::string lastName, Address address)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->phoneNumber = "N/A";
	this->address = address;
	uniqueId++;
	idNumber = uniqueId;
}

Person::Person(std::string firstName, std::string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->phoneNumber = "N/A";
	this->address = Address();
	uniqueId++;
	idNumber = uniqueId;
}


Person::Person()
{
	this->firstName = "N/A";
	this->lastName = "N/A";
	this->phoneNumber = "N/A";
	this->address = Address();
	uniqueId++;
	idNumber = uniqueId;
}

Address Person::getAddress() const
{
	return this->address;
}
std::string Person::getFirstName() const
{
	return this->firstName;
}
std::string Person::getLastName() const
{
	return this->lastName;
}
std::string Person::getPhoneNumber() const
{
	return this->phoneNumber;
}

int Person::getIDNumber() const
{
	return this->idNumber;
}

int Person::uniqueId = 0;