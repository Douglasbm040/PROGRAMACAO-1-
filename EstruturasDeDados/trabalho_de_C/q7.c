#include<stdio.h>

void main (){
    int matriz[5][5] ;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 ; j++)
        {
            printf("digite um valor inteiro : ");
            scanf("%d",&matriz[i][j]);

        }
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 ; j++)
        {
            if (matriz[i][j]% 2 != 0)
            {
                printf("valor : %d , indice linha : %d ,indice da coluna : %d ",matriz[i][j] , i , j);
            }
            
        }
    }
    



}                                                                       