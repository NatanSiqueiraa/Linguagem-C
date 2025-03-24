//4.Faça um programa que peça ao usuário para digitar três números e calcule e
//mostre a média entre eles.

#include <stdio.h>

int main(){
    int n1;
    int n2;
    int n3;
    int resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    resultado = (n1 + n2 + n3) / 3;

    printf("A media entre os numero eh: %d", resultado);

    return 0;

}