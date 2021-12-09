#include<stdio.h>
//! Faça um programa em C que ajude o DETRAN a calcular a sua arrecadação com multas. O programa
//! deve ler as seguintes informações para cada motorista:
//!  Número da Carteira de Motorista
//!  Número de multas
//!  Valor de cada uma das multas
//! O programa deve imprimir o valor da dívida de cada motorista e o total arrecadado pelo DETRAN (soma
//! das dívidas de todos os motoristas). Por fim, o programa deve imprimir o número da carteira do
//! motorista que obteve o maior número de multas. O programa para de receber dados quando o número
//! da carteira de motorista for 0 (zero).
int main (){
    
    int i , num_carteira, maior_num_multas = 0 ,num_multas ;
    float valor_da_multa,valor_final, total;


    while(i>=1){
        printf("digite o numero da carteira de motorista: ");
        scanf("%d",&num_carteira);
        printf("digite o numero de multas: ");
        scanf("%d",&num_multas);
        printf("digite o valor da multa: ");
        scanf("%f",&valor_da_multa);
        
        if (num_multas > maior_num_multas){
            maior_num_multas = num_multas ;
        }
        valor_final= num_multas * valor_da_multa ;

        printf("carteira %d com %d teve %.2f ",num_carteira,num_multas,valor_final);

        total += valor_final;   

        printf("deseja continuar ? (1-nao ou 0-nao): ");
        scanf("%d",&i);
    }
    printf("o somatorio de todas as multas e : %.2f",total);






    return 0 ;
}