#pragma once
#include <string>
#include <vector>
#include "Person.h"
#include "Student.h"
enum ActiveStatus {Active, Inactive}; //is the class open for enrollment
enum OccupancyStatus {Closed, Open}; //is this class full or does it have open space

class Student;

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
	ActiveStatus classActiveStatus;
	OccupancyStatus classCccupancyStatus;
public:
	Course(std::string name,float numOfCredits, int minStudents, int maxStudents);
	Course();

	int getCourseCode() const;
	int getMinStudents() const;
	int getMaxStudents() const;
	std::vector<Student> getClass() const;
	int getClassSize() const;
	ActiveStatus getEnrollmentStatus() const;
	OccupancyStatus getOccupancyStatus() const;



	



};