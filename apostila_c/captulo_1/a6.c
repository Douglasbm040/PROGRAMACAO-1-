# include <stdio.h>

int main(){
   int num, antecessor , sucessor;

   printf("digite um numero : ");
   scanf("%d",&num);
   antecessor= num -1 ;
   sucessor= num + 1 ;
   printf("antecessor e %d e o sucessor e %d ", antecessor,sucessor);
   return 0 ;
}