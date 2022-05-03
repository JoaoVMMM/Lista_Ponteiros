#include <stdio.h>
#include <stdlib.h>

void somaV(int *x, int *y, int *z, int n){
    while(n>0){
        z[n-1] = x[n-1] + y[n-1];
        n--;
    }
}

int main()
{
    int *x, *y, *z;
    int n, r, i;

    printf("Digite a quantidade de valores que terao os dois valores: ");
    scanf("%d", &n);

    x = (int*) malloc(n*sizeof(int));
    y = (int*) malloc(n*sizeof(int));
    z = (int*) malloc(n*sizeof(int));

        // IMPLEMENTANDO VALORES DOS VETORES
    printf("Deseja digitar os valores (0) ou prefere valores fixos (1): ");
    scanf("%d", &r);

    for(i=0; i<n; i++){
        if(r==0){
            printf("Digite um valor para o vetor X (faltam %d): ", n-i);
            scanf("%d", &x[i]);
            printf("Digite um valor para o vetor Y (faltam %d): ", n-i);
            scanf("%d", &y[i]);
        }
        else{
            x[i] = rand()%100;
            y[i] = rand()%100;
        }
    }

        // IMPRESSAO DOS VETORES X e Y
    printf("\nVetor X: { ");
    for(i=0; i<n; i++){
        printf("%d ", x[i]);
    }
    printf("}");

    printf("\nVetor Y: { ");
    for(i=0; i<n; i++){
        printf("%d ", y[i]);
    }
    printf("}");

        // SOMA DOS VETORES E IMPRESSAO
    somaV(x, y, z, n);

    printf("\n\nVetor Z: { ");
    for(i=0; i<n; i++){
        printf("%d ", z[i]);
    }
    printf("}\n");

        // LIBERANDO MEMORIA DOS VETORES
    free(z);
    free(y);
    free(x);
}
