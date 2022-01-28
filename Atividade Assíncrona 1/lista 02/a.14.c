#include <stdio.h>


int main(){
    float capital;
    int tipo_de_investimento;
    printf("digite o seu capital : ");
    scanf("%f",&capital);
    printf("escolha as opcaoes de investimento :\n [1] poupanca\n [2] fundos de renda fixa\n digite um numero da escolha : ");
    scanf("%d",&tipo_de_investimento);
    
    if(tipo_de_investimento == 1){
        capital = capital + ( capital * 0.005);
        printf("o investimento da poupanca rendem %.2f",capital);
    }else if (tipo_de_investimento == 2 ){
        capital = capital + ( capital * 0.04);
        printf("o investimento em fundos de renda fixa rendem %.2f",capital);

    }else {
        printf("opcao invalida ! ");
    }


    return 0 ;
}