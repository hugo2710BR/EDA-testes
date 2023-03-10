#include <stdio.h>
#include <stdlib.h>

int main (){
    int x = 10;
    int* ptr = &x;

    *ptr = 20; // sempre que quiser chamar um apontador tenho que usar o *
              // Neste caso, utilizei o pointer ptr para substituir o valor de x

    printf("Valor de x: %d\n", x);
    printf("Valor apontado por ptr: %d\n", *ptr);


}