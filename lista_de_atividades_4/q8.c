#include<stdio.h>
#define MAX 1





int main(){

    int i ,v1[MAX],v2[MAX],a,b,som ,mult , sub, div;


    for (i=0 ; i < MAX ; i++ ){
        printf("digite o valor [vetor 1] : ");
        scanf(" %d",&v1[i]);
    }

    for (i=0 ; i < MAX ; i++ ){
        printf("digite o valor [vetor 2]: ");
        scanf(" %d",&v2[i]);
    }

    for (i=0 ; i < MAX ; i++ ){
        a = v1[i] ;
        b = v2[i] ;
        som = a + b ;
        mult = a * b ;
        sub = a - b;
        div = a / b ;
        printf("| %d * %d = %d | %d + %d = %d | %d - %d = %d | %d / %d = %d |\n", mult , som , sub , div );
        printf("{ vetor 1 %d } | | {vetor 2 %d}",v1[i],v2[i]);
    }
























    return 0 ;
}