#include <stdio.h>
#include <stdlib.h>
#define N 120

// struct trojkat{
//     int tab[20];
// };

int main(void){

    // struct trojkat poziom[N];
    // for(int i = 0; i<N; i++){
    //     for(int j = 0; j<i+1; j++){
    //         scanf("%d", &poziom[i].tab[j]);
    //     }
    // }

    int max = 0;

    int tab[200]={75,95,64,17,47,82,18,35,87,10,20,04,82,47,65,19,01,23,75,03,34,88,02,77,73,07,63,67,99,65,04,28,06,16,70,92,41,41,26,56,83,40,80,70,33,41,48,72,33,47,32,37,16,94,29,53,71,44,65,25,43,91,52,97,51,14,70,11,33,28,77,73,17,78,39,68,17,57,91,71,52,38,17,14,91,43,58,50,27,29,48,63,66,04,68,89,53,67,30,73,16,69,87,40,31,4,62,98,27,23,9,70,98,73,93,38,53,60,4,23};
    //int tab[10] = {3,7,4,2,4,6,8,5,9,3};


    int k = 1;
    int p = 0;
    max= tab[0];

    for(int i=1; i<110; i+=k){
        int j = i;
        printf("\nj=%d", j);
            if(tab[j+p]>tab[j+1+p]){
                max+=tab[j+p];
                printf("\n%d\n", tab[j+p]);
                p=j+p;
                p=i-p;
                if(p<0) p = -p;
                printf("\np=%d", p);
                printf("\ni=%d", i);


            }
            else{
                max+=tab[j+p+1];
                printf("\n%d\n", tab[j+p+1]);
                p=j+p+1;
                p=i-p;
                if(p<0) p = -p;
                printf("\np=%d", p);
                printf("\ni=%d", i);
            }
            k++;

    }




    printf("\n\n");
    printf("%d\n", max);

    // for(int i = 0; i<N; i++){
    //     for(int j = 0; j<i+1; j++){
    //         printf("%3d ", poziom[i].tab[j]);
    //     }
    //     puts("");
    // }







    return 0;
}
