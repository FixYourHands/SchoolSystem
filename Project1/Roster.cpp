#include "Roster.h"

void Roster::addStudent(const Student& student)
{
	if (m_studentList.size() >= m_maxStudentCount)
	{
		std::cout << "Error: Could not enroll student, class full!\n";
	}
	else
	{
		m_studentList.push_back(student);
		std::cout << "Student added!\n";
	}
}