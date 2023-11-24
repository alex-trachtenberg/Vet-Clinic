#include <iostream>

#include "Vet.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Cow.hpp"

int main() {
    using namespace std;
    cout << "program start" << endl;
    Vet& vet = Vet::get_instance();

    //adding healthy dog
    vet.add_animal(new Dog("dog1", 38.5, 20, 80, true));
    //adding not healthy dog (temp too high)
    vet.add_animal(new Dog("dog2", 40.0, 20, 80, true));
    //adding not healthy dog (heart rate too slow for a small breed)
    vet.add_animal(new Dog("dog3", 38.5, 20, 80, false));
    //adding healthy cat
    vet.add_animal(new Cat("cat1", 38.7, 30, 130));
    //adding not healthy cat (breath is too high)
    vet.add_animal(new Cat("cat2", 38.7, 42, 130));
    //adding healthy cow
    vet.add_animal(new Cow("cow1", 39.0, 37, 70, 32));
    //adding not healthy cow (milk production too low)
    vet.add_animal(new Cow("cow2", 39.0, 37, 70, 20));
    
    vet.show_sick();
    //should print: dog2 dog3 cat2 cow2
    vet.show_sick_dogs();
    //should print: dog2 dog3

    return 0;
}