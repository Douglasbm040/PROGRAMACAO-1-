#include<stdio.h>
//! Faça um programa em C que leia o preço de compra e o preço de venda de 20 mercadorias. O
//! programa deve exibir quantas mercadorias proporcionam lucro menor que 10%, quantas proporcionam
//! lucro entre 10% e 20% e quantas mercadorias proporcionam lucro maior que 20%.

#define MAX  20

int main(){
    int i ,cont1=0,cont2=0,cont3=0; 
    float lucro,compras[MAX],vendas[MAX];


    for(i=0; i < MAX ; i++){
        printf('digite o valor da compra : ');
        scanf('%f',&compras[i]);
        printf('digite o valor da venda : ');
        scanf('%f',&vendas[i]);

    }

    for (i = 0 ; i < MAX ; i ++){
        lucro = (vendas[i] * 100) / compras[i];
        
        if(lucro < 110){
            cont1= cont1 + 1 ;
        }else if (lucro > 20){
            cont2 = cont2 + 1 ;
        }else if (lucro < 20){
            cont3 = cont3 + 1 ;
        }
    }
    printf("1.lucro < 10 %d\n2.lucro entre 10-20 %d\n3.lucro > 20 %d",cont1,cont2,cont3);










    return 0 ;
}
