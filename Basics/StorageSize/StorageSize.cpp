//
// Created by jason on 16/07/2024.
//

#include <iostream>
#include <typeinfo>

template<typename T>
void PrintSizeOfType(){
    std::cout<<typeid(T).name() <<" : "<<sizeof(T)<<std::endl;

}

int main(){

    PrintSizeOfType<char>();
    PrintSizeOfType<bool>();//The value of sizeof(bool) is implementation defined and might differ from 1.
    PrintSizeOfType<short>();
    PrintSizeOfType<int>();
    PrintSizeOfType<float>();
    PrintSizeOfType<double>();
    PrintSizeOfType<long double>();

    return 0;
}