#ifndef D0C0886F_ADD6_4528_AB3C_7D2D242AF53B
#define D0C0886F_ADD6_4528_AB3C_7D2D242AF53B

#include <vector>

#include "Animal.hpp"

class Vet {
private:
    std::vector<Animal *> animals;

    Vet();
    ~Vet();

public:
    static Vet& get_instance();
    Vet (const Vet&) = delete;             // Prevents access (using delete) to the rule of 
    Vet& operator =(const Vet&) = delete;  // 5, constructors and operators.
    Vet (Vet&&) = delete;
    Vet& operator =(Vet&&) = delete;

    void add_animal(Animal * &&);
    void show_sick() const;
    void show_sick_dogs() const;    
};

#endif /* D0C0886F_ADD6_4528_AB3C_7D2D242AF53B */
