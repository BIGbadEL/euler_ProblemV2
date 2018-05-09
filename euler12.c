#include <stdio.h>
#include <math.h>
#include <time.h>

int main(void){

  int suma=0,f;
  clock_t start = clock();
  for(int i=1; i>0; i++){
    suma+=i;
    f=1;
    for(int j=1; j<=suma/2; j++){

      if(suma%j==0)
      f++;
    }

    if(f>500){
    printf("%d %d\n", suma, f);
    break;

  }}
  clock_t stop = clock() - start;
  printf("%f s\n", ((float)stop)/CLOCKS_PER_SEC);

  return 0;
}
