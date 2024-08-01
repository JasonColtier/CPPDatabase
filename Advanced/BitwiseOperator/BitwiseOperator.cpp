#include <iostream>

int main(){

    int number = 0b10101010;
    int mask = 0b00001111;
    int result = number & mask; // result is 0b00001010, so 10 AND
    std::cout<<result<<std::endl;

    int num2 = 5;//101
    int num3 = 6;//110
    int num4 = num2 | num3; //111 = 7 OR
    std::cout<<num4<<std::endl;

    int num5 = 5^6;//011 XOR
    std::cout<<num5<<std::endl;

    int num6 = ~5;//010 NOT
    std::cout<<num6<<std::endl;


    int number2 = 5; // binary: 0101
    int left_shifted = number2 << 1; // result is 10 (binary: 1010)
    int right_shifted = number2 >> 1; // result is 2 (binary: 0010)
}