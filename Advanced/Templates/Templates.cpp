#include <iostream>

//fonction templatée
template<typename T>
T Max(const T &a, const T &b) {
    return (a > b) ? a : b;
}

//fonction template spétialisée
template<>
int Max<int>(const int &a, const int &b) {
    std::cout << "template int spe called " << std::endl;
    return (a > b) ? a : b;
}


//templated class
template<typename T>
class TemplatedClass {

    T memeber;

    T templatedReturnFunction() {
        return memeber;
    }

};


class Foo {
    int privateInt = 12;

public:
    Foo(int privateInt) : privateInt(privateInt) {}

    bool operator>(const Foo &foo) const {
        return (privateInt > foo.privateInt);
    }

    bool operator<(const Foo &foo) const {
        return !(foo > *this);
    }

    friend std::ostream &operator<<(std::ostream &out, const Foo &foo);
};

std::ostream &operator<<(std::ostream &out, const Foo &foo) {
    return out << foo.privateInt;
}


int main() {

    int i = 10;
    int j = 15;

    std::cout << "max : " << Max(i, j) << std::endl;

    Foo foo(1);
    Foo foo2(3);
    std::cout << "test foo : " << foo << std::endl;

    std::cout << "max : " << Max(foo2, foo) << std::endl;


    return 0;
}