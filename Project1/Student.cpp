#include "Student.h"

const int MAX_CLASS_COUNT = 6;//maximum amount of classes a student can enroll in

Student::Student(std::string firstName, std::string lastName, std::string phoneNumber, const Address& address, bool foreignStatus = false)
	:Person(firstName,lastName,phoneNumber,address)
{
	this->m_GPA = 0.f;
	this->m_classCount = 0;
	this->m_creditHours = 0.f;
	this->m_isInternationalStudent = foreignStatus;
	this->m_isOnProbation = false;
	this->m_isPartTime = false;
}

Student::Student(std::string firstName, std::string lastName, std::string phoneNumber, bool foreignStatus = false)
	:Person(firstName, lastName, phoneNumber)
{
	this->m_GPA = 0.f;
	this->m_classCount = 0;
	this->m_creditHours = 0.f;
	this->m_isInternationalStudent = foreignStatus;
	this->m_isOnProbation = false;
	this->m_isPartTime = false;
}

Student::Student(std::string firstName, std::string lastName, bool foreignStatus)
	:Person(firstName,lastName)
{
	this->m_GPA = 0.f;
	this->m_classCount = 0;
	this->m_creditHours = 0.f;
	this->m_isInternationalStudent = foreignStatus;
	this->m_isOnProbation = false;
	this->m_isPartTime = false;
}

Student::Student()
	:Person()
{
	this->m_GPA = 0.f;
	this->m_classCount = 0;
	this->m_creditHours = 0.f;
	this->m_isInternationalStudent = false;
	this->m_isOnProbation = false;
	this->m_isPartTime = false;
}

float Student::getGPA() const
{
	return this->m_GPA;
}

float Student::getCreditHours() const
{
	return this->m_creditHours;
}

int Student::getClassCount() const
{
	return this->m_classCount;
}

bool Student::getInternationalStatus() const
{
	return this->m_isInternationalStudent;
}

bool Student::getPartTimeStatus() const
{
	return this->m_isPartTime;
}


bool Student::getProbationStatus() const
{
	return this->m_isOnProbation;
}

std::vector<Course> Student::getEnrolledCoursesList() const
{
	return this->m_enrolledCoursesList;
}
