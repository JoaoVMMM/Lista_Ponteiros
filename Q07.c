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
    RESOLUÇAO
    Valido: p = mat + 1     (Acessa a proxima posiçao de memoria do vetor)
    Invalido: p = mat++     (O operador(++) não pode acrescentar +1 num operador de memoria não definido)
    Invalido: p = ++mat     (O operador(++) não pode acrescentar +1 num operador de memoria não definido)
    Valido: x = (*mat)++
*/
