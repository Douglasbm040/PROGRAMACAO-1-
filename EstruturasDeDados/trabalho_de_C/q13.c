#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int main(){
    int i, tam;
    float *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(tam * sizeof(int));

    if(vet){
        printf("Memoria alocada com sucesso!\n");
        for(i = 0; i < tam; i++)
            printf("digite o valor ");
            scanf("%f",*(vet + i) );

        for(i = 0; i < tam; i++)
            printf("%f ", *(vet + i));
        printf("\n");
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }

    return 0;
}