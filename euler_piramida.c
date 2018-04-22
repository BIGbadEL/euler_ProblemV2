#include <stdio.h>
#include <stdlib.h>
#define N 100

int max_suma(int tab[N][N], int inx, int b){
    static int wynik[N][N] = {0};



    wynik[0][0] = tab[0][0];
    int max = 0, max2 = 0;
    if(inx < 0) return 0;
    if(wynik[inx][b] != 0) return wynik[inx][b];
    if(tab[inx][b] == 0) return 0;


    max = max_suma(tab, inx-1,b-1)+tab[inx][b];
    max2 = max_suma(tab, inx-1,b)+tab[inx][b];

    if(max>max2){
        wynik[inx][b] = max;
    }else {
        wynik[inx][b] = max2;
    }
    return wynik[inx][b];
}

int main(){
    int max = 0;
    int tab[N][N] = {0};
    for(int i = 0; i<N; i++){
        for(int j = 0; j<=i; j++){
            scanf("%d", *(tab+i)+j);
        }
    }

    int f;
    for(int i = 0; i<N; i++){
        f = max_suma(tab,N-1,i);
        if(f>max){
            max = f;
        }
    }
    printf("%d\n", max);


    printf("\n");
    return 0;
}
