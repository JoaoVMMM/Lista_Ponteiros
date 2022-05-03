#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;

    f = vet;
    printf("Contador | Valor | Valor | Endereco | Endereco \n");

    for(i=0; i<=4; i++){
        printf("i = %d ", i);
        printf("| vet[%d] = %.1f ", i, vet[i]);
        printf("| *(f + %d) = %.1f ", i, *(f+i));
        printf("| &vet[%d] = %X ", i, &vet[i]);
        printf("| (f + %d) = %X \n", i, f+i);
    }
}

/*
    RESOLUÇAO
    i = 0 | vet[0] = 1.1 | *(f + 0) = 1.1 | &vet[0] = 60FEE4 | (f+0) = 60FEE4
    i = 1 | vet[1] = 2.2 | *(f + 1) = 2.2 | &vet[1] = 60FEE8 | (f+1) = 60FEE8
    i = 2 | vet[2] = 3.3 | *(f + 2) = 3.3 | &vet[2] = 60FEEC | (f+2) = 60FEEC
    i = 3 | vet[3] = 4.4 | *(f + 3) = 4.4 | &vet[3] = 60FEF0 | (f+3) = 60FEF0
    i = 4 | vet[4] = 5.5 | *(f + 4) = 5.5 | &vet[4] = 60FEF4 | (f+4) = 60FEF4

    Os resultados esperados foram os mesmos
*/
