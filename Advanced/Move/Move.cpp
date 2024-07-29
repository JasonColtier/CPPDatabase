//
// Created by jason on 29/07/2024.
//

#include <iostream>

class Foo{

    int* privateMemeber;

public:
    Foo(int val):privateMemeber(new int(val)){//constructor
        std::cout<<"new foo with value : "<<*privateMemeber<<std::endl;
    };

    ~Foo(){//destructor
        std::cout<<"destructor"<<std::endl;
        delete privateMemeber;
    }

    Foo(const Foo& foo){//copy constructor
        std::cout<<"copy constructor used"<<std::endl;
        privateMemeber = new int(*foo.privateMemeber);
    }

    Foo(Foo&& foo)  noexcept{//move constructor
        std::cout<<"move constructor used"<<std::endl;
        privateMemeber = foo.privateMemeber;
        foo.privateMemeber = nullptr;
    }

    Foo& operator=(const Foo& foo){//copy operator
        std::cout<<"copy operator"<<std::endl;
        if(&foo == this) return *this;
        delete privateMemeber;
        privateMemeber = new int(*foo.privateMemeber);
        return *this;
    };

    Foo& operator=(Foo&& foo){//move operator
        if(&foo == this) return *this;

        std::cout<<"move operator"<<std::endl;
        delete privateMemeber;
        privateMemeber = foo.privateMemeber;
        foo.privateMemeber = nullptr;
        return *this;
    }



    void Print(){
        if(privateMemeber){
            std::cout<<*privateMemeber<<std::endl;
        }else{
            std::cout<<"null"<<std::endl;
        }
    }


};



int main(){

    Foo foo(5);

    Foo foo2 = foo;

    foo.Print();
    foo2.Print();

    Foo foo3 = std::move(foo2);

    foo3.Print();
    foo2.Print();

    return 0;
}