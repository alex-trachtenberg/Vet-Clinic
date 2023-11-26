#ifndef BFC873B1_1705_4AAF_BCEE_7B2B367C0D82
#define BFC873B1_1705_4AAF_BCEE_7B2B367C0D82

#include "Animal.hpp"

class Dog : public Animal
{
public:
    bool is_large;

    Dog(std::string, double, double, double, bool);
    bool check_health() const override;
};

#endif /* BFC873B1_1705_4AAF_BCEE_7B2B367C0D82 */
