#include<stdio.h>

#define desconto 3
int main(){
    int num_quest, horas,x   ;
    float nota,valor,imposto;

    printf("num questoes : ");
    scanf("%d",&num_quest);
    printf("num de horas");
    scanf("%d",&horas);
    printf("nota do aluno: ");
    scanf("%f",&nota);
    x =(75 * num_quest );
    valor = x - ( x * horas * desconto)/100;
    //printf("%f",valor);

    if (nota <= 2.0){
        imposto = 0 ;
    }else if(nota<=4.0){
        imposto = 0.05 ;
    }else if (nota <= 6.0){
        imposto = 0.1 ;
    }else if(nota <= 8.0){
        imposto = 0.15 ;
    }else if (nota > 8.0 ){
        imposto = 0.20 ;
    }
    valor = valor+( valor * imposto);
    printf("%f",valor);




    return 0 ;
}