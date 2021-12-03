#include<stdio.h>
#define limite_de_idade 120
int main(){
    int idade ;
    float peso ;
    
    printf("digite a sua idade : ");
    scanf("%d",&idade);
    printf("digite o seu peso : ");
    scanf("%f",&peso);
    
    if (idade < 20 && idade > 0 ){
        if(peso < 60 && peso < 0){
            printf("9");
        }else if (peso >= 60 && peso < 90 ){
            printf("8");
        }else if (peso >= 90){
            printf("7");
        }
        
    }else if (idade >= 20 && idade < 50 ){
        if(peso < 60 && peso < 0){
            printf("6");
        }else if (peso >= 60 && peso < 90 ){
            printf("5");
        }else if (peso >= 90){
            printf("4");
        }

    }else if (idade >= 50 && limite_de_idade){
        if(peso < 60 && peso < 0){
            printf("3");
        }else if (peso >= 60 && peso < 90 ){
            printf("2");
        }else if (peso >= 90){
            printf("1");
        }

    }






    return 0 ;
}