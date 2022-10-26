// Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma
// taxa diferente de imposto sobre o produto. Fa¸ca um programa em que o usu´ario entre com o
// valor e o estado de destino do produto e o programa retorne o pre¸co final do produto acrescido
// do imposto do estado em que ele ser´a vendido. Se o estado digitado n˜ao for v´alido, mostrar´a
// uma mensagem de erro.

#include <stdio.h>

int main()
{   float valor;
    char estado[2];
    printf("digite o valor :");
    scanf("%f",&valor);
    printf("digite a sigla do estado : ");
    scanf("%s",&estado);

    if (estado == "MG")
    {
        valor = valor + (valor*0.07);
    }
    else if (estado == "SP")
    {
        valor = valor + (valor*0.12);
    }
    else if (estado == "RJ")
    {
        valor = valor + (valor*0.15);
    }
    else if (estado == "MS")
    {
        valor = valor + (valor*0.08);
    }

    
    
    printf("valor final e : %f",valor);


    return 0;
}