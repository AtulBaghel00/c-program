/*# include <stdio.h>
int main(){
    int x,y,i=1;
    long int power=1;
    printf("enter the number ");
    scanf("%d %d",&x, &y);
    while(i<=y)
    {
        power=power*x;
        i++;
    }
    printf("%d to th power %d is %Id\n",x,y,power);
    return 0;
}*/

# include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the number ");
    scanf("%d",&a);
    printf("enter the second number ");
    scanf("%d",&b);
    c=pow(a,b);
    printf("%d",c);
    return 0;
}