#include "Course.h"

const int MAX_COURSE_CODE = 200;

Course::Course(std::string name, float numOfCredits, int minStudents, int maxStudents)
{
	this->courseName = name;
	this->creditHours = numOfCredits;
	this->minStudents = minStudents;
	this->maxStudents = maxStudents;
	if (uniqueCourseCode >= MAX_COURSE_CODE)
	{
		uniqueCourseCode = 0;
	}
	uniqueCourseCode++;
	this->courseCode = uniqueCourseCode;
	
}

Course::Course()
{
	this->courseName = "N/A";
	this->creditHours = 0;
	this->minStudents = 0;
	this->maxStudents = 0;
	if (uniqueCourseCode >= 200)
	{
		uniqueCourseCode = 0;
	}
	uniqueCourseCode++;
	this->courseCode = uniqueCourseCode;
}

int Course::getCourseCode() const
{
	return courseCode;
}

int Course::getMinStudents() const
{
	return minStudents;
}

int Course::getMaxStudents() const
{
	return maxStudents;
}

std::vector<Student> Course::getClass() const
{
	return studentBody;
}
