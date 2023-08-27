/*
  Um armazém trabalha com 100 mercadorias diferentes identificadas pelos
  números inteiros de 1 a 100. O dono do armazém anota a quantidade de
  cada mercadoria vendida durante o mês. Ele tem uma tabela que indica,
  para cada mercadoria, o preço de venda. Escreva um algoritmo para
  calcular o faturamento mensal do armazém. A tabela de preços é fornecida
  seguida pelos números das mercadorias e as quantidades vendidas. Quando
  uma mercadoria não tiver nenhuma venda, é informado o valor zero no lugar
  da quantidade.
*/
#include <stdio.h>

int main()
{
  int qtdeVendida[100];
  float precos[100];
  float faturamento = 0;

  for (int i = 0; i < 100; i++)
  {
    printf("Digite a quantidade vendida do item %d: \n", i + 1);
    scanf("%i", &qtdeVendida[i]);

    printf("Digite o preço do item %d: \n", i + 1);
    scanf("%f", &precos[i]);

    faturamento += qtdeVendida[i] * precos[i];
  }

  printf("FATURAMENTO: R$%.2f \n", faturamento);

  return 0;
}