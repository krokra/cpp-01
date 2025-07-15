#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie *obj = newZombie(name);
	obj->announce();
	delete obj;
}