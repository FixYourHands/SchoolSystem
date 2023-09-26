#pragma once
#include <string>
#include <vector>
#include "Person.h"
#include "Student.h"

class Course
{
private:
	std::string courseName;
	static int uniqueCourseCode;
	int courseCode;
	int minStudents;
	int maxStudents;
	float creditHours;
	std::vector<Student> studentBody;
public:
	Course(std::string name,float numOfCredits, int minStudents, int maxStudents);
	Course();

	int getCourseCode() const;
	int getMinStudents() const;
	int getMaxStudents() const;
	std::vector<Student> getClass() const;


	



};