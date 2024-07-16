//
// Created by jason on 16/07/2024.
//

#include <iostream>

struct A {
    virtual void foo (int a = 1) {
        std::cout << "A" << a;
    }
};

struct B : A {
    virtual void foo (int a = 2) {
        std::cout << "B" << a;
    }
};

int main () {
    A *b = new B;
    b->foo();
    delete b;
}

//A virtual function call (§ 13.3) uses the default arguments in the declaration of the virtual function determined by the static type of the pointer or reference denoting the object.
// An overriding function in a derived class does not acquire default arguments from the function it overrides.