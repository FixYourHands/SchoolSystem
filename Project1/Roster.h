#pragma once
#include <iostream>
#include "Student.h"
#include "Professor.h"

class Roster
{
private:
	std::vector<Student> m_studentList;
	std::vector<Professor> m_professorList;
	int m_maxStudentCount;
public:
	Roster(int maxStudents);

	void addStudent(const Student& student);
		
};