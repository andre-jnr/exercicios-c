/*
  Escreva um algoritmo que receba dez números do usuário e armazene
  em um vetor o quadrado de cada número. Após isso, o algoritmo deve
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
    printf("Digite um valor: \n");
    scanf("%d", &numero);

    numeros[i] = pow(numero, 2);
  }

  printf("O quadrado de cada número \n");

  for (int i = 0; i < 10; i++)
  {
    printf("%d \n", numeros[i]);
  }
}