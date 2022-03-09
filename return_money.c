#include<stdio.h>
#include<math.h>
int main()
{
    int apple_cost;
    apple_cost=2*50;
    int mango_cost=1.5*35;
    int potato_cost=2.5*10;
    int tomato_cost=1*15;
    int return_money= 500-mango_cost-apple_cost-potato_cost-tomato_cost;
    printf("the return money is %d",return_money);

    return 0;
}