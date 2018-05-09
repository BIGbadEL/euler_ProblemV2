#include <stdio.h>
#include <math.h>
int main(void){
  int c;
  for(int a=1; a<1000; a++){
    for(int b=a+1; b<1000; b++){
      c=sqrt(a*a+b*b);
      if(a+b+sqrt(a*a+b*b)==1000){
        printf("wynik %d\n", a);
        printf("wynik %d\n", b);
        printf("wynik %d\n", c);
        printf("wynik %d\n", a*b*c);
        return 0;
      }

    }
  }
  return 0;
}
