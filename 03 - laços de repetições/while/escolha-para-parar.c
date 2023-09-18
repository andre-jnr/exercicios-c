#include <stdio.h>

int main()
{
  int numero = 0;

  while (1)
  {
    printf("Use 1 para parar\n");
    printf("Digite um numero\n");
    scanf("%i", &numero);

    if (numero == 1)
    {
      break;
    }
  }

  return 0;
}