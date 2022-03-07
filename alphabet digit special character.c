#include <stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        printf("alphabet");
        
    }
    else if(isdigit(ch)){
        printf("digit");
    }
    else{
        printf("special character");
    }
}
 
