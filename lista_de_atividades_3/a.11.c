//! Faça um programa em C que possibilite calcular a área total em metros de uma residência com os
//! cômodos sala, cozinha, banheiro, dois quartos, área de serviço, quintal, garagem, entre outros que
//! podem ser fornecidos ao programa. O programa deve solicitar a entrada do nome, da largura e do
//! comprimento de um determinado cômodo. Em seguida, deve apresentar a área do cômodo lido e
//! também uma mensagem solicitando ao usuário a confirmação de continuar calculando novos cômodos
//! (1-Sim e 0-Não). Caso o usuário responda 0 (Não) o programa deve apresentar o valor total acumulado
//! da área residencial.
#include<stdio.h>

int main(){
    int i , opcao ;
    float largura, comprimento,area,soma;
    char nome[20];

    printf("===========================================================\n");

    while(i>0){
        printf("digite o nome do comodo: ");
        scanf(" %s",nome);
        printf("digite a largura: ");
        scanf(" %f",&largura);
        printf("digite o comprimento: ");
        scanf("%f",&comprimento);        
        

        area = largura * comprimento ;
        printf("a area do %s e %.2f \n",nome,area);
        soma += area;
        printf("deseja continuar (1-Sim e 0-Nao)? ");
        scanf(" %d",&opcao);
        printf("===========================================================\n");
        i = opcao ;


    }
    printf("a area total %.2f",soma);

    return 0 ;
}