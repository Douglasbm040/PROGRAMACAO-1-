#include <stdio.h>


int main(){
    float num_1, num_2 , resultado ;
    int opcao ;

    printf("digite um numero : ");
    scanf("%f",&num_1);  
    printf("digite um numero ");
    scanf("%f",&num_2);
    printf("escolha opcao para realizar operacao : \n");
    printf("[1] media\n[2] diferenca\n[3] produto\ndigite o numero da opcao : ");
    scanf("%d",&opcao);
    
    if (opcao == 1 ){
        resultado = (num_1 + num_2 )/2 ;
        printf("o resultado da opcao media e : %.3f",resultado);
    }else if (opcao == 2 ){
        resultado = num_1 - num_2 ;
        printf("o resultado da opcao diferenca e : %.3f",resultado);
    }else if (opcao == 3 ) {
        resultado = num_1 * num_2 ;
        printf("o resultado da opcao produto e : %.3f",resultado);        
    }else {
        printf("opcao invalida ");
    }
    
    


    return 0 ;
}