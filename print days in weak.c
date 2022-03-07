#include <stdio.h>
#include<ctype.h>

int main()
{
    int a,b;
    printf("enter the day b/w 1 to 7 in weeks ");
    scanf("%d",&a);
    
    if(a==1){
        printf("monday");
    }
    else if(a==2){
        printf("tuesday");
    }
    else if (a==3){
        printf("wednesday");
    }
    else if (a==4){
        printf("thursday");
    }
    else if (a==5){
        printf("friday");
    }
    else if (a==6){
        printf("saturday");
    }
    else if (a==7){
        printf("sunday");
    }
    else{
        printf("please enter day b/w 1 to 7");
    }
    return 0;
    
}
   
 
