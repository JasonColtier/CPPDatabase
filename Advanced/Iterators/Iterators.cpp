#include <vector>
#include <iostream>

int main(){

    std::vector vec{1,5,8,9};

    for (auto i = vec.begin(); i != vec.end(); ++i) {
        std::cout<<*i<<std::endl;
    };

}