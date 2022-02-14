#include<stdio.h>
#define MAX 30

//! Faça um programa em C que leia um número inteiro A e uma matriz V[30][30] de inteiros. Conte
//! quantos valores iguais a A estão na matriz e mostre o resultado.

int main(){
    int v[MAX][MAX],i,busca,j,contador=0;


    for(i = 0; i < MAX ; i++){

        for(j = 0 ; i < MAX ; j++){
            printf("digite um valor : ");
            scanf("%d",&v[i][j]);
        }
        
    }

    printf('digite  valor de busca : ');
    scanf("%d",&busca);


    for(i = 0 ; i < MAX ; i ++ ){
        
        for(j = 0 ; j < MAX ; j ++ ){
            if(busca == v[i][j]){
                contador = contador + 1 ; 
            }
        }
    }
    printf("este numero repetiu %d",contador);


















    return 0 ;
}