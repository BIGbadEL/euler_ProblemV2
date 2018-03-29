#include <stdio.h>

int count(unsigned long long i){
  int krok=0;
  while(i!=1){
    if(i%2==0){
    i=i/2;
    krok++;}
    else{
    i=3*i+1;
    krok++;}
  }
  return krok;
}
int main(void){
  int max=0,number,f;
  for(int i=1; i<1000000; i+=2){
    f=count(i);
    if(max<f){
      max=f;
      number=i;
    }
  }
  printf("%d i zajelo to %d krokow\n", number, max);
  return 0;
}
