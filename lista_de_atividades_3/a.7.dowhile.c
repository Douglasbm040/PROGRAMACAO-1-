#include<stdio.h>

int main (){
    int N , R ;
    int i = 2 ;

    printf("digite um numero : ");
    scanf("%d", &N);

    R = 1;
    
    do{
        R = R * 2;
        printf("%d\n",R);
        i++;
    }while(i < N);





    return 0 ;
}