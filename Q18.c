#include <stdio.h>
#include <stdlib.h>

void multM(int **x, int **y, int **z, int xl, int ncl, int yc){
    int i, j, k, sum;

    for(i=0; i<xl; i++){
        for(j=0; j<yc; j++){
            sum=0;
            for(k=0; k<ncl; k++){
                sum = sum + (x[i][k] * y[k][j]);
            }
        z[i][j] = sum;
        }
    }
}

int main()
{
    int **x, **y, **z;
    int xl, ncl, yc, i, j, r;

    printf("Digite a quantidade de linhas da Matriz X: ");
    scanf("%d", &xl);
    printf("Digite a quantidade de colunas da Matriz X (sera a mesma quantidade de linhas de Matriz Y): ");
    scanf("%d", &ncl);
    printf("Digite a quantidade de colunas da Matriz Y: ");
    scanf("%d", &yc);

    x = (int**) malloc(xl*sizeof(int*));
    y = (int**) malloc(ncl*sizeof(int*));
    z = (int**) malloc(xl*sizeof(int*));

    for(i=0; i<xl; i++){
        x[i] = (int*) malloc(ncl*sizeof(int));
        z[i] = (int*) malloc(yc*sizeof(int));
    }
    for(i=0; i<ncl; i++){
        y[i] = (int*) malloc(yc*sizeof(int));
    }

    printf("Deseja digitar os valores (0) ou prefere valores fixos (1): ");
    scanf("%d", &r);

        // IMPLEMENTANDO VALORES NAS MATRIZES
    printf("\n");
    for(i=0; i<xl; i++){
        for(j=0; j<ncl; j++){
            if(r==0){
                printf("Digite um valor para a Matriz X (x[%d][%d]): ", i, j);
                scanf("%d", &x[i][j]);
            }
            else{
                x[i][j] = rand()%100;
            }
        }
    }
    printf("\n");
    for(i=0; i<ncl; i++){
        for(j=0; j<yc; j++){
            if(r==0){
                printf("Digite um valor para a Matriz Y (y[%d][%d]): ", i, j);
                scanf("%d", &y[i][j]);
            }
            else{
                y[i][j] = rand()%100;
            }
        }
    }

        // IMPRESSAO DAS MATRIZES X E Y
    printf("\nMatriz X:\n");
    for(i=0; i<xl; i++){
        for(j=0; j<ncl; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Y:\n");
    for(i=0; i<ncl; i++){
        for(j=0; j<yc; j++){
            printf("%d ", y[i][j]);
        }
        printf("\n");
    }

        // MULTIPLICACAO DAS MATRIZES E IMPRESSAO
    multM(x, y, z, xl, ncl, yc);

    printf("\nMatriz Z:\n");
    for(i=0; i<xl; i++){
        for(j=0; j<yc; j++){
            printf("%d ", z[i][j]);
        }
        printf("\n");
    }

        // LIBERANDO MEMORIA DAS MATRIZES
    for(i=0; i<xl; i++){
        free(x[i]);
        free(z[i]);
    }
    for(i=0; i<ncl; i++){
        free(y[i]);
    }
    free(z);
    free(y);
    free(x);
}
