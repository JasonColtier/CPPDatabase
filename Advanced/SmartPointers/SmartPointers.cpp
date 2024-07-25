

#include <memory>
#include <iostream>

class Foo {

    std::string OwningPointerName;

public :
    Foo(std::string_view OwningPtrName) : OwningPointerName(OwningPtrName) {
        std::cout << "Foo constructor from ptr " << OwningPointerName << std::endl;
    }

    ~Foo() {
        std::cout << "Foo destructor for ptr " << OwningPointerName << std::endl;
    }


};

template<typename T>
void PrintUsageCount(std::shared_ptr<T> &sharedPtr) {
    printf("shared use count : %ld \n", sharedPtr.use_count());
}


int main() {

    //classic pointer initialisation
    Foo *newFooPtr = new Foo("new"); //calling foo constructor
    //will never call destructor without a delete, here is a memory leak

    //unique ptr, calling constructor
    std::unique_ptr uniqueFooPtr = std::make_unique<Foo>("unique ptr");

    std::weak_ptr<Foo> weakFooPtr;

    {//manual scope
        std::shared_ptr sharedFooPtr = std::make_shared<Foo>("shared ptr");//reference 1

        weakFooPtr = sharedFooPtr;//weak reference doesnt count toward object usage count

        {
            std::shared_ptr shared2 = sharedFooPtr; // ref 2
            PrintUsageCount(sharedFooPtr);

            std::shared_ptr shared3 = sharedFooPtr; // ref 3
            PrintUsageCount(sharedFooPtr);
        } // ref 2 and 3 goes out of scope

        PrintUsageCount(sharedFooPtr);
    }//ref 1 goes out of scope

    std::cout<<"no more shared prt"<<std::endl;

    if(weakFooPtr.expired()){
        std::cout<<"weak ptr points to an expired shared ptr"<<std::endl;
    }

    //unique ptr goes out of scope and calls destructor
    return 0;
}