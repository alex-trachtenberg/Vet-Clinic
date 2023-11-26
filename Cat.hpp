#ifndef BA2A2D10_AC3F_4DEA_9F30_7FD34A184706
#define BA2A2D10_AC3F_4DEA_9F30_7FD34A184706

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat(std::string, double, double, double);
    bool check_health() const override;
};

#endif /* BA2A2D10_AC3F_4DEA_9F30_7FD34A184706 */
