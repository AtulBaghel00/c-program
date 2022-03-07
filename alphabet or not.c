#include <stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=65&& ch<=90 || ch>=97&& ch<=122){
        printf("alphabet");
        
    }
    else{
        printf("not alphabet");
    }
}
/*{
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        printf("alphabet");
        
    }
    else{
        printf("not");
    }

    return 0;
}*/
