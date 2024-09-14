//
// Created by jason on 14/09/2024.
//

#include <iostream>


int FindNthOfFibonacci(int n){

    int fibonacciResult = 0;
    int previousNumber = 1;

    for (int i = 0; i < n; i++) {
        int tmp = fibonacciResult;
        fibonacciResult = fibonacciResult+previousNumber;
        previousNumber = tmp;
    }
    return fibonacciResult;
}

int main(){


    std::cout<<FindNthOfFibonacci(13);

    return 0;
}