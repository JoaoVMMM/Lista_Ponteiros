#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[] = {4, 9, 13};
    int i;

    for(i=0; i<3; i++){
        // PROGRAMA 1
        printf("%d ", *(vet + i));
    }
    printf("\n");
    for(i=0; i<3; i++){
        // PROGRAMA 2
        printf("%X ", vet+1);
    }
    return 0;
}

/*
    RESOLU�AO
    O programa 1 imprime os valores localizados nos endere�os de memoria do vetor
    O programa 2 imprime os endere�os de memoria onde se encontra os valores do vetor
*/
