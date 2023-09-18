/*
  Faça um programa que leia um valor e mostre a mensagem
  "É maior que 10!" se o valor lido for maior que 10,
  caso contrário, mostre "Não é maior que 10!"
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
  int x;

  setlocale(LC_ALL, "portuguese");
  printf("Digite um número: ");
  scanf("%i", &x);

  if (x > 10)
  {
    printf("%i é maior que 10", x);
  }
  else
  {
    printf("%i não é maior que 10", x);
  }
  return 0;
}