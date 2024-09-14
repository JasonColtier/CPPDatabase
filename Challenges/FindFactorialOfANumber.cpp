//
// Created by jason on 14/09/2024.
//

#include <iostream>

/*
 *
 * The factorial of a number nn, denoted as n!n!, is the product of all positive integers less than or equal to nn.

Mathematically:
n!=n×(n−1)×(n−2)×⋯×1

 *
 *
 */

int FindFactorial(int n){

    int factorial = 1;
    for (int i = n; i != 0; --i) {
           factorial *= i;

    }
    return factorial;
}

int FindFactorialRec(int n){

    if(n != 0)
        return n*FindFactorialRec(n-1);
    else{
        return 1;
    }
}

int main(){


    std::cout<<FindFactorial(5)<<std::endl;
    std::cout<<FindFactorialRec(5)<<std::endl;

    return 0;
}