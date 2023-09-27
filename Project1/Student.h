#pragma once
#include <string>
#include "Person.h"

class Student : public Person
{
private:
	float GPA;
	float creditHours;
	unsigned int classCount;
public:
	
	//use the same constructor as Person class
	Student(std::string firstName, std::string lastName, std::string phoneNumber, const Address& address);
	Student(std::string firstName, std::string lastName, std::string phoneNumber);
	Student(std::string firstName, std::string lastName);
	Student();
	//explicit Student(std::string firstName, std::string lastName) : Person(firstName,lastName) {}; //call Person constructor
	float getCreditHours() const;
	bool isInternational() const;
	bool isPartTime() const;
	bool isOnProbation() const;
};
