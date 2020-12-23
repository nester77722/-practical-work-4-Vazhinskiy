#include "Date.h"

Date::Date()
{
	day = 0;

	month = 0;

	year = 0;
}

Date::Date(int day, int month, int year)
{
	this->day = day;

	this->month = month;

	this->year = year;
}

void Date::Print()
{
	std::cout << day << ":" << month << ":" << year << std::endl;
}

void Date::GetDate(int& day, int& month, int& year)
{
	day = this->day;

	month = this->month;

	year = this->year;
}
