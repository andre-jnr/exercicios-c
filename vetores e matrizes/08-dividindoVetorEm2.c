/*
    Desenvolva um programa que leia um vetor
    Vetor de 10 posições e divida-o em dois
    de 5 posições. Ao final escreva todos os
    vetores.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int vetor[10];
  int vetor1[5];
  int vetor2[5];

  for (int i = 0; i < 10; i++)
  {
    printf("Digite o %d valor: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  printf("VETOR 1 \n");
  for (int i = 0; i < 5; i++)
  {
    vetor1[i] = vetor[i];
    printf("%d \n", vetor1[i]);
  }
  printf("\n");

  printf("VETOR 2 \n");
  for (int i = 5; i < 10; i++)
  {
    vetor2[i - 5] = vetor[i];
    printf("%d \n", vetor2[i - 5]);
  }

  return 0;
}