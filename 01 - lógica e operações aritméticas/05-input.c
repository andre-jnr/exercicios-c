#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int x = 5;

  printf("Digite algum valor: ");
  scanf("%i", &x);

  printf("Você digitou %i", x);

  return 0;
}