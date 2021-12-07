#include<stdio.h>
int main ( ){
    int num1, num2, num3, num4 , qnum1, qnum2, qnum3, qnum4 ;

    printf("digite um numero : ");
    scanf("%d",&num1);
    printf("digite um numero : ");
    scanf("%d",&num2);
    printf("digite um numero : ");
    scanf("%d",&num3);
    printf("digite um numero : ");
    scanf("%d",&num4);

    qnum1 = num1 * num1 ;
    qnum2 = num2 * num2 ;
    qnum3 = num3 * num3 ;
    qnum4 = num4 * num4 ;

    if(num3 >= 1000 ){
        printf("%d",num3);
    }else{
        printf("\n %d ao quadrado e %d\n %d ao quadrado e %d\n %d ao quadrado e %d\n %d ao quadrado e %d\n ",num1,qnum1,num2,qnum2,num3,qnum3,num4,qnum4);
    }

    return 0 ;
}