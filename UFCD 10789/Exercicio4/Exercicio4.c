#include <stdio.h>

int main(){

    // Fazer um algoritmo que leia o saldo inicial de cliente do banco e leia tamb�m um cheque que entrou e ANALISE
    // se o cheque poder� ser descontado ou n�o, j� que este cliente n�o possui limite. Se o cheque n�o poder� ser
    // descontado, mostre essa informa��o, caso contr�rio, desconte o cheque e informe o saldo.

    int saldo, cheque, total;

    printf("Insira o seu saldo: ");
    scanf("%d", &saldo);

    printf("Insira o valor do cheque: ");
    scanf("%d", &cheque);

    if(cheque<=saldo){
        total = saldo - cheque;
        printf("\nValor descontado: %d", total);
    } else{
        printf("\nSaldo insuficiente.");
    }

    return 0;

}
