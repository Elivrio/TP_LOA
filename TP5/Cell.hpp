#ifndef CELL
#define CELL

#include <cstddef>
#include <iostream>

using namespace std;

class Cell {
private:
	int		content;
	Cell*	next;
	Cell*	previous;

public:
	Cell (int i);

	int get_content() const;
	Cell* get_next() const;
	Cell* get_previous() const;

	void set_content (int i);

	void connect(Cell* new_next);
	static void connect (Cell* c1, Cell* c2);
	void disconnect_previous();
	void disconnect_next();

	static void pretty_print(Cell* head);
	void print_it() const;
};
#endif
