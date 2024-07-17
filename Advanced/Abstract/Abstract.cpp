#include <iostream>

class Animal{
public:
    virtual void MakeNoise() = 0;//this is an abstract function

    virtual ~Animal() = default;
};

class Parrot : public Animal {

public:
    void MakeNoise() override{
        std::cout<<"Hein ??"<<std::endl;
    }

    ~Parrot() = default;
};


class Cow : public Animal {
public:
    void MakeNoise() override{
        std::cout<<"Meuuuuuh"<<std::endl;
    }


};

int main()
{
    Parrot parrot;
    parrot.MakeNoise();

    Animal* animal = new Cow();
    animal->MakeNoise();
}