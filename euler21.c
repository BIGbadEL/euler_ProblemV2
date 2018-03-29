#include <stdio.h>

int amicable(int n){
  int suma = 0;
  for(int i=1; i<n; i++){
    if(n%i==0) suma+=i;
  }
  return suma;
}

int main(void){

  int b;
  int suma = 0;

  for(int a=1; a<=10000; a++){
    b = amicable(a);
    printf("%d  %d\n", a, b);}
  }

  printf("%d\n", suma);

  return 0;
}
