 #include <stdio.h>



 int main(){

   int f=0;
   double suma = 0;

   for(int a = 200; a>=0; a-=200){
     for(int b = a; b>=0; b-=100){
       for(int c = b; c>=0; c-=50){
         for(int d = c; d>=0; d-=20){
           for(int e = d; e>=0; e-=10){
             for(int h = e; h>=0; h-=5){
               for(int g = h; g>=0; g-=2) f++;
             }
           }
         }
       }
     }
   }


   printf("%d\n", f);

   return 0;
 }
