#include<stdio.h>

typedef struct 
{
    char nome[20];
    char email[30];
    int telefone;
}agendatelefonica;





void main(){

    agendatelefonica listatelefonica[10];

    for (int i = 0; i < 10 ; i++)
    {
        printf("digite o nome : ");
        scanf("%s",&listatelefonica[i].nome);
        printf("digite o email : ");
        scanf("%s",&listatelefonica[i].email);
        printf("digite o telefone : ");
        scanf("%s",&listatelefonica[i].telefone);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("|| nome || email || telefone ||");
        printf("%s || %s || %s ",&listatelefonica[i].nome ,listatelefonica[i].email, listatelefonica[i].telefone);
    }
    



}