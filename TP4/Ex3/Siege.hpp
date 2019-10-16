#ifndef SIEGE
#define SIEGE

#include "Personne.hpp"

using namespace std;

class Siege {
private:
	const int numero;
	bool reserve;
	Personne voyageur;

public:
	Siege (int num, bool b);
	void reservation(Personne p);
};

#endif
