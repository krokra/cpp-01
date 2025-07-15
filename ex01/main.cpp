#include "Zombie.hpp"

int main() {
	Zombie* horde = zombieHorde(10, "zombzomb");
	freeHorde(horde);
	return 0;
}