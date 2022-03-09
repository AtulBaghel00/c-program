#include<stdio.h>
int main()
{
    int salary;
    printf("enter the basic salary of employee : ");
    scanf("%d",&salary);
    float hra= (salary*15)/100;
    float ta= (salary*20)/100;
    float giving_salary= salary-hra-ta;
    printf("the salary get by employee in hands is %f",giving_salary);
    return 0;
}