#include "Cat.hpp"

Cat::Cat(std::string name, double temp, double breath, double heart)
    : Animal{name, temp, breath, heart}
{ }

bool Cat::check_health() const {
    return ((38 <= this->temp && this->temp <= 39.2) &&
            (16 <= this->breath && this->breath <= 40) &&
            (120 <= this->heart && this->heart <= 140));
}
