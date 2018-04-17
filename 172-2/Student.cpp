#include "Student.h"
Student::Student()
{
}
Student::~Student()
{  
}
void Student::input()
{
	std::cout << "fullName: ";
	std::cin >> fullName;
	//make this a lot of time

}
void Student::show()
{
	std::cout << "fullName: ";
	std::cout << fullName << std::endl;
	//make this a lot of time
}
std::string Student::getFullName()
{
	return fullName;
}
void Student::setFullName(std::string _fullName)
{
	if (!_fullName.empty())
	{
		fullName = _fullName;
	}
}
//make this a lot of time