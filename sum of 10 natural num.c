// by while loop
int main(){
    int num=10;
    
    int c=0;
    int i ;
    
    while(i<=num){
        c=c+i;
        
        i++;
    }
    
    printf("%d",c);
    return 0;
}

//by for loop
int main(){
    int num=10;
    int c=0;
    int i;
    for(i=0 ; i<=num ; i++){
        c=c+i;
    }
    printf("%d",c);
    return 0;
}