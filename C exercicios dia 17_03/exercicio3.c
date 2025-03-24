//3.Faça um programa que fornece o valor para o pagamento de comissão de
//vendedores, levando-se em consideração que sua comissão será de 5% do total
//da venda. O usuário irá informar somente o total da venda.

#include <stdio.h>

int main(){
    float comissao = 0.05;
    int venda;
    float total;

    printf("Quantas vendas de 10 reais voce realizou? ");
    scanf("%d", &venda);

    total = (venda * 10) * comissao;

    printf("Voce vai receber %f de comissao", total);

}