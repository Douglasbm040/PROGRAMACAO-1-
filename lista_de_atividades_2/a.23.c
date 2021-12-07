#include <stdio.h>


int main(){
    int num_horas_extras, num_horas_falta;
    float resultado_horas ;

    printf("digite o numero de horas extras : ");
    scanf("%d",&num_horas_extras);
    printf("digite o numero de horas falta : ");
    scanf("%d",&num_horas_falta);

    resultado_horas =  (num_horas_extras) - (2/3) * ((num_horas_falta));

    if(resultado_horas > 2400){
        printf("o valor da gratificacao e : 500");
    }else if (resultado_horas >= 1800 && resultado_horas < 2400 ){
        printf("o valor da gratificacao e : 400");
    }else if (resultado_horas >=1200 && resultado_horas < 1800) {
        printf("o valor da gratificacao e : 300");
    }else if (resultado_horas >=600 && resultado_horas < 1200){
        printf("o valor da gratificacao e : 200");
    }else if (resultado_horas < 600 && resultado_horas > 0 ){
        printf("o valor da gratificacao e : 100");
    }else{
        printf("valor de horas invalida : ");
    }
    






    return 0 ;
}