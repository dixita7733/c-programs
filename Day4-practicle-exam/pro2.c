#include <stdio.h>

int main(){

    float a , b , c;

    printf("Enter the value of angle 1 for a: ");

    scanf("%f",&a);

    printf("Enter the value of angle 2 for b: ");

    scanf("%f",&b);

    c = 180 - ( a + b );

    printf("angle 3 value for c is: %f",c);
}

