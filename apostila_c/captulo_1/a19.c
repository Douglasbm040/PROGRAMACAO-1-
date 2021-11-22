#include <stdio.h>

int main(){
    float  prestacao_vencida,taxa , periodo ,valor_final    ;
    printf("digite o valor da prestacao vencida : ");
    scanf("%f",&prestacao_vencida);
    printf("digite a taxa periodica de juros : ");
    scanf("%f",&taxa);
    printf("digite o periodo de atrazo : ");
    scanf("%f",&periodo);
    
    valor_final = prestacao_vencida * (1 + taxa/100 * periodo);
    
    printf("o valor final e %.2f",valor_final);
    return 0 ;
}