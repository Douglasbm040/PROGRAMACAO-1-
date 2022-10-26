#include<stdio.h>

void main(){

    int valores[20],inverso[20];
    for (int i = 0; i <= 19; i++)
    {
        printf("digite o valor : ");
        scanf("%d",&valores[i]);
    }
    
    for (int i = 0; i <= 19; i++)
    {
        inverso[i]= valores[19-i];
        
    }


    for (int i = 0 ; i <= 19  ; i++)
    {  
        printf("%d",inverso[i]);        
    }
    



}