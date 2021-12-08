#include<stdio.h>

int main (){
    int i ;

    for ( i = 1 ; i <= 1000 ; i++ ){
        printf(" %d \n",i);
        if( (i % 10) == 0 ){
            printf(" %d este numero divisivel por 10 \n", i );

        }
    }






    return 0 ;
}