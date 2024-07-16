//
// Created by jason on 16/07/2024.
//
#include "vector"
#include <iostream>

int main(){

    std::vector<int> myVector {1,5,8,9,12,150};

    auto it = myVector.begin();

    for(int i =0;i<myVector.size();i++){
        std::cout<<*it++<<std::endl;
    }

    return 0;
}