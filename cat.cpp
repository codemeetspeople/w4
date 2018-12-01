#include <iostream>

class Eaters {
    public:
        virtual void eat() = 0;
};

class Animal : public Eaters {
    protected:
        const char* name;

    public:
        Animal() {}
        Animal(const char* name): name(name) {}
        virtual ~Animal() {}
};

class Dog : virtual public Animal {
    public:
        Dog(const char* name="Dog"): Animal(name) {};
        virtual ~Dog() {};

        const char* getName() {
            return this->name;
        }

        virtual void eat() {
            std::cout << this->name << " eats meat." << std::endl;
        }

        void bark() {
            std::cout << this->name << " say \"woof\"..." << std::endl;
        }
};

class Cat : virtual public Animal {
    public:
        Cat(const char* name="Cat"): Animal(name) {};
        virtual ~Cat() {};

        const char* getName() {
            return this->name;
        }

        virtual void eat() {
            std::cout << this->name << " eats fish." << std::endl;
        }

        virtual void meow() {
            std::cout << this->name << " say \"meow\"..." << std::endl;
        }
};

class CatDog : public Cat, public Dog {
    public:
        CatDog(const char* name="CatDog") : Animal(name) {}
        virtual ~CatDog() {};

        virtual void eat() {
            std::cout << this->name << " eats fish and meat." << std::endl;
        }
};


class Cheshire: public Cat {
    public:
        Cheshire(const char* name="Cheshire"): Cat(name) {};
        virtual ~Cheshire() {};

        virtual void meow() final {
            std::cout << this->name << " say \"Hello!\"..." << std::endl;
        }
};


void playWithCat(Cat* cat) {
    cat->meow();
}

void feedEater(Eaters* eater) {
    eater->eat();
}

int main() {
    Cat* cat = new Cat();
    Dog* dog = new Dog();
    CatDog* cd = new CatDog();

    // cd->meow();
    // cd->bark();
    // cd->Cat::eat();
    // cd->Dog::eat();
    // cd->eat();

    feedEater(cd);

    return 0;
}