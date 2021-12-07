#include<stdio.h>
#define hora_limite 50 

int main(){
    int cpf,horas,horas_extras,salario;

    printf("digite o seu cpf : ");
    scanf("%d",&cpf);
    printf("digite o seu suas horas trabalhadas : ");
    scanf("%d",&horas);

    horas_extras = horas - hora_limite ;
    if(horas_extras > 0){
        salario = horas_extras * 20 + (hora_limite * 10);
        printf("%d",salario);
    }else{
        salario = horas * 10 ;
        printf("%d",salario);
    }
    











    return 0 ; 
}