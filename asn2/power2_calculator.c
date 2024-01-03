// CS2211a 2023, Section 1
// Assignment 2
// Salim Terzout Yettou
// 251214366
// sterzout
// October 6, 2023
#include <stdio.h>
#include <math.h>

unsigned long powerOfTwo(int n){
    //using unsigned long for calculations and return as stated in the instructions
    if (n==0) {
        return pow(2,0);
        //returns 2 to the power 0
    }
    else if (n % 2 == 0){
        unsigned long powDivideTwo = powerOfTwo(n/2);
        return powDivideTwo * powDivideTwo;
        //if even integer use the even integer formula through recursively calling the function
    }
    else if (n % 2 != 0){
        unsigned long powDivideTwo = powerOfTwo((n-1)/2);
        return 2 * powDivideTwo * powDivideTwo;
        //if odd integer use the odd integer formula through recursively calling the function
    }
}
int main() {
    int user_exponent;
    printf("Enter an exponent: "); scanf(" %d", &user_exponent);
    unsigned long result = powerOfTwo(user_exponent);printf("%.0ld\n", result);
    // ask for an input for the exponent, scan it then use this input within our function taking the place of int 'n'
    //print the result

}
