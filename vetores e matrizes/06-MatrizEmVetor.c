/*
    Faça um programa que leia uma matriz
    10x10 de inteiros. A seguir transforme-a
    em um vetor.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int matriz[10][10];
  int vetor[100];
  int contador = 0;

  for (int l = 0; l < 10; l++)
  {
    for (int c = 0; c < 10; c++)
    {
      printf("Digite o valor da posição[%d][%d]: ", l, c);
      scanf("%d", &matriz[l][c]);
      vetor[contador] = matriz[l][c];
      contador++;
    }
  }

  printf("Vetor: ");

  for (int i = 0; i < 100; i++)
  {
    printf("%d, ", vetor[i]);
  }

  return 0;
}