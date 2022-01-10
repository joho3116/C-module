#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include<string>

class Zombie
{
    std::string _name;

    public:
            Zombie();
            Zombie(std::string);
            void    announce();
            ~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


# endif