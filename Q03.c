#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3, j=5, *p, *q;

    //p = i;
    //q = &j;
    p = &*&i;
    //i = (*&)j;
    //i = *&j;
    i = *&*&j;
    q = *p;
    //i = (*p)++ + *q;

    printf("%d \n", p);
    printf("%d \n", q);
    printf("%d", i);

    return 0;
}

/*
    RESULTADOS ESPERADOS
    Legal: p = i
    Legal: q = &j
    Legal: p = &*&i
    Ilegal: i = (*&)j
    Legal: i = *&j
    Legal: i = *&*&j
    Legal: q = *p
    Legal: i = (*p)++ + *q;
*/
