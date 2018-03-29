#include <stdio.h>
#define N 157
//suma cyfr 100!
int main(void){
  int p;
  int suma=0;
  unsigned long long  tab[N]={0};
  tab[0]=1;

  for(int i=1; i<100; i++){
    for(int j=0; j<N; j++){
      tab[j]=tab[j]*i;
    }
    for(int j=0; j<N-2; j++){
      tab[j+2]+=(tab[j]%1000)/100;
      tab[j+1]+=(tab[j]%100)/10;
      tab[j]=tab[j]%10;
    }
  }
  for(int i=0; i<N; i++){
    suma+=tab[i];
  }

printf("suma %d \n", suma);
  for(int i=N-2; i>=0; i--){
    printf("%lld",tab[i]);
  }
  return 0;
}
