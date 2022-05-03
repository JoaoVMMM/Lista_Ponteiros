#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <math.h>

    // FUNCAO Q14
int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

    // FUNCAO Q15
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
    int i, j, t=1;      // VOU DEIXAR O VALOR DE (t=1) PARA NAO TER DEMORA POR FATOR HUMANO
    float aux;

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

        // MAIN PROGRAM
int main(void)
{
    float *x, *y;
    int n, i;
    clock_t t1, t2, t3, t4;

    printf("Digite a quantidade de valores que seram inbutidos (10.000+ ja mostra diferenca no tempo de execucao): ");
    scanf("%d", &n);

    x = (float*) malloc(n*sizeof(float));
    y = (float*) malloc(n*sizeof(float));

        // DESSA VEZ DECIDIR QUE O USUARIO NAO PODERA ESCOLHER OS VALORES DO VETOR, JA QUE 10000+ E MUITO NUMERO PRA DIGITAR
    for(i=0; i<n; i++){
        x[i] = (float)rand()/RAND_MAX;
        y[i] = (float)rand()/RAND_MAX;
    }

        // CLOCK EM ACAO
    t1 = clock();
    qsort(x, n, sizeof(float), compare);
    t2 = clock() - t1;

    t3 = clock();
    jsort(y, n, jcompare);
    t4 = clock() - t3;

        // PRINT CLOCK
    printf("\nTempo de execucao de Q14: %d clicks (%f s)", t2, ((float)t2)/CLOCKS_PER_SEC);
    printf("\nTempo de execucao de Q15: %d clicks (%f s)", t4, ((float)t4)/CLOCKS_PER_SEC);

    free(x);
    free(y);
}

