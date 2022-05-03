#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int pulo[5] = {1, 2, 3, 4, 5};
    int p;
    int p1, p2, p3, p4;

    p = pulo;

    p1 = *(pulo + 2);
    p2 = *(pulo + 4);
    p3 = pulo + 4;
    p4 = pulo + 2;

    printf("{1, 2, 3, 4, 5} \n");

    printf("%d ", p1);
    printf("| %d ", p2);
    printf("| %d ", p3);
    printf("| %d", p4);
}

/*
    RESOLUÇAO
    *(pulo + 2)
*/
