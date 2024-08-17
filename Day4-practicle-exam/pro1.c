// Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
// formula: °F=(°C×59)+32

#include <stdio.h>

int main(){

    float f , c;

    printf("Enter the value of c: ");

    scanf("%f",&c);

    f = (c * 9/5) + 32;

    printf("The Celsius to Fahrenheit value is: %f", f);
}