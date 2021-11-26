#include<stdio.h>


int main(){
    float nota_1,nota_2, nota_3, nota_4 , media ;
    
    printf("digite a nota : ");
    scanf("%f",&nota_1);
    printf("digite a nota : ");
    scanf("%f",&nota_2);
    printf("digite a nota : ");
    scanf("%f",&nota_3);
    printf("digite a nota : ");
    scanf("%f",&nota_4);
    
    media = (nota_1 + nota_2 + nota_3 + nota_4)/4;
    printf("sua media foi %.2f voce foi ",media);
    if (media >= 7){
        printf("aprovado !");
    }
    else {
        printf("reprovado !");
    }





    return 0 ; 
}