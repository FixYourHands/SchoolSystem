#pragma once
#include <string>
#include <vector>
#include "Person.h"
#include "Course.h"

class Course;

class Student : public Person
{
private:
	float m_GPA;
	float m_creditHours;
	unsigned int m_classCount;
	bool m_isInternationalStudent;
	bool m_isOnProbation;
	bool m_isPartTime;
	std::vector<Course> m_enrolledCoursesList;
public:
	
	//use the same constructor as Person class
	Student(std::string firstName, std::string lastName, std::string phoneNumber, const Address& address, bool foreignStatus);
	Student(std::string firstName, std::string lastName, std::string phoneNumber, bool foreignStatus);
	Student(std::string firstName, std::string lastName, bool foreignStatus = false);
	Student();


	//getter functions
	float getCreditHours() const;
	float getGPA() const;
	int getClassCount() const; //returns the amound of courses the student is enrolled in
	bool getInternationalStatus() const;
	bool getPartTimeStatus() const;
	bool getProbationStatus() const;
	std::vector<Course> getEnrolledCoursesList() const;
};
