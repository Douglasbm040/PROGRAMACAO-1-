#include <stdio.h>


int main(){
    float salario, aumento;
    printf("digite o seu salario : ");
    scanf("%f",&salario);

    if ( salario < 300 && salario > 0){
        aumento= (salario * .15);
        salario = salario + aumento;
        printf("o valor do aumento e %.2f e o novo salario e %.2f",aumento,salario);
    
    }else if (salario >= 300 && salario < 600 ){
        aumento= (salario * .10);
        salario = salario + aumento;
        printf("o valor do aumento e %.2f e o novo salario e %.2f",aumento,salario);
    

    }else if (salario >= 600 && salario < 900){
        aumento= (salario * .5);
        salario = salario + aumento;
        printf("o valor do aumento e %.2f e o novo salario e %.2f",aumento,salario);
    
    }else if (salario > 900){
        aumento= (salario * 0);
        salario = salario + aumento;
        printf("o valor do aumento e %.2f e o novo salario e %.2f",aumento,salario);
    
    }else {
       printf("entrada invalida !");
    }







    return 0 ;
}