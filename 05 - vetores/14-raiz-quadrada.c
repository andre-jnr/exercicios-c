/*
  Escreva um algoritmo que receba quinze números do usuário e
  armazene em um vetor a raiz quadrada de cada número. Caso o
  valor digitado seja menor que zero o número –1 deve ser
  atribuído ao elemento do vetor. Após isso, o algoritmo deve
  imprimir todos os valores armazenados.
*/
#include <stdio.h>
#include <math.h>

int main()
{
  int numeros[15];
  int numero;

  for (int i = 0; i < 15; i++)
  {
    printf("Digite um número: \n");
    scanf("%d", &numero);

    if (numero < 0)
      numeros[i] = -1;
    else
      numeros[i] = sqrt(numero);
  }

  printf("\nAs raizes quadradas dos números digitados \n");

  for (int i = 0; i < 15; i++)
  {
    printf("%d \n", numeros[i]);
  }

  return 0;
}