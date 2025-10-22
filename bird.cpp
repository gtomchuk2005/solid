#include <iostream>

class Bird {
public:
    virtual void lay_egg() {
        std::cout << "Egg";
    }
};

class FlyingBird : public Bird {
public:
    virtual void fly() {
        std::cout << "Bird is flying\n";
    };
};

class Ostrich : public Bird {};

class Eagle: public FlyingBird{};

// For demonstration
int main() {
    Eagle eagle;
    Ostrich ostrich;
    
    eagle.lay_egg();
    eagle.fly();

    ostrich.lay_egg();
}
