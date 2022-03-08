#include <stdio.h>
#include <math.h>

int main ()
{
  int i = 1, a,b,c;
  while (i <= 500){
      a=i%10;
      b=i%100;
      b= (b-a)/10;
      c= i/100;
      if(pow(a,3)+pow(b,3)+pow(c,3)==i)
            printf("%d\n",i);
      i++;
  }
  return 0;
      
}
     
  
