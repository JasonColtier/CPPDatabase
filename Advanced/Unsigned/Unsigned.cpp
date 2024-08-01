#include <iostream>

int main(){

    int signedVar = -1;
    unsigned int unsignedVar = 1;
    if (signedVar < unsignedVar) {  // This will not behave as expected.
        // ...
    }

    std::cout<<"unsigned value converted : "<<static_cast<unsigned int>(signedVar)<<std::endl;

    return 0;
}