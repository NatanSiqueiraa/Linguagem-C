//5.Faça um programa que calcule a área de uma superfície retangular, cujas medidas
//de comprimento e largura serão fornecidas pelo usuário.

#include <stdio.h>

int main(){
    int comprimento;
    int largura;
    int area;

    printf("Qual e o comprimento do retangulo? ");
    scanf("%d", &comprimento);

    printf("Qual e a largura do retangulo? ");
    scanf("%d", &largura);

    area = comprimento * largura;

    printf("A area do retangulo e %d", area);

    return 0;

}