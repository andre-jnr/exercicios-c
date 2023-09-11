/*
  Faça um algoritmo que leia um código numérico inteiro
  e um vetor de 50 posições de números reais. Se o
  código for zero, termine o algoritmo. Se o código for
  1, mostre o vetor na ordem direta. Se o código for 2,
  mostre o vetor na ordem inversa.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int tamanhoVetor = 50;

  float vetor[tamanhoVetor];
  int codigo;

  for (int i = 0; i < tamanhoVetor; i++)
  {
    printf("Digite algum número: \n");
    scanf("%f", &vetor[i]);
  }

  int controleLoop = 1;

  while (controleLoop == 1)
  {
    printf("\n");
    printf("Digite o que deseja \n");
    printf("[0] - Ver os números da esquerda para direita \n");
    printf("[1] - Ver os números da direita para esquerda \n");
    printf("[Qualquer outro número] - sair \n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 0:
      for (int i = tamanhoVetor - 1; i >= 0; i--)
      {
        if (i != 0)
        {
          printf("%.2f, ", vetor[i]);
        }
        else
        {
          printf("%.2f. \n", vetor[i]);
        }
      }
      break;

    case 1:
      for (int i = 0; i < tamanhoVetor; i++)
      {
        if (i != tamanhoVetor - 1)
        {
          printf("%.2f, ", vetor[i]);
        }
        else
        {
          printf("%.2f. \n", vetor[i]);
        }
      }
      break;

    default:
      controleLoop = 0;
      break;
    }
  }

  return 0;
}