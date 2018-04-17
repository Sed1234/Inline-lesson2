#pragma once
#include <string>
#include <iostream>
class Student
{
private:
	std::string fullName, dateOfBirth, phone, city, country, university, cityOfUniversity, countryOfUniversity;
	int group;
public:
	Student();
	~Student();
	//method for data filling
	void input();
	void show();
	std::string getFullName();
	void setFullName(std::string);
};

