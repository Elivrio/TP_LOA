#include "Siege.hpp"

Siege::Siege(int num, bool b = false):numero(num), reserve(b){}

void Siege::reservation(Personne P)
{
	if (!(reserve))
	{
		reserve = true;
		voyageur = P;
	}
}
