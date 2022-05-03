#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){  // Funcao de comparacao de valores
    return (*(int*)a - *(int*)b);           // Retorna um valor que representa qual valor e maior que o outro ou tem o mesmo sao iguais
}


int main(void)
{
    float *z;       // Variavel ponteiro
    int n, i, r;    // Variaveis gerais de auxilio do programa

    printf("Digite a quantidade de valores que seram inbutidos: "); // Perguntando ao usuario a quantidade de valores usados
    scanf("%d", &n);                                                // Implementando a quantidade de valores em uma das variaveis gerais

    z = (float*) malloc(n*sizeof(float));   // Transformando a variavel ponteiro em um vetor de (n) valores

    printf("Desejar digitar os valores (0) ou prefere valores fixos (1): ");   // Perguntando ao usuario se ele deseja escolher os valores ou nao
    scanf("%d", &r);                                                           // Implementando a resposta sobre a escolha dos valores

    for(i=0; i<n; i++){                                     // Funcao de loop de tamanho (n)
        if(r==0){                                           // Caso o usuario deseja por seus proprios valores
            printf("Digite um valor (faltam %d): ", n-i);   // Pergunta ao usuario qual o valor deve ser implementado no vetor e informa quantos faltam
            scanf("%f", &z[i]);                             // Implementa o valor no vetor localizado no ponto (i)
        }
        else{                                   // Caso o usuario deseja utilizar os valores fixos
            z[i] = (float)rand()/RAND_MAX;      // Cria valores fixos da funcao (rand) e os implementa no vetor localizado no ponto (i)
        }
    }

    printf("\nMemoria original { ");    // Informa o usuario que sera mostrado o vetor com os valores implementados
    for(i=0; i<n; i++){                 // Funcao de loop de tamanho (n)
        printf("%f ", z[i]);            // Imprime na tela os valores do vetor
    }
    printf("}\n");                      // Impressao estetica

    qsort(z, n, sizeof(float), compare);    // Chamada de funcao com o objetivo de reorganizar o vetor para que seus valores sejam crescente

    printf("\nMemoria ordenada por qsort { ");  // Informa o usuario que sera mostrado o vetor apos ser reorganizado
    for(i=0; i<n; i++){                         // Funcao de loop de tamanho (n)
        printf("%f ", z[i]);                    // Imprime na tela os valores do vetor apos serem reorganizados
    }
    printf("}\n");                              // Impressao estetica

    free(z);    // Libera a memoria onde o vetor estava sendo armazenado
}
