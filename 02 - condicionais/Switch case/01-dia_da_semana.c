/*
  Leia o número que representa o dia da semana e imprima o nome do dia da semana.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int dia;

  printf("Digite um numero: ");
  scanf("%i", &dia);

  switch (dia)
  {
  case 1:
    printf("Domingo \n");
    break;
  case 2:
    printf("Segunda-feira \n");
    break;
  case 3:
    printf("Terca-feira \n");
    break;
  case 4:
    printf("Quarta-feira \n");
    break;
  case 5:
    printf("Quinta-feira \n");
    break;
  case 6:
    printf("Sexta-feira \n");
    break;
  case 7:
    printf("Sabado \n");
    break;
  default:
    printf("Esse numero nao representa nada! \n");
    printf("Igual o que você representa pra ela! \n");
    break;
  }

  return 0;
}