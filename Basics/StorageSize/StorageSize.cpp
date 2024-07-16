//
// Created by jason on 16/07/2024.
//

#include <iostream>
#include <typeinfo>
#include "limits"

//https://en.cppreference.com/w/cpp/language/types
//https://en.cppreference.com/w/cpp/types/numeric_limits

template<typename T>
void PrintSizeOfType() {
    std::cout << typeid(T).name() << " : " << sizeof(T) << " limit is : " << std::numeric_limits<T>::min() << "->"
              << std::numeric_limits<T>::max() << std::endl;
}

struct BitFieldStruct {
    unsigned int flag1 : 1; // 1 bit
    unsigned int flag2 : 1; // 1 bit
    unsigned int value : 4; // 4 bits
    unsigned int : 0;       // Force alignment to next boundary : start of a new byte
    unsigned int data : 8;  // 8 bits
};

int main() {

    //sizeof outputs the resylt in bytes (octets)
    //1 byte = 8 bits

    PrintSizeOfType<char>();//smalest possible size
    PrintSizeOfType<bool>();//The value of sizeof(bool) is implementation defined and might differ from 1.
    PrintSizeOfType<short>();
    PrintSizeOfType<wchar_t>();
    PrintSizeOfType<int>();
    PrintSizeOfType<float>();
    PrintSizeOfType<double>();
    PrintSizeOfType<long long int>();
    PrintSizeOfType<long double>();


    std::cout<<"\n\n SizeOf BitFieldStruct : "<<sizeof(BitFieldStruct)<<std::endl;

    return 0;
}