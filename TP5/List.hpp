#ifndef LIST
#define LIST

#include "Cell.hpp"

class List {
private:
	Cell* head;
	Cell* tail;
	int len;


public:
	List (Cell* head, Cell* tail);
	List ();

	virtual ~List();

	int length();
	int get(int idx);
	int find(int val);
	void set(int idx, int val);
	void insert(int idx, int val);
	void del(int idx);

	void print() const;
};
#endif
