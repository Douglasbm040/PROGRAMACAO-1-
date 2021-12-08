#include<stdio.h>

int main (){
    
    int i ,num, maior ;
    
    printf("digite um numero : ");
    scanf("%d",&num);
    
    i = num ;
    maior = num;

    
    while(i != 0 ){
        printf("digite um numero : ");
        scanf("%d",&num);
        i = num ;

        if (num > maior){
            maior =  num ;
        }
    }
    printf("o %d esta sendo o valor maior ",maior);






    return 0 ;
}