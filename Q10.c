#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[4];
    int y[4], i;
    float z[4];
    double w[4];

    printf("x(char):\n");
    for(i=0; i<4; i++){
        printf("x[%d] = %d, ", i, (x+i));
    }
    printf("\n\ny(int):\n");
    for(i=0; i<4; i++){
        printf("x[%d] = %d, ", i, (y+i));
    }
    printf("\n\nz(float):\n");
    for(i=0; i<4; i++){
        printf("x[%d] = %d, ", i, (z+i));
    }
    printf("\n\nw(double):\n");
    for(i=0; i<4; i++){
        printf("x[%d] = %d, ", i, (w+i));
    }

    return 0;
}

/*
    RESOLUCAÇAO:
    Os resultados do programa foram quase identicos com os resultados idealizados,
    sendo (INT) a unica excessao, que cresceu a cada 4 bytes ao inves do previsto que seria a cada 2 bytes
*/

