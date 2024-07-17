
#include <iostream>
#include <cmath>

int CountDigits(int number){
    int count = 0;
    while (number != 0){
        number /= 10;
        count++;
    }
    return count;
}


int IntegerReverser(int intToReverse){

    int reversedInt = 0;
    bool decimalRemaining = true;

    int numberOfDigits = CountDigits(intToReverse);
    std::cout<<"number of digits : "<<numberOfDigits<<std::endl;

    while (decimalRemaining){
        numberOfDigits--;

        reversedInt += intToReverse % 10 * pow(10,numberOfDigits);
        std::cout<<"reversedInt "<<reversedInt<<std::endl;


        intToReverse /= 10;
        std::cout<<"int to reverse : "<<intToReverse<<std::endl;

        if(intToReverse ==0){
            decimalRemaining = false;
        }
    }


    return reversedInt;

}



int main(){

    int myInt = 123456789;
    int reversedInt = IntegerReverser(myInt);
    std::cout<<"reversedInt : "<<reversedInt<<std::endl;


    return 0;
}