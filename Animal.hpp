#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
public:
    std::string name;
    double temp;
    double breath;
    double heart;

    virtual bool check_health() = 0;

    virtual ~Animal() = default;
protected:
    Animal(std::string name, double temp, double breath, double heart);
};

#endif /* ANIMAL_H */