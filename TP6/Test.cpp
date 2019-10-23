#include "ArticleEnSolde.hpp"

int main(int argc, char const *argv[])
{
	// Article a ("Parapluie", 5.);
	// std::cout << a.toString() << '\n';
	// ArticleEnSolde b ("Pantalon de Pierre", 10., 20);
	// cout << b.toString() << '\n';

	Article a1("Parapluie", 12);
	cout << a1.toString() << endl;
	ArticleEnSolde a2("Botte", 12, 5);
	cout << a2.toString() << endl;
	ArticleEnSolde a3(a1);
	cout << a3.toString() << endl;
	ArticleEnSolde a4 = a1;
	cout << a4.toString() << endl;
	return 0;
}
