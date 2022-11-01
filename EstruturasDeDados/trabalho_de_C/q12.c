#include<stdio.h>

void main(){
    float *temp[24];
    for (int i = 0; i < 24; i++)
    {
        printf("digite a temperatura em kelvin : ");
        scanf("%f",&temp[i]);
    }
    for (int i = 0; i < 24; i++)
    {
        temp[i] = (temp[i] - 273,15) * (9/5) + 32 ;
        printf("%f",temp[i]);
    }
    
}