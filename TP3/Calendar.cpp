#include "Calendar.hpp"

Calendar::Calendar(Date d, Horloge t): today(d), time(t) {}

void Calendar::add_second()
{
	if (time.increment_second())
	{
		today.increment_date();
	}

}

void Calendar::add_hour()
{
	if (time.increment_hour())
	{
		today.increment_date();
	}
}

void Calendar::print_today() const
{
	today.print_date();
	time.print_hour();
}
