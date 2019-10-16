#include "Horloge.hpp"

Horloge::Horloge (int h, int m, int s):hours(h%24), minutes(m%60), seconds(s%60) {}
Horloge::Horloge()
{
	Horloge(0,0,0);
}

void Horloge::print_hour() const
{
	std::cout << hours << "h" << minutes << "m" << seconds << "s" << '\n';
}

bool Horloge::increment_second()
{
	seconds = (seconds + 1) % 60;
	if (seconds == 0)
	{
		minutes = (minutes + 1) % 60;
		if (minutes == 0)
		{
			hours = (hours + 1) % 24;
			if (hours == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool Horloge::increment_hour()
{
	hours = (hours + 1) % 24;
	if (hours == 0)
	{
		return true;
	}
	return false;
}
