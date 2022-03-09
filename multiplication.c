#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    int mult[10];
    for(int i=0;i<10;i++){
        mult[i]=n*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d * %d = %d\n",n,i+1,mult[i]);
    }


}