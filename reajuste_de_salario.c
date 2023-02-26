#include <stdio.h>
#include <locale.h>

/*
  Escreva um algoritmo para ler o saláriomensal atualde
  um funcionário e o percentual de reajuste. Calcular e
  escrever o valor do novo salário.
*/

int main(void)
{
  float salario, reajuste, novo_salario;

  setlocale(LC_ALL, "portuguese");
  printf("Sálario mensal: ");
  scanf("%f", &salario);

  printf("Percentual do reajuste: ");
  scanf("%f", &reajuste);

  novo_salario = ((salario * reajuste) / 100) + salario;

  printf("Novo salario: %.2f", novo_salario);
  return 0;
}