#include "Article.hpp"

Article::Article(string n, double d):price(d), name(n) {}

Article::Article():price (0.), name("default") {}

string Article::toString() const
{
	return name + " : " + to_string(getPrice()) + "€";
}

double Article::getPrice() const
{
	return price;
}

string Article::getName() const
{
	return name;
}

void Article::setPrice(double d)
{
	price = d;
}

void Article::setName(string n)
{
	name = n;
}

Article::~Article()
{
	std::cout << "COALITIONNNNN" << '\n';
}
