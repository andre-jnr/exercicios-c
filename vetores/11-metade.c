/*
  Escreva um algoritmo que receba dez números do usuário e
  armazene em um vetor a metade de cada número. Após isso,
  o algoritmo deve imprimir todos os valores armazenados.
*/
#include <stdio.h>

int main()
{
  float numeros[10];
  int numero;

  for (int i = 0; i < 10; i++)
  {
    printf("DIgite um número: \n");
    scanf("%d", &numero);

    numeros[i] = (float)numero / 2;
  }

  printf("A metade de cada número digitado \n");

  for (int i = 0; i < 10; i++)
  {
    printf("%.2f \n", numeros[i]);
  }

  return 0;
}