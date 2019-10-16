#include "Horloge.hpp"
#include "Date.hpp"
#include "Calendar.hpp"


using namespace std;

int main(int argc, char const *argv[]) {

	int h = 0, m = 0, s = 0;
	cout << "Veuillez entrer une heure : ";
	cin >> h;
	cout << "Veuillez entrer une minute : ";
	cin >> m;
	cout << "Veuillez entrer une seconde : ";
	cin >> s;
	Horloge first_horloge(h, m, s);
	/*
	first_horloge.print_hour();
	if (first_horloge.increment_hour())
	{
		first_horloge.print_hour();
	}
	*/

	int d = 0, mo = 0, y = 0;
	cout << "Veuillez entrer un jour : ";
	cin >> d;
	cout << "Veuillez entrer un mois : ";
	cin >> mo;
	cout << "Veuillez entrer une année : ";
	cin >> y;
	Date first_date(d, mo, y);
	/*
	first_date.print_date();
	if (first_date.increment_date())
	{
		cout << "Happy New Year" << '\n';
		first_date.print_date();
	}
	*/

	Calendar first_calendar(first_date, first_horloge);
	first_calendar.print_today();
	first_calendar.add_hour();
	first_calendar.add_second();
	first_calendar.print_today();
	
	return 0;
}
