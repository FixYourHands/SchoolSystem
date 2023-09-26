#pragma once
#include <string>
#include "Person.h"

class Student : public Person
{
public:
	Student();
	bool isInternational() const;
	bool isPartTime() const;
	bool isOnProbation() const;
};
