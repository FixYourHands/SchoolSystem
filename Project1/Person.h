#pragma once
#include <string>
#include "Address.h"


class Person
{
private:
	//dateofbirth
	std::string firstName;
	std::string lastName;
	std::string phoneNumber;
	Address address;
	static int uniqueId;
	int idNumber;

public:
	Person(std::string firstName, std::string lastName, std::string phoneNumber, const Address& address);
	Person(std::string firstName, std::string lastName, std::string phoneNumber);
	Person(std::string firstName, std::string lastName, Address address);
	Person(std::string firstName, std::string lastName);
	Person();
	
	
	Address getAddress() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getPhoneNumber() const;
	int getIDNumber() const;
};