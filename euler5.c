#include <stdio.h>

int main(void){
  int a,wynik=1;
  int i=1;
  scanf("%d", &a);
  for(wynik=1; wynik>0; wynik++){
    while(wynik%i==0){
      i++;

    }
    if(i>=a+1){
    printf("najmniejsza liczba podzielna przez każdą liczbe od 1-%d to %d\n", a, wynik);
      return 0;
    }
    i=1;
  }
return 0;
}
