#include <cstdlib>
#include <ctime>
#include <iostream>



using namespace std;

int main(int argc, char const *argv[])
{

	srand(time(nullptr));
	int x { rand() % 100 }, y { rand() % 100 };
	int res, count = 0;

	cout << "Voici les chiffres qui ont été tirés : " << x << " " << y << "\nVeuillez calculer leur somme :"<< endl;
	cin >> res;
	while (res != (x+ y))
	{
		count++;
		cout << "FAUX ! Vous vous êtes trompés " << count << " fois !\n Veuillez recalculer." << endl;
		std::cout << "" << (x+y) << '\n';
		cin.clear();
		cin >> res;
	}
	cout << "Correct ! Il vous a fallu " << count << " essais !" << endl;
	return 0;
}
/* std */
