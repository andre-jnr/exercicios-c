/*
    Fazer um algoritmo que leia os valores
    de duas matrizes 3×3 e imprima a
    multiplicação das duas matrizes.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int matriz1[3][3];
  int matriz2[3][3];
  int resultados[3][3];

  printf("LENDO PRIMEIRA MATRIZ \n");
  for (int l = 0; l < 3; l++)
  {
    for (int c = 0; c < 3; c++)
    {
      printf("Digite o valor da posição[%d][%d]: ", l, c);
      scanf("%d", &matriz1[l][c]);
    }
  }
  printf("\n");

  printf("LENDO SEGUNDA MATRIZ \n");
  for (int l = 0; l < 3; l++)
  {
    for (int c = 0; c < 3; c++)
    {
      printf("Digite o valor da posição[%d][%d]: ", l, c);
      scanf("%d", &matriz2[l][c]);
    }
  }
  printf("\n");

  for (int l = 0; l < 3; l++)
  {
    for (int c = 0; c < 3; c++)
    {
      resultados[l][c] = matriz1[l][c] * matriz2[l][c];
    }
  }

  printf("MULTIPLICAÇÃO DAS 2 MATRIZES \n");
  for (int l = 0; l < 3; l++)
  {
    for (int c = 0; c < 3; c++)
    {
      printf("%d  ", resultados[l][c]);
    }
    printf("\n");
  }

  return 0;
}