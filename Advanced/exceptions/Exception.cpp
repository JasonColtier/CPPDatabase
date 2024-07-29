#include <iostream>
#include <string>

//exception handeling in the function
void Test() {
    try {

        throw -1;

    } catch (int) {
        std::cout << "int exception catched !"<<std::endl;
    }
}

void Thrower(){

    throw std::string("error ! ");
}

void NotHandled(){

    throw false;
}

int main() {

    Test();

    try{
        Thrower();
    }catch (std::string){
        std::cerr << "string exception catched !"<<std::endl;
    }

    NotHandled();

    return 0;
}