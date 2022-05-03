#include <stdio.h>
#include <stdlib.h>

void ordenar(float *z, int n){
    int i, j;
    float aux;

    for(i=0; i<n;i++){
        for(j=i+1; j<n; j++){
            if(z[i]>z[j]){
                aux = z[j];
                z[j] = z[i];
                z[i] = aux;
            }
        }
    }
}


int main(void)
{
    float *z;
    int n, i, r;

    printf("Digite a quantidade de valores que seram inbutidos: ");
    scanf("%d", &n);

    z = (float*) malloc(n*sizeof(float));

    printf("Desejar digitar os valores (0) ou prefere valores aleatorios (1): ");
    scanf("%d", &r);

    for(i=0; i<n; i++){
        if(r==0){
            printf("Digite um valor (faltam %d): ", n-i);
            scanf("%f", &z[i]);
        }
        else{
            z[i] = (float)rand()/RAND_MAX;
        }
    }

    printf("\nMemoria original { ");
    for(i=0; i<n; i++){
        printf("%f ", z[i]);
    }
    printf("}\n");

    ordenar(z,n);

    printf("\nMemoria ordenada { ");
    for(i=0; i<n; i++){
        printf("%f ", z[i]);
    }
    printf("}\n");

    free(z);
}
