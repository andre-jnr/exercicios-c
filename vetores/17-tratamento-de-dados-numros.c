/**
 * Construa um algoritmo para calcular a média de valores PARES e ÍMPARES,
 * de 50 números que serão digitados pelo usuário. Ao final o algoritmo
 * deve mostrar estas duas médias. O algoritmo deve mostrar também o maior
 * número PAR digitado e o menor número ÍMPAR digitado. Esses dados devem ser
 * armazenados em um vetor. Além disso, devem ser impressos os valores PARES
 * maiores que a média PAR, bem como os valores ÍMPARES menor que a média ÍMPAR.
 */
#include <stdio.h>

int main()
{
  int numeros[50];
  int somaPares = 0, somaImpares = 0;
  int maiorPar, menorImpar, qtdePar = 0, qtdeImpar = 0;
  float mediaPar, mediaImpar;

  for (int i = 0; i < 50; i++)
  {
    printf("Digite um número: \n");
    scanf("%i", &numeros[i]);

    if (numeros[i] % 2 == 0)
    {
      somaPares += numeros[i];
      qtdePar += 1;

      if (i == 0)
      {
        maiorPar = numeros[i];
      }
      else if (maiorPar < numeros[i])
      {
        maiorPar = numeros[i];
      }
    }
    else
    {
      somaImpares += numeros[i];
      qtdeImpar += 1;

      if (i == 0)
      {
        menorImpar = numeros[i];
      }
      else if (menorImpar > numeros[i])
      {
        menorImpar = numeros[i];
      }
    }
  }

  mediaPar = somaPares / qtdePar;
  mediaImpar = somaImpares / qtdeImpar;

  printf("Média de números pares: %f \n", mediaPar);
  printf("Média de números impares: %f \n", mediaImpar);

  printf("O maior número Par foi: %d \n", maiorPar);
  printf("O menor número impar foi: %d \n", menorImpar);

  return 0;
}