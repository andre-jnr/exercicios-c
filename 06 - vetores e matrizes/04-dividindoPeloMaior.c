/*
  Faça um algoritmo que leia um vetor de 500 posições
  de números inteiros e divida todos os seus elementos
  pelo maior valor do vetor. Mostre o vetor após os cálculos.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int tamanhoVetor = 500;

  int vetor[tamanhoVetor];

  for (int i = 0; i < tamanhoVetor; i++)
  {
    printf("Digite um valor: \n");
    scanf("%d", &vetor[i]);
  }

  int maiorValor = vetor[0];

  for (int i = 0; i < tamanhoVetor; i++)
  {
    if (i > maiorValor)
    {
      maiorValor = i;
    }
  }

  for (int i = 0; i < tamanhoVetor; i++)
  {
    vetor[i] /= maiorValor;
    if (i != tamanhoVetor - 1)
    {
      printf("%d, ", vetor[i]);
    }
    else
    {
      printf("%d. \n", vetor[i]);
    }
  }

  return 0;
}