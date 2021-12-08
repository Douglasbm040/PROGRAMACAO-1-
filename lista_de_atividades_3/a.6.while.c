#include <stdio.h>

int main(){
        int fat, n;
    
    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);
    fat = 1;

    while( n > 1){
        fat = fat *  n ;    
        n = n - 1 ;
    
    }
    printf("\nFatorial calculado: %d", fat);
    
    
    
    return 0;
    
}