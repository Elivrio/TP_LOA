#include "Aeroport.hpp"

Aeroport::Aeroport(string s):nom(s) {}

void Aeroport::atterrissage(Avion& a)
{
	avions.push_back(a);
}
