#include <stdio.h>
#include <locale.h>

/*
  Crie um programa que calcule a soma de todos os
  números pares existentes entre 1 e 100.
*/

int main()
{
  setlocale(LC_ALL, "portuguese");

  int soma = 0;

  for (int contador = 0; contador <= 100; contador++)
  {
    soma += contador;
  }

  printf("A soma do números pares entre 0 e 100: %i", soma);

  return 0;
}