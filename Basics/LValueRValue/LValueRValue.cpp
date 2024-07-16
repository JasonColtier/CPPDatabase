//
// Created by User on 16/07/2024.
//

#ifndef CPP_LEARNING_LVALUERVALUE_CPP
#define CPP_LEARNING_LVALUERVALUE_CPP
#include <iostream>
#include "RValueReference.h"
#include "FuntionReturnLValue.h"

int main(){

    int x = 5;//x is an LValue 5 is an RValue
    int y = x;//x is still an Lvalue


    int a = 10;//10 rvalue
    int b = a;
    int c = a + b;//a+b rvalue

    int j = 10;
    int* p = &j;//&j is an rvalue, it represents a temporary value resulting of the "address of" operator

    int&& rref = 5;
    rref = 10;  // Is 'rref' an lvalue or rvalue?
    printf("%i\n",rref);

    DemoRvalueRef();

    *ReturnLValue() = 3;
}

#endif //CPP_LEARNING_LVALUERVALUE_CPP
