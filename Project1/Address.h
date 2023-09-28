#pragma once

#include <string>

class Address
{
private:
	std::string country;
	std::string city;
	std::string state;
	std::string streetName;
	std::string postalCode;
public:
	Address(std::string country, std::string city, std::string state, std::string, std::string postalCode);
	Address();


	std::string getCountry() const;
	std::string getCity() const;
	std::string getState() const;
	std::string getStreetName() const;
	std::string getPostalCode() const;
};
