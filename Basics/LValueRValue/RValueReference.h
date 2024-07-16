//
// Created by User on 16/07/2024.
//
#ifndef RValueRef
#define RValueRef
#include <iostream>
#include <utility> // for std::forward

// A simple function that can take an lvalue reference
static void process(int& x) {
    std::cout << "Lvalue reference called with " << x << std::endl;
}

// A simple function that can take an rvalue reference
static void process(int&& x) {
    std::cout << "Rvalue reference called with " << x << std::endl;
}

// A wrapper template function that forwards its argument
template <typename T>
static void wrapper(T&& arg) {
    // Forward arg to process, preserving its value category
    process(std::forward<T>(arg));
}

static void DemoRvalueRef() {
    printf("\n-----------\n%s\n---------\n",__func__ );

    int a = 10;
    wrapper(a);      // Calls process(int&), as a is an lvalue
    wrapper(20);     // Calls process(int&&), as 20 is an rvalue
    wrapper(std::move(a)); // Calls process(int&&), as std::move(a) is an rvalue

}

#endif