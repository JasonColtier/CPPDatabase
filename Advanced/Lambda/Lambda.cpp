//
// Created by jason on 25/07/2024.
//

#include <algorithm>
#include <cmath>
#include <iostream>


void absSort(float *floatArray, unsigned int size) {
    std::sort(floatArray, floatArray + size,
              [](float a, float b) {
                  return std::abs(a) < std::abs(b);
              });

}


int main() {

    float myFloats[5]{0.12, -0.8, 0.52, 1.3, -7.4687};
    absSort(myFloats, 5);

    for (auto f: myFloats) {
        std::cout << " " << f << " ";
    }


    //a simple lambda declared
    auto printer{[](){
        std::cout<<"print !"<<std::endl;
    }};

    printer();


    int i = 12;
    auto captureCopy{[=](){
        std::cout<<"i = "<<i<<std::endl;
    }};
    i = 13;//la capture se fait avant le changement!

    captureCopy();

    auto captureRef{[&](){
        i+=5;
    }};
    captureRef();
    std::cout<<i<<std::endl;
}