#include <stdio.h>
#include <locale.h>

/*
  Leia dois valores (considere que não serão lidos valores iguais)
  e escreve-los e ordem crescente.
*/

int main()
{
  setlocale(LC_ALL, "portuguese");
  int v1, v2;

  printf("Digite 1° valor: ");
  scanf("%i", &v1);

  printf("Digite o 2° valor: ");
  scanf("%i", &v2);

  if (v1 < v2)
  {
    printf("%i, %i", v1, v2);
  }
  else
  {
    printf("%i, %i", v2, v1);
  }

  return 0;
}