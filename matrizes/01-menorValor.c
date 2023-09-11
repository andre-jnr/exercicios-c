/*
  Escreva um algoritmo que leia um vetor de 80
  elementos inteiros. Encontre e mostre o menor
  elemento e sua posição no vetor
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int vetor[80];

  for (int i = 0; i < 80; i++)
  {
    printf("Digite um número: \n");
    scanf("%d", &vetor[i]);
  }

  int menorValor = vetor[0];

  for (int i = 0; i < 80; i++)
  {
    if (vetor[i] < menorValor)
    {
      menorValor = vetor[i];
    }
  }

  printf("O menor valor digitado: %d", menorValor);

  return 0;
}