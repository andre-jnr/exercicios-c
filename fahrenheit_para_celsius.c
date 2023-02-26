#include <stdio.h>
#include <locale.h>

/*
  Escreva um algoritmo para ler uma temperatura em graus Fahrenheit,
  calcular e escrever o valor correspondente em graus Celsiu

  - C = (f - 32) * 5 / 9

  Ex: 100°C = 212F
*/

int main()
{
  setlocale(LC_ALL, "portuguese");
  int fahrenheit, celsiu;

  printf("Digite uma temperatura em fahrenheit: ");
  scanf("%i", &fahrenheit);

  celsiu = (fahrenheit - 32) * 5 / 9;

  printf("Sua temperatura em celsius: %i°C", celsiu);

  return 0;
}