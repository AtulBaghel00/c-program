#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr= &arr[0];
    ptr=ptr+2;
    if(ptr==&arr[2]){
        printf("this pointer represent same memory third element");
    }
    else{
        printf("this pointer is not represent same memory third element");
    }
    return 0;
}