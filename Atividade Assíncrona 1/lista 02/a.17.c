#include <stdio.h>
#define idade_limite 120 
int main(){
    int idade ;

    printf("digite sua idade : ");
    scanf("%d",&idade);

    if(idade < 18 && idade > 0 ){    
        printf("menoridade");
    }else if(idade >= 18 && idade < idade_limite ){
        printf("maioridade");
    
    }else {
        printf("idade incorreta ");
    }


    return 0 ;
}