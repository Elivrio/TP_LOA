#include "Point.hpp"


Point::Point(int x, int y):x_axis(x), y_axis(y) {}

Point::Point(): Point(0,0) {}

int Point::get_x_axis() const
{
	return x_axis;
}

int Point::get_y_axis() const
{
	return y_axis;
}

void Point::set_x_axis(int x)
{
	x_axis = x;
}

void Point::set_y_axis(int y)
{
	y_axis = y;
}

void Point::print_object() const
{
	std::cout << "(" << x_axis << "," << y_axis << ")" << '\n';
}

double Point::distance(const Point p) const
{
	return ( sqrt(pow(x_axis - p.get_x_axis(), 2) + (pow(y_axis - p.get_y_axis(), 2))) );
}

double sinus(double x, strin)
