#include "Caddie.hpp"

Caddie::Caddie() {}

void Caddie::add(Article &a)
{
	content.push_back(a);
}

Caddie::~Caddie()
{
	std::cout << "FOR THE HOOORRDDEEEE !!!!!!!!!!!" << '\n';
}

string Caddie::toString() const
{
	string str = "";
	for (auto i = content.begin(); i < content.end(); i++) {
		str += i->toString();
	}
	return str;
}
