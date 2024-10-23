
#include <stdio.h>

int main (){
    int numero = 0;
    int n = 1;
    int l = 0;
  while(numero<1000){
        l=0;
        l=numero/2/7;
        if(l==n){
            printf("%d, ",numero);
            n=n*2;
        }
        numero++;
    }
   return 0;
}
