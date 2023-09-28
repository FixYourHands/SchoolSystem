#include "Course.h"

const int MAX_COURSE_CODE = 200;

Course::Course(std::string name, float numOfCredits, int minStudents, int maxStudents)
{
	this->m_courseName = name;
	this->m_creditHours = numOfCredits;
	this->m_minStudents = minStudents;
	this->m_maxStudents = maxStudents;
	if (m_uniqueCourseCode >= MAX_COURSE_CODE)
	{
		m_uniqueCourseCode = 0;
	}
	m_uniqueCourseCode++;
	this->m_ourseCode = m_uniqueCourseCode;
	
}

Course::Course()
{
	this->m_courseName = "N/A";
	this->m_creditHours = numOfCredits;
	this->m_minStudents = minStudents;
	this->m_maxStudents = maxStudents;
	if (m_uniqueCourseCode >= MAX_COURSE_CODE)
	{
		m_uniqueCourseCode = 0;
	}
	m_uniqueCourseCode++;
	this->m_courseCode = m_uniqueCourseCode;
}

int Course::getCourseCode() const
{
	return this->m_courseCode;
}

int Course::getMinStudents() const
{
	return this->m_minStudents;
}

int Course::getMaxStudents() const
{
	return this->m_maxStudents;
}

Roster Course::getClassRoster() const
{
	return this->m_classRoster;
}

int Course::getClassSize() const
{
	return this->.size();
}

ActiveStatus Course::getEnrollmentStatus() const
{
	return this->m_classActiveStatus;
}

OccupancyStatus Course::getOccupancyStatus() const
{
	return this->m_classCccupancyStatus;
}


