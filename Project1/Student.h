#pragma once
#include <string>
#include <vector>
#include "Person.h"
#include "Course.h"

class Course;

class Student : public Person
{
private:
	float GPA;
	float creditHours;
	unsigned int classCount;
	bool isInternationalStudent;
	bool isOnProbation;
	bool isPartTime;
	std::vector<Course> enrolledCoursesList;
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
