#include <stdio.h>
#include <locale.h>

/*
  Escreva um programa que lido um número, calcule
  o fatorial. EX: 5! = 5 * 4 * 3 * 2 * 1 = 120
*/

int main()
{
  setlocale(LC_ALL, "portuguese");
  int numero;

  printf("Digite um número: ");
  scanf("%i", &numero);

  int resultado = numero * (numero - 1);

  printf("%i! = %i", numero, numero - 1);

  for (int contador = numero - 2; contador > 0; contador--)
  {
    resultado = resultado * contador;
    printf(" * %i", contador);
  }

  printf(" = %i", resultado);

  return 0;
}