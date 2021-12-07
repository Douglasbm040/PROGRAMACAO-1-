#include<stdio.h>
//! 24) Faça um programa em C que receba como entrada três números reais e informe se
//! estes números podem ou não representar as medidas de um triângulo. Lembrando que
//! em todo triângulo a medida de cada lado tem que ser menor que a soma das outras duas
//! medidas.


int main (){
    float lado_1,lado_2,lado_3;

    printf("digite a medida do lado: ");
    scanf("%f",&lado_1);
    printf("digite a medida do lado: ");
    scanf("%f",&lado_2);
    printf("digite a medida do lado: ");
    scanf("%f",&lado_3);

    if (((lado_1 + lado_2) > lado_3) && ((lado_1 + lado_3) > lado_2) && ((lado_3 + lado_2) > lado_1)){
        printf("esta medidas pertencem a de um trianagulo");

    }else{
        printf("esta medidas nao pertencem a de um triangulo");

    }



    return 0 ;
}