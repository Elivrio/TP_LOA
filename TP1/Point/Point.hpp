#ifndef POINT
#define POINT

#include <string>
#include <iostream>
#include <cmath>

class Point {
	private:
		int x_axis;
		int y_axis;

	public:
		Point (int, int);
		Point();

		int get_x_axis() const;
		int get_y_axis() const;
		void set_x_axis(int);
		void set_y_axis(int);
		void print_object() const;
		double distance(const Point x) const;
};

double sinus (double, char c);

#endif
