//André Luis Dias Nogueira
#include <stdio.h>

#define AUX 11

int main () {

    int i, j, soma_1, d_validacao_1, soma_2, d_validacao_2; //insercao de variaveis e vetores

    int d[AUX];

    for(i=0;i<AUX;i++) {
        scanf(" %d", &d[i]); //escaneamento dos valores
    }

    for(i=(AUX-1), j=0, soma_1=0;i>1;i--,j++) {
        soma_1 += i*d[j];
    } //soma para a primeira validacao

    printf("%d\n", soma_1); //resposta 1

    if (soma_1%11 <2) { //analise condicional dos casos
        d_validacao_1=0;
    } else {
        d_validacao_1= 11 - (soma_1%11);
    }

    printf("%d\n", d_validacao_1); //resposta 2

    for(i=AUX, j=0, soma_2=0; i>1;i--,j++) {
        soma_2 += i*d[j];
    }//soma da segunda validacao

    printf("%d\n", soma_2); //resposta 3

    if (soma_2%11 <2) { //analise condicional dos casos
        d_validacao_2=0;
    } else {
        d_validacao_2= 11 - (soma_2%11);
    }

    printf("%d\n", d_validacao_2); //resposta 4

    if (d_validacao_1!=d[9] || d_validacao_2!=d[10]) { //validacao dos casos
        printf("N\n");
    } else {
        printf("S\n");
    }
}