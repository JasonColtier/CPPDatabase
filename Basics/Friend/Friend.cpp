#include <iostream>

class Bar;

class Foo{
    int m_private;

    void PrivatePrint() const{
        std::cout<<"private print"<<std::endl;
    }

public:
    Foo(int val):m_private(val){}

    //friend access to all the class
    friend class Bar;
};

class Mojo{

public:
    //function declaration
    void TestCaller(const Bar& bar);
};


class Bar{

    void PrivateFunction() const{
        std::cout<<"bar private ! "<<std::endl;
    }

public:
    void Test(const Foo& foo){
        std::cout<<foo.m_private<<std::endl;
        foo.PrivatePrint();
    }

    friend void Mojo::TestCaller(const Bar& bar);
};

//function definition because bar is defined at this point
void Mojo::TestCaller(const Bar &bar) {
    bar.PrivateFunction();
}




int main(){

    Foo foo(5);

    Bar bar;
    bar.Test(foo);

    Mojo mojo;
    mojo.TestCaller(bar);
}