#ifndef DATE
#define DATE

#include <iostream>
#include <string>

class Date {
private:
	int day;
	int month;
	int year;

public:
	Date (int d, int m, int y);
	bool increment_date();
	void print_date() const;
};
#endif
