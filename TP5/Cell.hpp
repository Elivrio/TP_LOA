#ifndef CELL
#define CELL

#include <.h>

using namespace std;

class Cell {
private:
	Cell	previous
	Cell	next
	int		content

public:
	Cell (int i);

	int get_content() const;
	Cell get_next() const;
	Cell get_previous() const;

	void set_content (int i);

	void connect(Cell new_next);
	void disconnect_previous();
	void disconnect_next();
};
#endif
