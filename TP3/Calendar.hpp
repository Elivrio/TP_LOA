#ifndef CALENDAR
#define CALENDAR

#include <iostream>
#include <string>
#include "Date.hpp"
#include "Horloge.hpp"

class Calendar {
private:
	Date today;
	Horloge time;

public:
	Calendar (Date d, Horloge t);
	void add_second();
	void add_hour();
	void print_today() const;
};

#endif
