#ifndef HORLOGE
#define HORLOGE

#include <iostream>
#include <string>

class Horloge {
private:
	int hours;
	int minutes;
	int seconds;

public:
	Horloge (int h, int m, int s);
	Horloge ();
	void print_hour() const;
	bool increment_hour();
	bool increment_second();
};
#endif
