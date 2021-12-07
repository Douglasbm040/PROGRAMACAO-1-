#include <stdio.h>

int main (){
    //*variaveis
    int categoria,situacao; ;
    float preco,valor;
    
    
    //*interface 
    printf("digite o preco do produto : ");
    scanf("%f",&preco);
    printf("digite a sua escolha:\n [1]limpeza\n [2]alimentacao\n [3] vestuario\ndigite sua escolha : ");
    scanf("%d",&categoria);
    printf("digite a situacao do produto :\n [1] produtos que necessitam de refrigeracao\n [2] produtos que nao necessitam de refrigeracao\ndigite sua escolha : ");
    scanf("%d",&situacao);
    
    
    
    //*funcao
    switch(categoria){
        case 1:
            if(preco <= 25 && preco > 0){
                valor = preco + ( preco * 0.05);
                
            }else {
                valor = preco + (preco * 0.12);
            }

         break;

        case 2:
            if(preco <= 25 && preco > 0){
                valor = preco + ( preco * 0.08);
                
            }else {
                valor = preco + (preco * 0.15);
            }

         break;

        case 3:
            if(preco <= 25 && preco > 0){
                valor = preco + ( preco * 0.1);
                
            }else {
                valor = preco + (preco * 0.18);
            }

         break;
    }

    if((situacao == 1 ) || (categoria ==2) ){
        valor = valor + ( valor * .08);
    }else{
        valor = valor + ( valor * .05);
    }

    if(valor <= 50 ){
        printf("o preco esta barato ");

    }else if (valor > 50 && valor < 120){
        printf("o preco esta normal");
    
    }else{
        printf("o preco esta caro");

    }
   
    




    return 0 ;
}