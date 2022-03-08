#include <stdio.h>

int main()
{
    int x,y;
    printf("enter the time work hours of 10 workers ");
    scanf("%d",&x);
    if(x<=40){
        printf("no overtime");
    }
    while(x>40){
        y=10*12*(x-40);
        printf("the payment of overtime work of 10 worker is %d",y);
        break;
        
    }
     
    
    return 0;
}
