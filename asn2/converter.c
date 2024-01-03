// CS2211a 2023, Section 1
// Assignment 2
// Salim Terzout Yettou
// 251214366
// sterzout
// October 6, 2023
#include <stdio.h>
int celsiusToFarenheit() {
    char booleanInfiniteTrue = 'true';
    while (booleanInfiniteTrue) {
        //infinite loop until we reach a return statement
        char CorF;
        float CorFNumber;
        printf("C for conversion from Celsius to Fahrenheit\n"
               "F for conversion from Fahrenheit to Celsius\n"
               "For any other character, repeat this case: ");scanf(" %c", &CorF);
               //loop again until valid entry
        if (CorF == 'C' || CorF == 'c') {
            printf("Degrees Number: "); scanf(" %f", &CorFNumber);
            float convertedNumber1 = (CorFNumber * 9.0 / 5.0) + 32.0;
            return printf("Your degrees from Celsius to Farenheit is %.2f F\n", convertedNumber1);
            //returns Celsius to Farenheit if a valid float entry is given
        } else if (CorF == 'F' || CorF == 'f') {
            printf("Degrees Number: "); scanf(" %f", &CorFNumber);
            float convertedNumber2 = (CorFNumber - 32.0) * 5.0 / 9.0;
            return printf("Your degrees from Farenheit to Celsius is %.2f C\n", convertedNumber2);
            //returns a statement based on c or f if a valid float entry is given
        }
    }
}
int centimeterToInch(){
    char booleanInfiniteTrue = 'true';
    while (booleanInfiniteTrue) {
        //infinite loop until we reach a return statement
        char CorI;
        float CorINumber;
        printf("C for conversion from Centimeters to Inches\n"
               "I for conversion from Inches to Centimeters\n"
               "For any other character, repeat this case: "); scanf(" %c", &CorI);
               // loops until valid entry
        if (CorI == 'C' || CorI == 'c') {
            printf("Length Number: "); scanf(" %f", &CorINumber);
            float convertedNumber1 = CorINumber / 2.54;
            return printf("Your length from Centimeters to Inches is %.2f inches\n", convertedNumber1);
        } else if (CorI == 'I' || CorI == 'i') {
            printf("Length Number: "); scanf(" %f", &CorINumber);
            float convertedNumber2 = CorINumber * 2.54;
            return printf("Your length from Inches to Centimeters is %.2f cm\n", convertedNumber2);
        //returns conversion statement based on c or i
        }
    }
}
int kilometerToMile(){
    char booleanInfiniteTrue = 'true';
    while (booleanInfiniteTrue) {
        char KorM;
        float KorMNumber;
        printf("K for conversion from Kilometers to Miles\n"
               "M for conversion from Miles to Kilometers\n"
               "For any other character, repeat this case: "); scanf(" %c", &KorM);
               //loop until valid entry
        if (KorM == 'K' || KorM == 'k') {
            printf("Kilometers Number: "); scanf(" %f", &KorMNumber);
            float convertedNumber1 = KorMNumber * 0.621371;
            return printf("Your conversion from Kilometers to Miles is %.2f miles\n", convertedNumber1);
        } else if (KorM == 'M' || KorM == 'm') {
            printf("Miles Number: "); scanf(" %f", &KorMNumber);
            float convertedNumber2 = KorMNumber * 1.60934;
            return printf("Your conversion from Miles to Kilometers is %.2f km\n", convertedNumber2);
        //prints return statement conversion based on k or m
        }
    }
}
int gallonsToLiters(){
    char booleanInfiniteTrue = 'true';
    while (booleanInfiniteTrue) {
        char GorL;
        float GorLNumber;
        printf("G for conversion from Gallons to Liters\n"
               "L for conversion from Liters to Gallons\n"
               "For any other character, repeat this case: "); scanf(" %c", &GorL);
               //infinite loop until valid entry
        if (GorL == 'G' || GorL == 'g') {
            printf("Gallons Number: "); scanf(" %f", &GorLNumber);
            float convertedNumber1 = GorLNumber * 3.785;
            return printf("Your conversion from Gallons to Liters is %.2f liters\n", convertedNumber1);
        } else if (GorL == 'L' || GorL == 'l') {
            printf("Liters Number: "); scanf(" %f", &GorLNumber);
            float convertedNumber2 = GorLNumber / 3.785;
            return printf("Your conversion from Liters to Gallons is %.2f gallons\n", convertedNumber2);
        //prints a return statement based on l or g
        }
    }

}
int main() {
    char userInput;
    while(!0) {

        printf("1 for conversion between Celsius and Fahrenheit \n");
        printf("2 for conversion between Centimetre and Inch\n");
        printf("3 for conversion between Kilometer and Mile\n");
        printf("4 for conversion between Gallon and Liter\n");
        printf("0 for quit\n");
        printf("Please Enter A Integer: "); scanf(" %c", &userInput);
        //infinite loop until valid entry and based on the entry we enter the if statement and call one of the
        //functions based on the numbers

        if (userInput == '1') {
            celsiusToFarenheit();
        }
        if (userInput =='2'){
            centimeterToInch();

        }
        if (userInput =='3'){
            kilometerToMile();

        }
        if (userInput =='4'){
            gallonsToLiters();

        }
        if (userInput =='0'){
            return 0;
            // if statements for all possible entries of 0-4

        }
    }
}
