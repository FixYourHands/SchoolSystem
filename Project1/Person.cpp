#include "Person.h"


Person::Person(std::string firstName, std::string lastName, std::string phoneNumber,const Address& address) //Address() calls Address constructor
{
	this->m_firstName = firstName;
	this->m_lastName = lastName;
	this->m_phoneNumber = phoneNumber;
	this->m_address = address;
	m_uniqueId++;
	m_idNumber = m_uniqueId;
}

Person::Person(std::string firstName, std::string lastName, std::string phoneNumber)
{
	this->m_firstName = firstName;
	this->m_lastName = lastName;
	this->m_phoneNumber = phoneNumber;
	this->m_address = Address();
	m_uniqueId++;
	m_idNumber = m_uniqueId;
}

Person::Person(std::string firstName, std::string lastName, Address address)
{
	this->m_firstName = firstName;
	this->m_lastName = lastName;
	this->m_phoneNumber = "N/A";
	this->m_address = address;
	m_uniqueId++;
	m_idNumber = m_uniqueId;
}

Person::Person(std::string firstName, std::string lastName)
{
	this->m_firstName = firstName;
	this->m_lastName = lastName;
	this->m_phoneNumber = "N/A";
	this->m_address = Address();
	m_uniqueId++;
	m_idNumber = m_uniqueId;
}


Person::Person()
{
	this->m_firstName = "N/A";
	this->m_lastName = "N/A";
	this->m_phoneNumber = "N/A";
	this->m_address = Address();
	m_uniqueId++;
	m_idNumber = m_uniqueId;
}

Address Person::getAddress() const
{
	return this->m_address;
}
std::string Person::getFirstName() const
{
	return this->m_firstName;
}
std::string Person::getLastName() const
{
	return this->m_lastName;
}
std::string Person::getPhoneNumber() const
{
	return this->m_phoneNumber;
}

int Person::getIDNumber() const
{
	return this->m_idNumber;
}

int Person::m_uniqueId = 0;