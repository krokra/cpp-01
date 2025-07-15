#include "Zombie.hpp"

void Zombie::setName(std::string name){ 
	this->name = name;
}

Zombie::Zombie() {};

Zombie::~Zombie() {
	std::cout << "Zombie : " << this->name << " has been destroyed\n";
}