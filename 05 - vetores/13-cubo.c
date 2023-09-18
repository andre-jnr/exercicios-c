/*
  Escreva um algoritmo que receba dez números do usuário e armazene
  em um vetor o cubo de cada número. Após isso, o algoritmo deve
  imprimir todos os valores armazenados.
*/
#include <stdio.h>
#include <math.h>

int main()
{
  int numeros[10];
  int numero;

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um número: \n");
    scanf("%d", &numero);

    numeros[i] = pow(numero, 3);
  }

  printf("Números ao cubo \n");

  for (int i = 0; i < 10; i++)
  {
    printf("%d \n", numeros[i]);
  }
}