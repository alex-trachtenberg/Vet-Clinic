#include "Dog.hpp"

Dog::Dog(std::string name, double temp, double breath, double heart, bool is_large)
    : Animal{name, temp, breath, heart},
      is_large{is_large}
{ }

bool Dog::check_health()
{
    return ((38 <= this->temp && this->temp <= 39.2) &&
            (10 <= this->breath && this->breath <= 35) &&
            ((this->is_large && 60 <= this->heart && this->heart <= 100) ||
             (!(this->is_large) && 100 <= this->heart && this->heart <= 140)));
}
