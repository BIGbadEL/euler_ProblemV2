#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long unsigned int licz(long long unsigned int c, long long unsigned int r){
  int a=c, b=r; 
  static long long unsigned int tab[21][21] = {0};
  tab[0][0] = 1;
  if(tab[a][b] != 0){
    return tab[a][b];
  }

  if(a == 0 || b == 0){
    tab[a][b] = 1;
    return 1;
  }
  tab[a][b] = licz(a-1, b) + licz(a, b-1);
  return tab[a][b];
}

int main(void){

  long long unsigned int column;
  long long unsigned int row;
  printf("Podaj liczbe kolumn: ");
  scanf("%llu", &column);
  printf("Podaj liczbe wierszy: ");
  scanf("%llu", &row);

  printf("%llu\n", licz(column,row));



  return 0;
}
