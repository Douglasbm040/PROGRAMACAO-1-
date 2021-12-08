#include<stdio.h>

int main(){
    int N , R ;
    int i = 2 ;

    printf("digite um numero : ");
    scanf("%d", &N);

    R = 1;

    while(i < N){
        R = R * 2;
        printf("%d\n",R);
        i++;
    }
    
    




    return 0 ;
}