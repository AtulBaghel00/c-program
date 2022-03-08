#include <stdio.h>
#include <math.h>


int main(){
    int n,a,b,c;
    printf("enter the number less than 999 ");
    scanf("%d",&n);
    while(n<=999){
        a=n%10;
        b=n%100;
        b=(b-a)/10;
        c=n/100;
        if((pow(a,3)+pow(b,3)+pow(c,3))==n)
            printf("armstrong number");
            
                
        else{
             printf("not armstrong");
             
        }
        break;
    }
     
   
    return 0;
    
    
}
     
  
