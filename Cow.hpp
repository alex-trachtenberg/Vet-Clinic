#ifndef E272E8FC_4599_40C9_A4DA_80FE266103F0
#define E272E8FC_4599_40C9_A4DA_80FE266103F0

#include "Animal.hpp"

class Cow : public Animal
{
public:
    double milk;

    Cow(std::string, double, double, double, double);
    bool check_health() const override;
};

#endif /* E272E8FC_4599_40C9_A4DA_80FE266103F0 */
