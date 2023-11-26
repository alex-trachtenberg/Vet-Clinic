# Vet-Clinic

Build a program to manage the health of animals based on the attached UML diagram.

the Animal class
constructor: Animal(string name, double temp, double breath, double heart)
The animal class is an abstract class.
its check_health method returns true if the animal is healthy and returns false if it is not.
Animal has four fields:
name (string) - the name of the animal.
temp (double) - the temperature of the animal in celsius.
breath (double) - respiration rate - the amount of breaths per minute.
heart (double) - heart rate - the amount of beats per minute.

The Dog class
constructor: Dog(string name, double temp, double breath, double heart, bool is_large)
inherits from Animal, adds an is_large field (bool). if true the dog is of a large breed, if false the dog is of a small breed. implements check_health (details below).

The Cat class
constructor: Cat(string name, double temp, double breath, double heart)
inherits from Animal. implements check_health (details below).

The Cow class
constructor: Cow(string name, double temp, double breath, double heart, double liters)
inherits from Animal, adds milk field (double). represents the amount of liters per day the cow produces. implements check_health (details below).

check_health()
The check_health override for each class will be based on the attached chart. If an animal has any field outside the mentioned ranges, it is considered unhealthy (check health will return false) the ranges are inclusive (i.e 10-35 means from 10 to 35 including 10 and 35).

The Vet class
Will represent a collection of animal pointers inside a vector. The lifetime of the animal objects will depend on the lifetime of the vet class (when the Vet class is destroyed, its destructor will first delete all the animal objects).
You may choose to use std::unique_ptr to handle the animal pointers for this task in which case the animals vector will be of type:
std::vector< std::unique_ptr<Animal> > animals;
However: the signature for add_animal will remain the same:
void add_animal(Animal * &&);
The Vet class will be a singleton based on a static-local instance created inside the
get_instance method. Make sure to prevent-access for the default constructor and destructor. Additionally make sure to prevent access or preferably delete, the rule of 5 constructors and operators.

Vet Methods:
get_instance - a static method with a static local instance of Vet. will return a reference to that instance.
add_animal - the method add_animal will receive an rvalue of a pointer of a dynamically
allocated animal (dog/cat/cow) and will add it to the vector.
show_sick - will print to cout the name of each animal that is sick (meaning its check_health returned false).
show_sick_dogs - will print to cout the name of each Dog instance that is sick (ignoring other animal instances).