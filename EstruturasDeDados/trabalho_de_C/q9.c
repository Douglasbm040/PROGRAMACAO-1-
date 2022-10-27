#include<stdio.h>

float calculamedia(float vetornotas[4]){
    float soma = 0 , media; 
    for (int i = 0; i < 4; i++)
    {
        soma += vetornotas[i];
    }
        media = soma / 4;
    
    return media ;
    

}



void main(){
    float vetornotas[4] ;

for (int i = 0; i < 4; i++)
{
    printf("digite a nota da prova : ");
    scanf("%f",&vetornotas[i]);
}

calculamedia(vetornotas);




}