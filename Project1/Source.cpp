#include "Address.h"
#include "Course.h"
#include <iostream>


std::vector<Course> fullRoster(10000);

void ignoreInput()
{
	std::cin.clear();
	std::cin.ignore(10000, '\n');
}

Student createStudent()
{
	std::string firstName;
	std::string lastName;
	std::cin >> firstName;
	std::cin >> lastName;
	Student student(firstName, lastName);
	return student;
}
int main()
{
	std::vector<Student> classRoom;
	int input = 0;

	Course Course1("Math101", 3.0, 5, 30);

	Address address1("USA", "Phoenix", "Arizona", "7708 South 23rd Lane", "85041");
	std::cout << sizeof(fullRoster);



	
	
	
}