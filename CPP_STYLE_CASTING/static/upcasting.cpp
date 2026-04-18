#include<iostream>

class Animal {
    public:
        void speak() {
            std::cout << "Animal sound\n";
    }
};

class Dog : public Animal {
    public:
        void speak() {
            std::cout << "Dog sound\n";
    }
};

int main(){
    Dog d;
    // Upcasting (safe)
    Animal* a = static_cast<Animal*>(&d);
    a->speak();//output : Animal sound

    // Animal a = static_cast<Animal>(d);
    // a.speak();
}