#include <stdio.h>


int main(){
   float saldo , valor_do_credito;

   printf("digite o seu saldo : ");
   scanf("%f",&saldo);
    
    
   if ( saldo > 400  ){    
       valor_do_credito = saldo + (saldo * 0.3  );
       printf("1 o seu saldo e %.2f o valor do credito e  %.2f ",saldo,valor_do_credito);
   
   }else if(saldo <= 400 && saldo > 300 ) {       
       valor_do_credito = saldo + (saldo * 0.25 );
       printf("2 o seu saldo e %.2f o valor do credito e  %.2f ",saldo,valor_do_credito);
   
   }else if (saldo <= 300 && saldo > 200 ){
       valor_do_credito = saldo + (saldo * 0.2 );
       printf("3 o seu saldo e %.2f o valor do credito e  %.2f ",saldo,valor_do_credito);
   
   }else if ( saldo <= 200 && saldo > 0 ){
       valor_do_credito = saldo + (saldo * 0.1 );
       printf("4 o seu saldo e %.2f o valor do credito e  %.2f ",saldo,valor_do_credito);
   }

    return 0;
}