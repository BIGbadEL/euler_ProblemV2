#include <stdio.h>
#include <math.h>

int pier(int s){
  if(s==1) return 0;
  int f=0;
  for(int i=1; i<=sqrt(s); i++){
    if(s%i==0) f++;
  }
  if(f == 1) return 1;
  return 0;
}
int ile(int l){
  int i=0;
  while(l!=0){
    l/=10;
    i++;
  }
  return i;
}

int main(void){
int f=0,suma=0,liczba,a;
  for(int i=10;f!=11;i++){
    liczba = i;
    while(pier(liczba)){
      liczba=liczba/10;
    }
    if(liczba==0){
      liczba = i;
      while(pier(liczba)){
        a = ile(liczba);
        liczba = liczba -((liczba /(int)pow(10, a-1)) * (int)pow(10, a-1));

      }
      if(liczba == 0){
        suma+=i;
        f++;
      }
    }}
    printf("%d\n", suma);
  return 0;
}
