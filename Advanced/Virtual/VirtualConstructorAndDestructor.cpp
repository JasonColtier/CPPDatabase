//
// Created by User on 17/07/2024.
//

#include <iostream>
using namespace std;

class A
{
public:
    A() { printf( "A: ctor\n" ); }
    virtual ~A() { printf( "A: dtor\n" ); }
    virtual void DoIt() { printf( "a: DoIt\n" ); }
};

class B: public A
{
public:
    B() { printf( "B: ctor\n" ); }
    virtual void DoIt() { printf( "B: DoIt\n" ); }
};

class C: public B
{
public:
    virtual void DoIt() {
        A::DoIt();
        printf( "C: DoIt\n" );
    }

    virtual ~C() { printf( "C: dtor\n");}
};

void CplusplusTest()
{
    B* ptrl = new B();
    printf("\n");
    ptrl->DoIt();
    printf("\n");
    B* ptr2 = new C();
    printf("\n");
    ptr2->DoIt();
    printf("\n");

    delete ptrl;
    printf("\n");
    delete ptr2;
}


int main() {
    CplusplusTest();//what is the output ?
}





















//A ctor
//B ctor

//B doit

//A ctor
//B ctor

//adoit
//Cdoit

//adtor

//cdtor
//actor