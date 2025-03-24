#include <stdio.h>

int main(){
    int preco_fabri;
    int distribuidor;
    int imposto;
    int lucro_distri;

    printf("Qual é o valor de fabrica do produto? ");
    scanf("%i", &preco_fabri);

    printf("Qual é o porcentual de lucro do distribuidor? ");
    scanf("%i", &distribuidor);

    printf("Qual é percentual de imposto do produto? ");
    scanf("%i", &imposto);

    lucro_distri = (preco_fabri * (imposto / 100)) * distribuidor / 100;

    printf("%i", lucro_distri);






}