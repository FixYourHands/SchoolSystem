#include "Address.h"

Address::Address(std::string country = "N/A", std::string city = "N/A", std::string state = "N/A", std::string streetName = "N/A", std::string postalCode = "N/A")
{
	this->country = country;
	this->city = city;
	this->state = state;
	this->streetName = streetName;
	this->postalCode = postalCode;
}

Address::Address()
{
	this->country = "N/A";
	this->city = "N/A";
	this->state = "N/A";
	this->streetName = "N/A";
	this->postalCode = "N/A";
}


std::string Address::getCountry() const
{
	return this->country;
}

std::string Address::getState() const
{
	return this->state;
}

std::string Address::getCity() const
{
	return this->city;
}

std::string Address::getStreetName() const
{
	return this->country;
}

std::string Address::getPostalCode() const
{
	return this->country;
}
