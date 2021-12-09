//! A EDP faz a leitura mensal dos medidores de consumo. Para cada consumidor, são digitados os seguintes
//! dados:
//!      Número do Consumidor
//!      Quantidade de kWh consumidos durante o mês
//!      Tipo (código) do consumidor:
//!         1 – Residencial (R$ 0,3 por kWh)
//!         2 – Comercial (R$ 0,5 por kWh)
//!         3 – Industrial (R$ 0,7 por kWh)
//! Os dados devem ser lidos até que seja encontrado um consumidor com número 0 (zero). Calcular e
//! Imprimir:
//!      O custo Total para cada consumidor
//!      Total consumido por cada tipo de consumidor
//!      Média de consumo geral
#include <stdio.h>
int main(){
    int num_do_consumidor , i, contador = 0  ;
    float quantidade_de_khw_consumida_mensal , soma , fatura , soma_residencial, soma_comercial, soma_industrial ,media;
    printf("===========================================================\n");
    while(i >= 1 ){
        contador ++;
        printf("digite o seu codigo [ 1- residencial 2-comercial 3- industrial ]: ");
        scanf(" %d",&num_do_consumidor);
        
        if(num_do_consumidor >=1 && num_do_consumidor <= 3){
            printf("digite a quantidade de khw consumida no mes: ");
            scanf(" %f",&quantidade_de_khw_consumida_mensal);
        }
        

        
        i = num_do_consumidor ;

        switch (num_do_consumidor ){
            case 1 :
                fatura =  quantidade_de_khw_consumida_mensal * 0.3;
                printf("o valor sua conta residencial e : %.2f\n",fatura);
                soma_residencial += fatura ;
                soma += soma_residencial ;
            break;

            case 2 :
                fatura =  quantidade_de_khw_consumida_mensal * 0.5 ;
                printf("o valor sua conta comercial e : %.2f\n",fatura);
                soma_comercial += fatura ;
                soma += soma_comercial;
            break;

            case 3 :
                fatura =  quantidade_de_khw_consumida_mensal * .7;
                printf("o valor sua conta industrial e : %.2f\n",fatura);
                soma_industrial += fatura ;
                soma += soma_industrial ; 
            break;
        }
        //soma += soma_comercial + soma_industrial + soma_residencial ;
        printf("==========================================================================================\n");
    }
    media = soma / (contador - 1);
    printf("quantidade de ciclos: %d || soma: %.2f||media: %.2f || comercial: %.2f || residencial: %.2f || industrial: %.2f",contador,soma,media,soma_comercial,soma_residencial,soma_industrial);
    return 0 ;
}