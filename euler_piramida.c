#include <stdio.h>
#include <stdlib.h>

int max_suma(int tab[15][15], int inx, int b){
    int max = 0, max2 = 0;
    if(inx <= 0) return max=tab[0][0];
    if(tab[inx][b] == 0) return 0;


    max = max_suma(tab, inx-1,b-1)+tab[inx][b];
    max2 = max_suma(tab, inx-1,b)+tab[inx][b];

    if(max>max2){
        return max;
    }else {
        return max2;
    }
}

int main(){
    int tab[15][15];
    for(int i = 0; i<15; i++){
        for(int j = 0; j<15; j++){
            scanf("%d", *(tab+i)+j);
        }
    }

    for(int i = 0; i<15; i++){
        for(int j = 0; j<15; j++){
            printf("%4d ", *(*(tab+i)+j));
        }
        printf("\n");
    }
    for(int i = 0; i<15; i++){
        printf("max: %d\n", max_suma(tab,14,i));
    }


    printf("\n");
    return 0;
}
