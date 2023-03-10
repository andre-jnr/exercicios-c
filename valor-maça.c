/*
  As maças custam R$1,30 cada se forem compradas menos de uma dúzia,
  e R$1,00 se forem comprados pelos menos 12. Escreva um programa que
  leia o número de maças compradas, calcule e escreva o custo total da compra.
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
  int maça;

  setlocale(LC_ALL, "portuguese");
  printf("Digite quantas maças vai levar: ");
  scanf("%i", &maça);

  if (maça > 12)
  {
    printf("cada maça custa: R$1,00\n", maça);
    printf("valor a pagar: R$%.2f", maça * 1.00);
  }
  else
  {
    printf("cada maça custa: R$1,30\n", maça);
    printf("valor a pagar: R$%.2f", maça * 1.30);
  }
  return 0;
}