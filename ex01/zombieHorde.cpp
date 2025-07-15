#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* newHorde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		newHorde[i].setName(name);
		newHorde[i].announce();
	}
	return newHorde;
}

void freeHorde(Zombie* horde) {
	delete[] horde;
}