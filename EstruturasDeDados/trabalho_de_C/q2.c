//2. Elabore um programa que solicite ao usu´ario entrar com o valor do dia, mˆes e ano (inteiros).
//Em seguida, imprima os valores lidos separados por uma barra (/).


#include <stdio.h>

int main()
{
    int dia , mes , ano ;
    printf("digite o dia : \n");
    scanf("%d",&dia);
    printf("digite o  : mes\n");
    scanf("%d",&mes);
    printf("digite o ano : \n");
    scanf("%d",&ano);
    printf("%d/%d/%d",dia , mes , ano);
    return 0;
}