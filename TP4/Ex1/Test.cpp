#include "BoxInt.hpp"

using namespace std;

void fonction1(BoxInt t)
{
	t.setInt(36);
}

void fonction2(BoxInt *t)
{
	t->setInt(666);
}

void fonction3(BoxInt &t)
{
	t.setInt(1);
}



int main(int argc, char const *argv[]) {


	BoxInt monTest(42); monTest.printInt();
	monTest.setInt(0); monTest.printInt();
	fonction1(monTest); monTest.printInt();
	fonction2(&monTest); monTest.printInt();
	fonction3(monTest); monTest.printInt();
	return 0;
}
