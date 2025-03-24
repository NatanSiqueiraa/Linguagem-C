//2.Crie um programa que realiza a conversão de um valor em dólares para real. O
//programa recebe o valor em dólares e a cotação do dia e calcula o valor em reais.

#include <stdio.h>

int main(){
    int dollar;
    int real;
    
    printf("Quantos dollar voce tem? ");
    scanf("%d", &dollar);

    real = dollar * 5.77;

    printf("Voce tem %d reais", real);
    
    return 0;
}