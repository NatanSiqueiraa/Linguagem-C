
//carro novo = preço de fábrica(percentual do lucro do distribuidor) + impostos aplicados ao preço de fábrica 
#include <stdio.h>

int main(){
    float veiculoF;
    float distribuidor;
    float imposto;
    float custo_consumidor;

    printf("Qual e o preco de fabrica do veiculo? ");
    scanf("%f", &veiculoF);

    printf("Diga qual e o percentual de lucro do consumidor: ");
    scanf("%f", &distribuidor);

    printf("Qual e o percentual de imposto: ");
    scanf("%f", &imposto);

    distribuidor = distribuidor / 100;
    imposto = imposto / 100;

    custo_consumidor = veiculoF + (veiculoF * distribuidor) + (veiculoF * imposto );
    distribuidor = veiculoF + (veiculoF * distribuidor) - veiculoF;
    imposto = veiculoF + (veiculoF * imposto) - veiculoF;

    printf("O valor que corresponde ao lucro do distribuidor e %f\n", distribuidor);

    printf("O valor que corresponde aos impostos sao %f\n", imposto);

    printf("O custo do consumidor e %f\n", custo_consumidor);


    return 0;

}

