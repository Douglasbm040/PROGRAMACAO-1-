#include<stdio.h>

void main(){
    int numero,multiplo , verificador ;
    printf("digite um numero inteiro positivo : \n");
    scanf ("%d",&numero);
    for (int i = 0; i < 6; i++)
    {
        multiplo = i * 3 ;
        printf("%d",multiplo);
    }

    verificador = numero % 3 ;
    if (verificador != 0 )
    {
        printf("valor %d nao e multiplo de 3 ");
    }else {
        printf("valor %d eh multiplo de 3 ");
    }

}