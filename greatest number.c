#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("the greatest number is a %d",a);
        
    }
    else{
        printf("the greatest number is b %d",b);
    }

    return 0;
}



#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("the greatest number is a %d",a);
        
    }
    else if(b>a && b>c){
        
        printf("the greatest number is b %d",b);
    }
    else{
        printf("the greatest number is c %d",c);
    }

    return 0;
}
