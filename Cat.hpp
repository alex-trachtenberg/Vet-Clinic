#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat(std::string, double, double, double);
    bool check_health() override;
};


#endif /* CAT_H */