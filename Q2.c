#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5, *p;
    p=&i;

    printf("%x | %d | %d | %d | %d", p, *p+2, **&p, 3**p, **&p+4);

    return 0;
}

/*
    RESULTADOS ESPERADOS
    4094 (endereço verdadeiro de i=5: 60fefc)
    7
    5
    15
    9
*/
