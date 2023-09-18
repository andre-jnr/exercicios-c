#include <stdio.h>

/*
  O custo de um carro novo ao consumidoréa soma do
  custo de fábrica com a porcentagem do distribuidore
  dos impostos (aplicados ao custo de fábrica). Supondo
  que O percentual do distribuidorseja de 28%e os
  impostos de 45%, escrever um algoritmo para lero
  custo de fábrica de um carro, calculareescrevero
  custo final ao consumidor.
*/

int main(void)
{
  float custo, percentual_distribuidor;
  float percentual_impostos, valor_carro;

  float valor_impostos, valor_distribuidor;

  printf("Informe o custa da fábrica: ");
  scanf("%f", &custo);

  printf("Informe o percentual do distribuidor: ");
  scanf("%f", &percentual_distribuidor);

  printf("Informe o percentual de impostos: ");
  scanf("%f", &percentual_impostos);

  valor_impostos = custo * percentual_impostos / 100;
  valor_distribuidor = custo * percentual_distribuidor / 100;

  valor_carro = custo + valor_impostos + valor_distribuidor;

  printf("O valor do carro: %.2f", valor_carro);

  return 0;
}