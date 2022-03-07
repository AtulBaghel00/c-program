#include <stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("vowel");
        
    }
    else if(isdigit(ch)){
        printf("digit");
    }
    else{
        printf("consonant");
    }
}
 
