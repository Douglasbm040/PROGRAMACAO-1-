#include<stdio.h>
int ano_nascimento, ano_atual,opcao,idade_em_anos,total;

void interface(){
    printf("digite do ano que voce nasceu : ");
    scanf("%d",&ano_nascimento);
    printf("digite o ano atual : ");
    scanf("%d",&ano_atual);
    printf("digite a numero com a opcao queria a conversao \n[1]ano \n[2]mes \n[3]semana \n[4]dia \ndigite sua opcao : ");
    scanf("%d",&opcao);
}

void converte_tempo(){
    interface();
    idade_em_anos = ano_atual - ano_nascimento;
 switch(opcao){
     case 1 :
     printf("a sua idade em anos e : %d",idade_em_anos);

     break;
     case 2:
     total = idade_em_anos * 12 ;
     printf("a sua idade em meses e : %d",total);

     break;
     case 3:
     total = idade_em_anos * 52;
     printf("a sua idade em semanas e aproximadamente : %d",total);
     
     break;
     case 4:
     total = idade_em_anos * 365;
     printf("a sua idade em dias e aproximadamente : %d",total);
     break;
     default:
     printf("ocorreu um erro digite novamente : ");
     converte_tempo();
     

 }
}

void main(){
 converte_tempo();
}