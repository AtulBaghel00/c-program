#include<stdio.h>
#include<math.h>
int main()
{
    int wage_hr, work_hr;
    printf("enter the salary of worker of an one hr : ");
    scanf("%d",&wage_hr);
    printf("enter the number of working hour in week : ");
    scanf("%d",&work_hr);
    int salary;
    if(work_hr>30)
       printf("the total salary of working hr is %d",(wage_hr*30)+((work_hr-30)*2*work_hr));
    else{
        printf("the total salary of a worker is %d",wage_hr*work_hr);
    }
    return 0;
}