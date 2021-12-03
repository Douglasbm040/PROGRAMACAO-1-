#include <stdio.h>

int main (){
    int codigo_de_procedencia ;
    printf("digite o codigo de procedencia : ");
    scanf("%d",&codigo_de_procedencia);

    if (codigo_de_procedencia == 1){
        printf("Sul");
    }else if (codigo_de_procedencia== 2){
        printf("Norte");

    }else if (codigo_de_procedencia== 3){
        printf("Leste");

    }else if (codigo_de_procedencia== 4){
        printf("Oeste");

    }else if (codigo_de_procedencia == 5 || codigo_de_procedencia == 6 ){
        printf("Sudeste");

    }else if (codigo_de_procedencia >=7 && codigo_de_procedencia <= 9){
        printf("Nordeste");

    }else if (codigo_de_procedencia>= 10 && codigo_de_procedencia <=20 ){
        printf("Centro-oeste");

    }else if (codigo_de_procedencia >= 21 && codigo_de_procedencia <= 30 ){
        printf("Nordeste");

    }else {
        printf("codigo invalido ! ");

    }





    return 0 ;
}