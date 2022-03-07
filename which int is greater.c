int main(){
    int a,b,c,d ,g,h;
    printf("enter the int a \n");
    scanf("%d",&a);
    printf("enter the int b \n");
    scanf("%d",&b);
    printf("enter the int c \n");
    scanf("%d",&c);
    printf("enter the int d \n");
    scanf("%d",&d);
    if(a>b){
       g=a;
    }
    else{
        g=b;
    }
     if(c>d){
       h=c;
    }
    else{
        h=d;
    }
    if(g>h){
        printf("the greatest int is %d\n",g);
    }
    else{
        printf("the gratest integer is %d \n",h);
    }
    return 0;
}