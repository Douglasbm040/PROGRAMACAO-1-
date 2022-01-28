# include <stdio.h>


int main(){
    float nota_1 , nota_2, media;
    printf("digite a nota : ");
    scanf("%f",&nota_1);
    printf("digite a nota : ");
    scanf("%f",&nota_2);

    media = (nota_1 + nota_2 )/2 ;

    if (media <= 0 | media < 4){
        printf("reprovado ! ");

    } else if (media <= 4 | media < 7) {
        printf("exame !");
    }else{
        printf("aprovado !");
    }

    return 0 ;
}