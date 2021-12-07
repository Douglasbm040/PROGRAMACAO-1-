#include<stdio.h>

//! 25) Faça um programa em C que leia o nome, o sexo (M ou F) e a idade de uma pessoa.
//! O seu algoritmo deve imprimir o nome e a mensagem “MENOR” para aqueles que
//! possuem menos de 18 anos. No caso de homens com mais de 65 anos deve se exibir o
//! nome e a mensagem “APOSENTADO”, no caso de mulheres com mais de 60 anos deve
//! se exibir o nome e a mensagem “APOSENTADA”. Nos demais casos, nada deve ser
//! exibido.





int main(){
    char sexo ;
    int idade ;
    char nome[20];
    printf("digite seu nome : ");
    scanf(" %s",nome);
    printf("digite sua idade : ");
    scanf(" %d",&idade);
    printf("digite seu sexo [m]masculino [f]feminino : ");
    scanf(" %c",&sexo);
      
    if(idade < 18 ){
        printf("%s menor",nome);
        
    }else if (sexo == 'm' && idade >= 65){
        printf("%s aposentado ",nome);
    }else if(sexo == 'f'&& idade >= 60){
        printf("o sexo e feminino ");
    }






    return 0 ;
}