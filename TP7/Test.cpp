#include "Vecteur.hpp"

int main(int argc, char const *argv[]) {
	Vecteur v, v1(1,2,3), v2(3,4,5);
	v = (v1==v2);
	cout << "" << v << '\n';
	return 0;
}
