#include "Birthday.h"

Birthday::Birthday()
{
}

Birthday::Birthday(int day, int month, int year, string name)
	:Date(day, month,year)
{
	this->name = name;
}

void Birthday::Print1()
{
	this->Print();

	std::cout << name << std::endl;
}

string Birthday::GetName()
{
	return name;
}

Birthday Birthday::Equals(Birthday& other)
{
	int thisYear, thisMonth, thisDay;

	int otherYear, otherMonth, otherDay;

	this->GetDate(thisDay, thisMonth, thisYear);

	other.GetDate(otherDay, otherMonth, otherYear);

	if (thisYear < otherYear || (thisYear == otherYear && thisMonth < otherMonth) || (thisYear == otherYear && thisMonth == otherMonth && thisDay < otherDay))
	{
		Birthday result(thisDay, thisMonth, thisYear, this->name);

		return result;
	}
	else
	{
		Birthday result(otherDay, otherMonth, otherYear, other.GetName());

		return result;
	}
}


