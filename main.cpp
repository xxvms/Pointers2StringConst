/*
 * String defined using array and pointer notation
 * this is C type string
 */
#include <iostream>

int main() {

    char stri1[] = "Defined as an array";
    char* stri2 = "Defines as a pointer";

    std::cout << stri1 << std::endl; // display both strings
    std::cout << stri2 << std::endl;

    //stri1++; // this can't do as its CONSTANT
    stri2++; // this is OK string 2 is not a constant
    std::cout << stri2 << std::endl; // as pointer moves 1 char we are losing first character!!!

    system("pause");
    return 0;
}