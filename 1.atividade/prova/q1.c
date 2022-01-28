#include<stdio.h>
//! O governo do ES pretende criar uma ferrovia que liga Alegre-ES com Cachoeiro do
//! Itapemirim-ES. A intenção do governo é cobrar o valor de R$ 10,00 de cada passageiro. As
//! estimativas de custo indicam que cada vagão usado na viagem terá custo fixo de R$ 200,00.
//! Sabendo que a capacidade máxima em cada vagão é de 40 passageiros, faça um programa
//! em C que recebe como entrada o número de passageiros interessados na viagem. O seu
//! programa deve informar como saída o número de vagões necessários e o lucro (ou
//! prejuízo) que o governo do ES terá com a viagem.
#define passagem 10
#define custo 200
#define limite 40

int main (){
    int num_passageiros,qnt_vagoes=0;
    float valor ;
    printf("digite a quantidade de passsageiros : \n");
    scanf("%d",&num_passageiros);

    
    while(i > 40 ){
        i=num_passageiros - 40 ;
        qnt_vagoes ++ ;
        printf("%d %d ",qnt_vagoes,num_passageiros);

    }

    //valor_final= (num_passageiros * passagem) - (custo * qnt_vagoes) ;
    //printf("%d vagoes\n %d reais")












    return 0 ;
}