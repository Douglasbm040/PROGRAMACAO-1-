#include<stdio.h>
//! Faça um programa em C que leia um vetor G de 10 elementos char que representa o gabarito de uma
//! prova. A seguir, leia o vetor de respostas (R) do aluno e conte o número de acertos. Mostre o número
//! de acertos do aluno e uma mensagem APROVADO, se o valor for maior ou igual a 7; e mostre uma
//! mensagem de REPROVADO, caso contrário.
#define NUMQUESTOES 10  

int main(){
    int i , contador = 0 ;
    char gabarito[NUMQUESTOES],respostas[NUMQUESTOES];

    //!gabarito
    for(i=0 ; i< NUMQUESTOES ; i++){
        printf("digite o gabarito da questao %d : ", i + 1);
        scanf("%d",&gabarito[i]);

    }

    //! repostas
    for(i=0 ; i< NUMQUESTOES ; i++){
        printf("digite o respostas da questao %d : ", i + 1);
        scanf("%d",&respostas[i]);
    }

    //!correcao
    for(i=0 ; i< NUMQUESTOES ; i++){
        if(gabarito[i]== respostas[i]){
            contador =  contador + 1 ;
        }
    }

    if( contador >= 7){
        printf("aprovado");
    }else{
        printf("reprovado");
    }






    return 0 ;
}