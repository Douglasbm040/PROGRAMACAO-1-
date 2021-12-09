//! Faça um programa em C que possibilite calcular o peso total e o valor total a pagar de bovinos em uma
//! pesagem. O programa deve solicitar a entrada do valor da arroba, e o peso de cada animal que for para
//! a balança. Caso o usuário responda 0 (zero), o programa deve encerrar a entrada de dados e calcular o
//! peso total acumulado bem como o preço total à pagar. O preço a pagar é dado pela seguinte fórmula:
//!     Preço Total = Quantidade de Arrobas * Preço Arroba;
//!     Peso Total Acumulado = (Peso Total/2);
//!     Para calcular a Quantidade de Arrobas, basta utilizar a seguinte fórmula:
//!     Quantidade de Arrobas = (Peso Total Acumulado/ 15);


#include<stdio.h>

int main(){
    int i ;
    float peso_total,valor,arrouba,preco_arrouba,peso,total;

    while(i >= 1 ){
        printf("digite o peso do animal : ");
        scanf("%f",&peso);
        printf("digite o valor da arrouba: ");
        scanf("%f",&preco_arrouba);
        peso_total = peso / 2 ;
        arrouba = peso_total / 15 ;
        valor = arrouba * preco_arrouba ;
        total += valor ;
        printf("deseja continuar ? (1-sim ou 0-nao) : ");
        scanf("%d",&i);
        printf("o valor deste animal e :  %.2f\n",total);
    }

 printf("\nvalr acumludo e :  %.2f",total);







    return 0 ;
}