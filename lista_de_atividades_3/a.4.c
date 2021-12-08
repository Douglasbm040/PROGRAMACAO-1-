#include<stdio.h>
//! Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O monge,
//! necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de trigo
//! dispostos em um tabuleiro de xadrez (tem 64 casa), de tal forma que o primeiro quadro deveria
//! conter apenas um grão e os casa subseqüentes, o dobro do quadro anterior. A rainha achou o
//! trabalho barato e pediu que o serviço fosse executado, sem se dar conta de que seria impossível efetuar
//! o pagamento. Faça um programa em C para calcular o número de grãos que o monge esperava receber.


int main() {
    int i;
    long double somatorio = 1, inicio = 1;

    for(i = 2; i <= 64; i++){
        inicio = inicio * 2;
        somatorio += inicio;
        printf("%d Valor: %Lf\n", i, inicio);
        __mingw_printf("%d Valor: %Lf\n", i, inicio);
    }
    printf("->Valor: %Lf\n", somatorio);
   __mingw_printf("->Valor: %Lf\n", somatorio);
    return 0;
}