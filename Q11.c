#include <stdio.h>
#include <stdlib.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    //scanf("%f", &aloha);
    //aloha = value;
    //printf("%f", aloha);
    //coisas[4][4] = aloha[3];
    //coisas[5] = aloha;
    //pf = value;
    //pf = aloha;
}
/*
    RESOLUÇAO
    Valido:     aloha[2] = value;
    Valido:     scanf("%f", &aloha);
    Invalido:   aloha = value;
    Valido:     printf("%f", aloha);
    Valido:     coisas[4][4] = aloha[3];
    Invalido:   coisas[5] = aloha;
    Invalido:   pf = value;
    Valido:     pf = aloha;
*/
