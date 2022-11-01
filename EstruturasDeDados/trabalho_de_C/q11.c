#include<stdio.h>


void main (){
    int inteiro, *inT;
    float decimal, *dec;
    char letras[3], *let;

    inT = &inteiro;
    dec = &decimal;
    let = &letras;
    
    printf("digite o valor inteiro : ");
    scanf("%d",&inteiro);     
    printf("digite o decimal: ");
    scanf("%f",&decimal);
    printf("digite ate 3 letras: ");
    scanf("%s",&letras);
    
    printf("valores digitados : ");
    printf("inteiro %d || decimal %f || letras %s", inteiro ,decimal ,letras);

    *inT = 2014 ;
    *dec = 9.99 ;
    *let = "Y"  ;

    printf("valores modificados : ");
    printf("inteiro %d || decimal %f || letras %s", inteiro ,decimal ,letras);


}