
#include <stdio.h>

int main (){
    int numero0 = 1;
    int numero1 = 0;
    int numero2 = 0;
    while (numero0 <= 500){
        numero1 = numero0 * numero0;
        numero2 = numero0 * numero0 * numero0;
        printf("%d, \t %d, \t %d\n", numero0, numero1, numero2);
        numero0++;
    }
    return 0;
}
