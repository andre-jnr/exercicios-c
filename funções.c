#include <stdio.h>

int opcao;

int main()
{
  int valor;
  int menu(int);

  printf("Digite um valor: \n");
  scanf("%d", &valor);

  while (opcao != 5)
  {
    menu(valor);
  }

  return 0;
}

int parOuImpar(int valor)
{

  if (valor % 2 == 0)
  {
    printf("É par! \n");
  }
  else
  {
    printf("É impar \n");
  }

  return 0;
}

int divisivel5(int valor)
{
  if (valor % 5 == 0)
  {
    printf("É divisivel por 5! \n");
  }
  else
  {
    printf("Não é divisivel por 5! \n");
  }

  return 0;
}

int fatorial(int valor)
{
  int resultado = 1;
  for (int i = valor; i >= 1; i--)
  {
    resultado *= i;
  }
  printf("%d! = %d \n", valor, resultado);

  return 0;
}

int tabuada(int valor)
{
  for (int i = 1; i <= 10; i++)
  {
    int resultado = valor * i;
    printf("%d x %d = %d \n", valor, i, resultado);
  }

  return 0;
}

int menu(int valor)
{
  int parOuImpar(int);
  int divisivel5(int);
  int fatorial(int);
  int tabuada(int);

  printf("[1] - se é par ou impar \n");
  printf("[2] - se é divisivel por 5 \n");
  printf("[3] - O fatorial \n");
  printf("[4] - tabuada \n");
  printf("[5] - Sair");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    parOuImpar(valor);
    break;
  case 2:
    divisivel5(valor);
    break;
  case 3:
    fatorial(valor);
    break;
  case 4:
    tabuada(valor);
    break;
  case 5:
    break;
  default:
    printf("Não entendi! \n");
    break;
  }

  return 0;
}