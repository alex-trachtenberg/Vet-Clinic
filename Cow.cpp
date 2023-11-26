#include "Cow.hpp"

Cow::Cow(std::string name, double temp, double breath, double heart, double liters)
    : Animal{name, temp, breath, heart},
      milk{liters}
{ }

bool Cow::check_health() const {
    return ((38.5 <= this->temp && this->temp <= 39.5) &&
            (26 <= this->breath && this->breath <= 50) &&
            (48 <= this->heart && this->heart <= 84) &&
            (30 <= milk));
}
