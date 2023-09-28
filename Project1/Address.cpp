#include "Address.h"

Address::Address(std::string country, std::string city, std::string state, std::string streetName, std::string postalCode)
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
	this->postalCode = "00000";
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
	return this->streetName;
}

std::string Address::getPostalCode() const
{
	return this->postalCode;
}
