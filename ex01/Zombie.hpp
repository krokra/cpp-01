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
Zombie*	zombieHorde(int N, std::string name);
void	freeHorde(Zombie* horde);
#endif
