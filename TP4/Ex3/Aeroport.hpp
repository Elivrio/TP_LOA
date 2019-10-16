#ifndef AEROPORT
#define AEROPORT

#include <string>
#include <vector>
#include "Avion.hpp"

using namespace std;

class Aeroport {
private:
	string nom;
	vector<Avion> avions;

public:
	Aeroport (string s);
	void atterrissage(Avion& a);
};

#endif
