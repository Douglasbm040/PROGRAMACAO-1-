#include <stdio.h>

int main(){
    int num_1,num_2;
  
    printf("digite o numero : ");
    scanf("%d",&num_1);
    printf("digite o numero : ");
    scanf("%d",&num_2);

    if (num_1 > num_2 ){
        printf("%d e maior que %d",num_1 ,num_2);
    }else if(num_1 == num_2){
        printf("%d e igual a %d", num_1 ,  num_2);
    }
    else{
        printf("%d e maior que %d",num_2,num_1);
    }









    return 0 ;
}