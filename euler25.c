#include <stdio.h>
#define N 1000

int licz(){
  int tab1[N] = {0};
  int tab2[N] = {0};
  tab1[N-1]=1;
  tab2[N-1]=1;
  int a = 2;

  while(tab2[0] == 0){
    for(int i=0; i<N; i++){
      tab1[i]+=tab2[i];
    }

    for(int i=N-1; i>=0; i--){
      if(tab1[i]>9){
        tab1[i] %= 10;
        tab1[i-1]+=1;
      }
    }
    a++;
    if(tab1[0] != 0) {
      printf("cos\n" );
      break;}

    for(int i=0; i<N; i++){
      tab2[i]+=tab1[i];
    }
    for(int i=N-1; i>=0; i--){
      if(tab2[i]>9){
        tab2[i] %= 10;
        tab2[i-1]+=1;
      }
    }
    a++;
  }
  return a;
}

int main(){

printf("%d\n", licz());

  return 0;
}
