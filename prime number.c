#include<stdio.h>


int main(){
    int a=4,c=0,i=1;
    
    while(i<=a){
        if(a%i==0){
            c=c+1;
            i++;
        }
    }
    if(c==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}