//
// Created by jason on 14/09/2024.
//

#include <iostream>

int main(){

    int a = 5,b=10,c=2;

    int max = std::max(a,b);
    max = std::max(max,c);

    std::cout<<max;




    return 0;
}