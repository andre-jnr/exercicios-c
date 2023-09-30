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

  int mostrarVetorInvertido(float vetor[], int tamanhoVetor);
  int mostrarVetor(float vetor[], int tamanhoVetor);

  float vetor[tamanhoVetor];
  int codigo;

  for (int i = 0; i < tamanhoVetor; i++)
  {
    printf("Digite o %dº número: \n", i + 1);
    scanf("%f", &vetor[i]);
  }

  int controleLoop = 1;

  while (controleLoop == 1)
  {
    printf("\n");
    printf("Digite o que deseja \n");
    printf("[0] - sair \n");
    printf("[1] - Ver os números na ordem digitada \n");
    printf("[2] - Ver os números da em ordem invertida \n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 0:
      controleLoop = 0;
      break;

    case 1:
      mostrarVetor(vetor, tamanhoVetor);
      break;

    case 2:
      mostrarVetorInvertido(vetor, tamanhoVetor);
      break;

    default:
      printf("Não entendi! \n");
      break;
    }
  }

  return 0;
}

int mostrarVetorInvertido(float vetor[], int tamanhoVetor)
{
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

  return 0;
}

int mostrarVetor(float vetor[], int tamanhoVetor)
{
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

  return 0;
}
