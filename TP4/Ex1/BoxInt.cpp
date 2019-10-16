#include "BoxInt.hpp"

BoxInt::BoxInt(int a):i(a) {}

int BoxInt::getInt() const
{
	return i;
}

void BoxInt::setInt(int a)
{
	i = a;
}

void BoxInt::printInt() const
{
	std::cout << "i = " << i << '\n';
}
