#include <iostream>
#include <iomanip>

int main(){

    //see example in unsigned lesson

    bool b = false;
    int i = b;//promotion

    float f = 1.9f;//numeric conversion, everything after the , is lost
    std::cout<<std::setprecision(3);
    std::cout<<f<<std::endl;
    std::cout<<static_cast<int>(f)<<std::endl;

    return 0;
}