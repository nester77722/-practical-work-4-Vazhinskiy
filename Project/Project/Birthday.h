#pragma once
#include "Date.h"

using std::string;

class Birthday : public Date
{
private:

	std::string name;

public:

	Birthday();

	Birthday(int, int, int, string);

	void Print1();

	Birthday Equals(Birthday& other);

	string GetName();
};

