#include "Date.hpp"

Date::Date(int d, int m, int y):day(d%30), month(m%12), year(y) {}

void Date::print_date() const
{
	int m = month, d = day;
	if (month == 0) { m = 12; }
	if (day == 0) { d = 30; }
	std::cout  << m << "/" << d << "/" << year << "/" << '\n';
}

bool Date::increment_date()
{
	day = (day + 1) % 30;
	if (day == 1)
	{
		month = (month + 1) % 12;
		if (month == 1)
		{
			year++;
			return true;
		}
	}
	return false;
}
