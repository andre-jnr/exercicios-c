#include <stdio.h>

int main()
{
  int contador = 0;

  while (contador < 20)
  {
    if (contador % 2 == 1)
    {
      printf("%i, ", contador);
    }

    ++contador;
  }

  return 0;
}