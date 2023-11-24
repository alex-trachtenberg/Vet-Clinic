#ifndef COW_H
#define COW_H

#include "Animal.hpp"

class Cow : public Animal
{
public:
    double milk;

    Cow(std::string, double, double, double, double);
    bool check_health() override;
};


#endif /* COW_H */