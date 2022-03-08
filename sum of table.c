int main(){
    int a=8;
    int c;
    int b=0;
    int i=1;
    while (i<=10){
        c=a*i;
        printf("%d\n",c);
        i++;
        b=b+c;
        c++;
    }
    printf("sum of table is %d",b);
    return 0;
    
}
   