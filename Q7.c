#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mat[4];
    int *p, x;

    p = mat + 1;
    x = *p;
    printf("%d\n", x);

/*
    p = mat++;
    x = *p;
    printf("%d", x);
*/
/*
    p = ++mat;
    x = *p;
    printf("%d\n", x);
*/

    x = (*mat)++;
    printf("%d", x);
}

/*
    RESOLU�AO
    Valido: p = mat + 1     (Acessa a proxima posi�ao de memoria do vetor)
    Invalido: p = mat++     (O operador(++) n�o pode acrescentar +1 num operador de memoria n�o definido)
    Invalido: p = ++mat     (O operador(++) n�o pode acrescentar +1 num operador de memoria n�o definido)
    Valido: x = (*mat)++
*/
