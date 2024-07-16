//
// Created by jason on 16/07/2024.
//

#include <iostream>

void f(int) { std::cout << 1; }
void f(unsigned) { std::cout << 2; }

int main() {
    f(-2.5); //All conversions are given a rank, and both "double => int" and "double => unsigned int" are of type "floating-integral conversion", which has rank "conversion".
}