#ifndef BOXINT
#define BOXINT

#include <iostream>

class BoxInt {
private:
	int i;

public:
	BoxInt (int a);
	void setInt(int a);
	int getInt() const;
	void printInt() const;
};

#endif
