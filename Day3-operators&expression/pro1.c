#include <stdio.h>

int main(){

    int x , y, z;

    printf("Enter the value of x:");

    scanf("%d", &x);

    printf("Enter the value of y:");

    scanf("%d", &y);

    z = ((x * x) + (2 * x * y) + (y * y));

    printf("answer is: %d ", z);


}