// tabuada de algum número

#include <stdio.h>
#include <math.h>

int main()
{
  int contador = 0;
  int resultado, numero;

  printf("Escolha um número e veja a tabuada: \n");
  scanf("%i", &numero);

  while (contador < 11)
  {
    resultado = contador * numero;
    printf("%i x %i = %i \n", numero, contador, resultado);
    contador += 1;
  };

  return 0;
}