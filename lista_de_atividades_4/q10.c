#include<stdio.h>
#define MAX 50 
//! Faça um programa em C que armazene o nome e o salário de 50 pessoas. O seu programa deve exibir a
//! listagem com nome e o novo salário de cada funcionário, sabendo que os funcionários tiveram reajuste
//! de 8 %. Por fim, o programa deve exibir o total gasto com a folha de pagamento antes e depois do
//! reajuste.




void main(){
    float salario[MAX],reajuste[MAX],total_salario = 0 , total_reajuste = 0 ;
    int i ;
    char nome[20],listagem[MAX];


    for(i=0; i < MAX ; i++){
        printf("digite o nome do funcionario : ");
        scanf("%c",&nome[20]);
        printf("digite o salario do funcionario: ");
        scanf("%f",&salario[i]);
        listagem[i] = nome[20];
        reajuste [i] = (salario[i] * 0.08 ) + salario[i] ; 

    }

    for(i= 0 ; i < MAX ; i ++ ){
        total_reajuste = total_reajuste + reajuste[i] ;
        total_salario =  total_salario + salario[i] ;

    }
    printf("total reajuste : %f \n total salario : %f \n",total_reajuste , total_salario);




















}
