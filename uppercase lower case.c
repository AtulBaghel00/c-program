#include <stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("upercase");
        
    }
    else if(islower(ch)){
        printf("lowercase");
    }
    return 0;
}
 
