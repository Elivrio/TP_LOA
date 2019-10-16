#include "Cell.hpp"

int main(int argc, char const *argv[])
{
	Cell* c18 = new Cell(4);
	Cell* c17 = new Cell(99);

	c17->connect(c18);
	Cell::pretty_print(c17);

	Cell* krillin = new Cell(11);

	c18->connect(krillin);
	Cell::pretty_print(c17);

	c17->disconnect_next();
	Cell::pretty_print(c18);
	Cell::pretty_print(c17);

	Cell* c16 = new Cell(480);
	Cell::connect(c16, c17);
	Cell::pretty_print(c18);
	Cell::pretty_print(c16);

	return 0;
}
