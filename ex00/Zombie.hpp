#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void announce(void) {
			std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
		};
		void setName(std::string name);

};
void randomChump(std::string name);
Zombie *newZombie(std::string name);
#endif