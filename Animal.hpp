#ifndef D2A02C69_8937_4D91_98D9_CE86AD6AFF8E
#define D2A02C69_8937_4D91_98D9_CE86AD6AFF8E

#include <string>

class Animal {
public:
    std::string name;
    double temp;
    double breath;
    double heart;

    virtual bool check_health() const = 0;

    virtual ~Animal() = default;
protected:
    Animal(std::string name, double temp, double breath, double heart);
};

#endif /* D2A02C69_8937_4D91_98D9_CE86AD6AFF8E */
