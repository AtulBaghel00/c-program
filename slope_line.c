#include<stdio.h>
int main()
{
    int xp;
    printf("enter the value of xp ");
    scanf("%d",&xp);
    int xq;
    printf("enter the value of xq ");
    scanf("%d",&xq);
    int yp;
    printf("enter the value of yp ");
    scanf("%d",&yp);
    int yq;
    printf("enter the value of yq ");
    scanf("%d",&yq);
    float slope= (yq-yp)/(xq-xp);
    printf("the slope of line is %f",slope);
    return 0;   
}