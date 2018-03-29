#include <stdio.h>

int main(void){
  int suma=0;
  int tab[1000]={0};
  tab[0]=1;
  for(int j=0; j<10000; j++){
    for(int i=0; i<1000; i++)
      tab[i]=2*tab[i];
    for(int i=0; i<999; i++){
      if(tab[i]>9){
        tab[i+1]=tab[i+1]+1;
        tab[i]=tab[i]%10;
      }
    }
  }

  for(int i=999; i>=0; i--){
  suma+=tab[i];
}
  printf("%d\n", suma);
  return 0;
}
