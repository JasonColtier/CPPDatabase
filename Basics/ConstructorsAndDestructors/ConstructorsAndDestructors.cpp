//
// Created by jason on 19/07/2024.
//
#include "iostream"

class Foo {

    const int MyConstInt;


public:

    explicit Foo(int constInt) : MyConstInt(constInt) {}
    explicit Foo(double constInt) : MyConstInt(constInt) {}


    void Print() {
        std::cout << MyConstInt << std::endl;
    }

};


int main() {


    Foo foo{25};
    foo.Print();

    float test = 21.01f;
    Foo foo2{test};
    foo2.Print();

    return 0;
}