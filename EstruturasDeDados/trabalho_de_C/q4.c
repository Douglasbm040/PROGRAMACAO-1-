#include <stdio.h>






int main()
{   
    int x,y,z,operacao,geometric;
    float valorfinal;
    printf("digite um numero (x) : \n");
    scanf("%d",&x);
    printf("digite um numero (y): \n");
    scanf("%d",&y);
    printf("digite um numero (z): \n");
    scanf("%d",&z);
    printf("digite a operacao :(1) geometrica ,(2) ponderanda ,(3) harmonica ,(4) aritmetrica ");
    scanf("%d",&operacao);
    

    if (operacao == 1 )
    {
        printf("opercao geometrica :");
        valorfinal = x * y * z ;
    }
    else if (operacao == 2 )
    {
        printf("opercao ponderada : ");
        valorfinal = (x+(2*y)+(3*z))/6 ;
    }

    else if (operacao == 3 )
    {
        printf("operacao harmonica ");
        valorfinal = 1 / ((1/x)+(1/y)+(1/z));
    }else if (operacao == 4 )
    {
        printf("operacao aritmetica ");
        valorfinal =  (x+y+z)/3 ;
    }
    else
    {
        printf("operacao nao encontrada  :( ");
    }
    printf("media :  %f",valorfinal);
    
    
    return 0;
}