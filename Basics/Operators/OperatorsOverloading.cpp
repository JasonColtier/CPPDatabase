#include <iostream>

class Foo {
    int m_private = 0;


public:

    Foo(int val) : m_private(val) {}

    Foo operator+(const Foo &foo2) {
        return Foo{m_private + foo2.m_private};
    };

    //the std::ostream is usually implemented as a friend function
    friend std::ostream &operator<<(std::ostream &out, const Foo &foo);

};

std::ostream &operator<<(std::ostream &out, const Foo &foo) {
    return out << foo.m_private;
};


int main() {

    Foo foo(10);
    Foo foo2(15);

    Foo foo3 = foo + foo2;

    std::cout << foo3 << std::endl;


    return 0;
}