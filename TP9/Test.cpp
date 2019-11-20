#include "Pile.hpp"

int main(int argc, char const *argv[]) {

	Pile<int> pile(16);

	pile.push(3);
	pile.push(1);
	pile.push(4);
	pile.push(1);
	pile.push(5);
	pile.pop();
	pile.push(9);
	pile.push(2);

	pile.print();

	Pile<char> pile2(16);
	pile2.push('c');
	pile2.push('h');
	pile2.pop();
	pile2.push('a');
	pile2.push('r');

	pile2.print();
	return 0;
}
