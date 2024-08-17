#include <stdio.h>

int main(){

    float base_salary , hra , ta , da, gross_salary;

    printf("Enter the base salary: ");

    scanf("%f",&base_salary);

    printf("Enter the hra value: ");

    scanf("%f",&hra);

    printf("Enter the ta value: ");

    scanf("%f",&ta);

    printf("Enter the da value: ");

    scanf("%f",&da);

    hra = (hra/100) * base_salary;
    ta  = (ta/100) * base_salary;
    da  = (da/100) * base_salary;

    gross_salary = hra + ta + da;

    printf("gross salary is: %.2f\n", gross_salary);
}