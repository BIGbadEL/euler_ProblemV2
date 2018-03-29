#include <stdio.h>
#include <math.h>

int main(void){
  int suma=0,f;
  for(int i=1; i>0; i++){
    suma+=i;
    f=0;
    printf("%d  ", suma);
    for(int j=1; j<=suma; j++){

      if(suma%j==0)
      f++;
    }
    printf(" %d\n", f);
    if(f>500){
    return 0;
  }}

  return 0;
}
