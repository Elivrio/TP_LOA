#ifndef VECTEUR
#define VECTEUR

#include <iostream>
using namespace std;

class Vecteur {
private:
	int abscisse;
	int ordonnee;
	int hauteur;

public:
	Vecteur (int x = 0, int y = 0, int z = 0);

	int getAbscisse() const;
	int getOrdonnee() const;
	int getHauteur() const;

	void setAbscisse(int x);
	void setOrdonnee(int y);
	void setHauteur(int z);

	bool operator==(Vecteur const& b) const;

};


#endif
