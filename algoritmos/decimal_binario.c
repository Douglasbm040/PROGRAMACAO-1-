#include<stdio.h>

int main(){
    int decimal,binario;
    printf("digite o decimal : ");
    scanf("%d",&decimal);
    //coeficiente=decimal/2;

  while(decimal >1){
      binario=decimal%2;

      decimal=decimal/2;
      //printf("decimal %d \n",decimal);
      printf("%d ",binario);
      if (decimal == 1){
        printf("%d",decimal);
      }
   }
   return 0 ;
}
