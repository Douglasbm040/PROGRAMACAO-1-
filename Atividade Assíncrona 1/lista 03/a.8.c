#include <stdio.h>
int main(){

   int x,in, out, total, final = 0;

    printf("Andares: "); 
    scanf("%d",&x);
    printf("--------------\n");

 

    for ( int i = 0 ; i < x ; i++){

        printf("Entrada[%d]: ",i+1);
        scanf("%d",&in );
        printf("Saida[%d]: ",i+1);
        scanf("%d",&out );

        total  = in + out ;

        printf("TOTAL[%d] %d\n",i+1,total );

            if (total >15){

                printf("Excesso de Passageiros!\n");
               printf("Deve(m) Sair: %d\n", total -15);

                final += 15 - in ;

            }

            else{
                final+=in ;
            }

        printf("--------------\n");

    }

   printf("Desceram: %d\n", final);

   return 0;

}