#include<stdio.h>
//! O Botafogo deseja aumentar o salário de seus 22 jogadores. O reajuste deve seguir as seguintes regras:
//! 
//! SALÁRIO ATUAL (R$) AUMENTO
//! 0,00 a 1.000,00 20%
//! 1.000,01 a 5.000,00 10%
//! acima de 5.000,00 0%
//! 
//! Faça um programa em C que:
//!  leia o nome e o salário atual de cada jogador;
//!  exiba o nome, o salário atual e o salário reajustado de cada jogador;
//!  exiba o total da folha de salários do clube, antes do reajuste.
//!  exiba o total da folha de salários do clube, após o reajuste.
//!  exiba o percentual de reajuste sobre o total da folha de salários.
#define jogadores 22

int main(){
    char nome[20];
    int i ;
    float salario_atual, salario_reajustado , folha_de_pagamento, folha_de_pagamento_rejustado, percentual_folha_de_pagamento ;

    for (i = 1 ; i <= jogadores ; i++ ){
        printf("digite o nome : ");
        scanf(" %s",nome);
        printf("digite o valor : ");
        scanf(" %f",&salario_atual);

        folha_de_pagamento += salario_atual ;

        if(salario_atual >= 0 && salario_atual <= 1000 ){
            salario_reajustado = salario_atual + (salario_atual * 0.2);

        }else if (salario_atual > 1000 && salario_atual <= 5000 ){
            salario_reajustado = salario_atual + (salario_atual * 0.1);

        }else if (salario_atual > 5000 ){
            salario_reajustado =  salario_atual;
        }

        folha_de_pagamento_rejustado += salario_reajustado ;

        printf("%s recebe atualmente %.2f valor reajustado %.2f \n",nome,salario_atual,salario_reajustado);
        printf("------------------------------------------------------------------------------------------ \n");
    }
    percentual_folha_de_pagamento = ( folha_de_pagamento_rejustado * 100 ) / folha_de_pagamento ;
    printf("folha de pagamento : %.2f || folha de pagamento reajusto %.2f || percentual de folha de pagamento %.2f por cento \n",folha_de_pagamento,folha_de_pagamento_rejustado,percentual_folha_de_pagamento);
    printf("----------------------------------------------------------------------------------------------------------------\n");





    return 0 ;
}