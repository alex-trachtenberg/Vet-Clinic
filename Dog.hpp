#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
public:
    bool is_large;

    Dog(std::string, double, double, double, bool);
    bool check_health() override;
};


#endif /* DOG_H */