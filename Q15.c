#include <stdio.h>
#include <stdlib.h>

int jcompare (float a, float b){
    if(a>b){
        return 1;
    }
    else if(a<b){
        return -1;
    }
    else{
        return 0;
    }
}

void jsort(float *z, int n, int (jcompare)(float, float)){
    int i, j, t;
    float aux;

    printf("\nQual tipo de reorganizacao e desejada: Crescente(1) ou Decrescente(-1): ");
    scanf("%d", &t);

    for(i=0; i<n;i++){
        for(j=i+1; j<n; j++){
            if(jcompare(z[i],z[j]) == 1 && t == 1){
                aux = z[j];
                z[j] = z[i];
                z[i] = aux;
            }
            else if(jcompare(z[i],z[j]) == -1 && t == -1){
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

    jsort(z, n, jcompare);

    printf("\nMemoria ordenada { ");
    for(i=0; i<n; i++){
        printf("%f ", z[i]);
    }
    printf("}\n");

    free(z);
}
