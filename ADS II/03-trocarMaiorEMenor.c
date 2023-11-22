/* VETOR
  Crie um algoritmo com um vetor de 10 entradas.
  Troque o maior valor do vetor pelo menor.
  Apresente o novo vetor.
*/
#include <stdio.h>

int main()
{
  int vetor[10];
  int menorValor[2];
  int maiorValor[2];
  int vetorAuxiliar[2];

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &vetor[i]);

    if (i == 0)
    {
      menorValor[0] = i;
      menorValor[1] = vetor[i];

      maiorValor[0] = i;
      maiorValor[1] = vetor[i];
    }
    else if (menorValor[1] > vetor[i])
    {
      menorValor[0] = i;
      menorValor[1] = vetor[i];
    }
    else if (maiorValor[1] < vetor[i])
    {
      maiorValor[0] = i;
      maiorValor[1] = vetor[i];
    }
  }

  vetorAuxiliar[0] = menorValor[0];
  vetorAuxiliar[1] = menorValor[1];

  vetor[menorValor[0]] = vetor[maiorValor[0]];
  vetor[maiorValor[0]] = vetorAuxiliar[1];

  printf("O menor valor trocado pelo maior: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d, ", vetor[i]);
  }

  return 0;
}