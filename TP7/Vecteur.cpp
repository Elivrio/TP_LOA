#include "Vecteur.hpp"

Vecteur::Vecteur(int x, int y, int z):abscisse(x), ordonnee(y), hauteur(z) {}

int Vecteur::getAbscisse() const { return abscisse; }
int Vecteur::getOrdonnee() const { return ordonnee; }
int Vecteur::getHauteur() const { return hauteur; }

void Vecteur::setAbscisse(int x) { abscisse = x; }
void Vecteur::setOrdonnee(int y) { ordonnee = y; }
void Vecteur::setHauteur(int z) { hauteur = z; }

bool Vecteur::operator==(Vecteur const& target) const
{
	return (this->abscisse == target.abscisse && this->ordonnee == target.ordonnee&& this->hauteur == target.hauteur);
}
