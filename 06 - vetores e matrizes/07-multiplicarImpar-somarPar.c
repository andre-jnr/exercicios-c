/*
    Desenvolver um programa que efetuea
    leitura de dez elementos de uma matriz
    A tipo vetor. Construir uma matriz B de
    mesmo tipo, acompanhando a seguinte lei
    de informação. Se o valor do índice for
    ímpar, o valor deverá ser multiplicado
    por 6; sendo par, deverá ser somado com
    6. Ao final, mostrar os conteúdos das
    duas matrizes.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int matrizA[10];
  int matrizB[2][5];

  for (int i = 0; i < 10; i++)
  {
    printf("Digite o valor da posição[%d]: ", i);
    scanf("%d", &matrizA[i]);
  }

  int i = 0;

  for (int l = 0; l < 2; l++)
  {
    for (int c = 0; c < 5; c++)
    {
      if (matrizA[i] % 2 != 0)
      {
        matrizB[l][c] = matrizA[i] * 6;
      }
      else
      {
        matrizB[l][c] = matrizA[i] + 6;
      }

      i++;
    }
  }

  i = 0;

  for (int l = 0; l < 2; l++)
  {
    for (int c = 0; c < 5; c++)
    {
      printf("Matriz A: %d, Matriz B: %d \n", matrizA[i], matrizB[l][c]);
      i++;
    }
  }

  return 0;
}