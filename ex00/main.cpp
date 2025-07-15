#include "Zombie.hpp"

int main() {
	randomChump("Z:randomChump");
	Zombie* obj = newZombie("Z:newZombie");
	obj->announce();
	delete obj;
	return 0;
}