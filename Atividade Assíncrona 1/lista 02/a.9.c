#include <stdio.h>


int main(){
    float valor_final,custo_de_fabrica;
    printf("digite o valor de custo da fabrica : ");
    scanf("%f",&custo_de_fabrica);
    
    printf("%.f \n",custo_de_fabrica);
    
    if(custo_de_fabrica < 12000 && custo_de_fabrica > 0 ){
       valor_final = custo_de_fabrica + (custo_de_fabrica * 0.05 );
       printf("1 o custo final e : %.2f",valor_final);

    }else if (custo_de_fabrica >= 12000 && custo_de_fabrica <= 25000){
        valor_final = custo_de_fabrica + (custo_de_fabrica * 0.1) + (custo_de_fabrica * 0.15); 
        printf("2 o custo final e : %.2f",valor_final);

    }else if(custo_de_fabrica > 25000) {
        valor_final =  custo_de_fabrica + (custo_de_fabrica * 0.15) + (custo_de_fabrica * 0.20); 
        printf("3 o custo final e : %.2f",valor_final);

    }else {
        printf("valor invalido :");
    }


    return 0 ;
}