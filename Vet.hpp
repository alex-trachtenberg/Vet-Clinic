#ifndef VET_H
#define VET_H

#include <vector>

#include "Animal.hpp"

class Vet {
private:
    std::vector<Animal *> animals;

    Vet();    

public:
    static Vet& get_instance();
    Vet (const Vet&) = delete;
    Vet& operator =(const Vet&) = delete;
    ~Vet();
    void add_animal(Animal * &&);
    void show_sick();
    void show_sick_dogs();    
};

#endif /* VET_H */