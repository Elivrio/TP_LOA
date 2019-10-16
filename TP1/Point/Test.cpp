#include "Point.hpp"

using namespace std;

int main(int argc, char const *argv[]) {

	Point a (0,0), b(1,1);

	a.print_object();
	b.print_object();

	double tmp = a.distance(b);
	std::cout << tmp << '\n';

	return 0;
}
