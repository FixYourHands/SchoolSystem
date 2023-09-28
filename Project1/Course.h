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
	std::string m_courseName;
	static int m_uniqueCourseCode;
	int m_courseCode;
	int m_minStudents;
	int m_maxStudents;
	float m_creditHours;
	Roster m_classRoster;
	ActiveStatus m_classActiveStatus;
	OccupancyStatus m_classCccupancyStatus;
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