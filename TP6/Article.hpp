#ifndef ARTICLE
#define ARTICLE

#include <string>
#include <iostream>

using namespace std;

class Article {
protected:
	double price;
	string name;


public:
	Article (string n, double d);
	Article ();
	virtual ~Article(); 

	string toString() const;

	virtual double getPrice() const;
	string getName() const;

	void setPrice(double d);
	void setName(string n);
};
#endif
