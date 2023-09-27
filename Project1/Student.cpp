#include "Student.h"

const int MAX_CLASS_COUNT = 6;//maximum amount of classes a student can enroll in

Student::Student(std::string firstName, std::string lastName, std::string phoneNumber, const Address& address)
	:Person(firstName,lastName,phoneNumber,address)
{
	this->GPA = 0.f;
	this->classCount = 0;
	this->creditHours = 0.f;
}

Student::Student(std::string firstName, std::string lastName, std::string phoneNumber)
	:Person(firstName, lastName, phoneNumber)
{
	this->GPA = 0.f;
	this->classCount = 0;
	this->creditHours = 0.f;
}

Student::Student(std::string firstName, std::string lastName)
	:Person(firstName,lastName)
{
	this->GPA = 0.f;
	this->classCount = 0;
	this->creditHours = 0.f;
}

Student::Student()
	:Person()
{
	this->GPA = 0.f;
	this->classCount = 0;
	this->creditHours = 0.f;
}

float Student::getCreditHours() const
{
	return creditHours;
}

bool Student::isInternational() const
{
	return 0;
}

bool Student::isPartTime() const
{
	return 0;
}


bool Student::isOnProbation() const
{
	return 0;
}
