/* VETOR
  Crie um algoritmo com um vetor de 10 entradas
  do tipo inteiro. Identifique o menor valor do
  vetor.
*/
#include <stdio.h>

int main()
{
  int vetor[10];
  int menorValor;

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &vetor[i]);

    if (i == 0)
      menorValor = vetor[i];
    else if (vetor[i] < menorValor)
      menorValor = vetor[i];
  }

  printf("O menor valor digitado: %d", menorValor);

  return 0;
}