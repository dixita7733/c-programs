#include <stdio.h>

int main(){

    int x , y, z;

    printf("Enter the value of x:");

    scanf("%d", &x);

    printf("Enter the value of y:");

    scanf("%d", &y);
    
    //formula  -> (x + y3)


    z   =  ((x * x * x) + (3 * x *  x * y) + (3 * x *  y * y) + (y * y * y) );


    printf("answer is: %d\n", z);


}