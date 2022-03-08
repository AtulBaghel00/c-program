// by while loop

/int main(){
    int a=4;
    int c;
    int i=10;
    while(i>=1){
        c=a*i;
        printf("%d \n",c);
        i--;
        
    }
    
    return 0;
}

//by do while

int main(){
    int a=4 ,c,i=10;
    do{
        c=a*i;
        printf("%d\n",c);
        --i;
    }while(i>=1);
    return 0;
    
}


//by for loop

int main(){
    int a=4;
    int i;
    for(i=10 ; i>=1 ; i--){
        printf("4* %d= %d\n",i,a*i);
    }
    return 0;
}











