#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
  Construa um algoritmo pra calcular a média de valores
  PARES e IMPARES, que serão digitados pelo usuário. Ao
  final o algoritmo deve mostrar estas duas médias. O
  algoritmo deve mostrar também oo maior número PAR digitado
  e o menor número ÍMPAR digitado. Para finalizar o usuário
  irá digitar um valor negtivo.
*/

int main()
{
  setlocale(LC_ALL, "portuguese");
  float contadorPar, contadorImpar;
  float maiorPar, menorImpar;

  maiorPar = 0;
  menorImpar = 0;

  contadorPar = 0;
  contadorImpar = 0;

  float numero, mediaPar, mediaImpar;
  mediaPar = 0;
  mediaImpar = 0;

  do
  {
    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero > 0)
    {
      if (fmod(numero, 2) == 0)
      {
        mediaPar = mediaPar + numero;
        contadorPar = contadorPar + 1;
        if (numero > maiorPar)
        {
          maiorPar = numero;
        }
      }
      else
      {
        mediaImpar = mediaImpar + numero;
        contadorImpar = contadorImpar + 1;
        if (contadorImpar == 1)
        {
          menorImpar = numero;
        }
        if (numero < menorImpar)
        {
          menorImpar = numero;
        }
      }
    }
  } while (numero > 0);

  mediaPar = mediaPar / contadorPar;
  mediaImpar = mediaImpar / contadorImpar;

  printf("---------------------------------------------");

  printf("Média dos números pares: %.2f \n", mediaPar);
  printf("Média dos número impares: %.2f \n", mediaImpar);

  printf("Maior valor par digitado: %.f \n", maiorPar);
  printf("Menor valor impar digitado: %.f \n", menorImpar);

  return 0;
}