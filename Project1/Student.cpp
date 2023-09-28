#include "Student.h"

const int MAX_CLASS_COUNT = 6;//maximum amount of classes a student can enroll in

Student::Student(std::string firstName, std::string lastName, std::string phoneNumber, const Address& address, bool foreignStatus = false)
	:Person(firstName,lastName,phoneNumber,address)
{
	this->GPA = 0.f;
	this->classCount = 0;
	this->creditHours = 0.f;
	this->isInternationalStudent = foreignStatus;
	this->isOnProbation = false;
	this->isPartTime = false;
}

Student::Student(std::string firstName, std::string lastName, std::string phoneNumber, bool foreignStatus = false)
	:Person(firstName, lastName, phoneNumber)
{
	this->GPA = 0.f;
	this->classCount = 0;
	this->creditHours = 0.f;
	this->isInternationalStudent = foreignStatus;
	this->isOnProbation = false;
	this->isPartTime = false;
}

Student::Student(std::string firstName, std::string lastName, bool foreignStatus)
	:Person(firstName,lastName)
{
	this->GPA = 0.f;
	this->classCount = 0;
	this->creditHours = 0.f;
	this->isInternationalStudent = foreignStatus;
	this->isOnProbation = false;
	this->isPartTime = false;
}

Student::Student()
	:Person()
{
	this->GPA = 0.f;
	this->classCount = 0;
	this->creditHours = 0.f;
	this->isInternationalStudent = false;
	this->isOnProbation = false;
	this->isPartTime = false;
}

float Student::getGPA() const
{
	return this->GPA;
}

float Student::getCreditHours() const
{
	return this->creditHours;
}

int Student::getClassCount() const
{
	return this->classCount;
}

bool Student::getInternationalStatus() const
{
	return this->isInternationalStudent;
}

bool Student::getPartTimeStatus() const
{
	return this->isPartTime;
}


bool Student::getProbationStatus() const
{
	return this->isOnProbation;
}

std::vector<Course> Student::getEnrolledCoursesList() const
{
	return this->enrolledCoursesList;
}
