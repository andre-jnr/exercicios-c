/* VETOR
  Crie um algoritmo com um vetor de 10 entradas
  do tipo inteiro. Identifique o maior valor do
  vetor.
*/
#include <stdio.h>

int main()
{
  int vetor[10];
  int maiorValor;

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &vetor[i]);

    if (i == 0)
      maiorValor = vetor[i];
    else if (vetor[i] > maiorValor)
      maiorValor = vetor[i];
  }

  printf("O maior valor digitado: %d", maiorValor);

  return 0;
}