/*
  Escreva um algoritmo que leia um vetor inteiro de 30
  posições e crie um segundo vetor, substituindo os
  valores 0 por 1. Mostre os 2 vetores.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int tamanhoVetor = 30;

  int vetor1[tamanhoVetor];
  int vetor2[tamanhoVetor];

  for (int i = 0; i < tamanhoVetor; i++)
  {
    printf("Digite o %dº valor: \n", i + 1);
    scanf("%d", &vetor1[i]);

    if (vetor1[i] == 0)
    {
      vetor2[i] = 1;
    }
    else
    {
      vetor2[i] = vetor1[i];
    }
  }

  for (int i = 0; i < tamanhoVetor; i++)
  {
    printf("Vetor1: %d, vetor2: %d \n", vetor1[i], vetor2[i]);
  }

  return 0;
}