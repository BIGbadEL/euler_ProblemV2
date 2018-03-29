#include <stdio.h>
#include <math.h>

int pier(int s){
  if(s<0) return 0;
  int f=0;
  for(int i=1; i<=sqrt(s); i++){
  	if(s%i==0)
  	f++;
  }
  if(f == 1) return 1;
  return 0;
}

int main(void){
  int n,s,f,w=0;
  int aa,bb;
  for(int a=-999; a<1000; a++){
    for(int b=1; b<=1000; b++){
      n=0;
      f=0;
      do {
        s = n*(n+a)+b;
        n++;
        f++;
      } while(pier(s));
      if(w<f){
        w=f;
        aa=a;
        bb=b;
      }
    }
  }
  printf("n^2 + %dn + %d\n %d\n", aa, bb, aa*bb);

  return 0;
}
