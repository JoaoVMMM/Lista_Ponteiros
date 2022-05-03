#include <stdio.h>
#include <stdlib.h>

void soma(int a, int b){
    printf("Soma = %d\n", a+b);
}
void subtracao(int a, int b){
    printf("subtracao = %d\n", a-b);
}
void multiplicacao(int a, int b){
    printf("multiplicacao = %d\n", a*b);
}
void divisao(int a, int b){
    printf("divisao = %f\n", a/b);
}

int main()
{
    void (*pf[])(int,int) = {soma, subtracao, multiplicacao, divisao};
    int a, b, op;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Qual a funcao da calculadora [soma(0), subtracao(1), multiplicacao(2), divisao(3)]: ");
    scanf("%d", &op);
    (*pf[op])(a,b);

    return 0;
}

/*
    Ponteiros para funções recebem argumentos de outras funções, e a função apontada pode ser executada,
    sem a necessidade de escrever o nome da função de forma explicita naquele ponto do codigo.
*/
