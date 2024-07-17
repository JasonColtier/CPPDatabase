#include <iostream>

constexpr int array_size = 5;
int array[array_size];

constexpr int getValue(int x) { return x * 2; }

int main() {

    switch (getValue(3)) {
        case 6:
            std::cout << "6 value !";
            break;
        default:
            // do something else
            break;
    }
}
