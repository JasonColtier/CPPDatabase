//
// Created by jason on 14/09/2024.
//

#include <iostream>
#include <string>
#include <string_view>

int LengthOfString(const std::string_view & string){
    int size = 0;
    for (auto i = string.cbegin(); i != string.cend(); ++i) {
        size++;
    }

    return size;
}

int main(){


    std::cout<<LengthOfString("test de string");




    return 0;
}