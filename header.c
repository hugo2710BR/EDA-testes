#include "header.h"
#include <stdio.h>
#include <stdlib.h>

int BuscaValor(int size) {
    int *array;
    int i;

    array = (int *) malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Não foi possível alocar memória\n");
        exit(1);
    }

    for (i = 0; i < size; i++) {
        array[i] = i;
    }

    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    free(array);
}
