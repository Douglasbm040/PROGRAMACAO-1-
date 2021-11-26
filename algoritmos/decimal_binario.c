#include<stdio.h>

int main(){
    int decimal,binario;
    printf("digite o decimal : ");
    scanf("%d",&decimal);
    //coeficiente=decimal/2;
    do{
      binario=decimal%2;
      decimal=decimal/2;
      //printf("decimal %d \n",decimal);
      printf("%d ",binario);
    }while(decimal >= 1);
   return 0 ;
}
