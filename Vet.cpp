#include <iostream>

#include "Vet.hpp"
#include "Dog.hpp"

Vet::Vet()
    : animals{}
{ }

Vet& Vet::get_instance() {
    static Vet instance{};
    return instance;
}

Vet::~Vet() {
    for(std::size_t i = 0; i < this->animals.size(); ++i)
        delete animals[i];
}

void Vet::add_animal(Animal * &&animal_patient) {
    this->animals.push_back(animal_patient);
}

void Vet::show_sick() {
    for (Animal *patient: this->animals) {
        if (patient->check_health() == false)
            std::cout << patient->name << " ";
    }
    std::cout << std::endl;
}

void Vet::show_sick_dogs() {
    for (Animal *patient: this->animals) {
        if (dynamic_cast<Dog *>(patient) != nullptr) {
            if (patient->check_health() == false)
                std::cout << patient->name << " ";
        }
    }
    std::cout << std::endl;
}
