//1.Faça um programa que calcule a idade de uma pessoa, sendo que o ano atual e o
//ano do nascimento da pessoa são fornecidos pelo usuário (considere que a
//pessoa já fez aniversário nesse ano). Apresentar a idade da pessoa depois de
//calculada.
#include <stdio.h>

int main(){
    int idade;
    int ano;
    int nasc;

    printf("Em qual anos estamos? ");
    scanf("%d", &ano);

    printf("Em que ano voce nasceu? ");
    scanf("%d", &nasc);

    idade = ano - nasc;

    printf("Voce tem exatamente %d anos de idade", idade);

     return 0;
}
