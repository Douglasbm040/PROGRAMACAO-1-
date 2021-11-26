#include <stdio.h>

int main(){
    float num_1 , num_2, resultado ;
    int opcao ;

    printf("digite o primeiro valor : ");
    scanf("%f",&num_1);
    printf("digite o segundo valor : ");
    scanf("%f",&num_2);
    printf("selecione o numero para cada operacao : \n");
    printf("[1] media\n[2] diferenca\n[3] produto\n[4] Divisao\ndigite sua opcao : ");
    scanf("%d",&opcao);
    
    switch (opcao ) {
        case 1 :
            resultado = (num_1 + num_2) / 2 ;
            printf("o resultado da media e %.3f",resultado);
            break;        
        case 2 :
            resultado = num_1 - num_2;
            printf("o resultado da diferenca e %.3f",resultado);
            break;        
        case 3 :
            resultado = num_1 * num_2;
            printf("o resultado do produto e %.3f",resultado);
            break;
        case 4 :
        if(num_2!=0){
            resultado = num_1 / num_2;
            printf("o resultado da divisao e %.3f",resultado);
        }else{
            printf("nao é possivel dividir por zero ");
        }
            
            
            break;


















    }









    return 0 ;
}