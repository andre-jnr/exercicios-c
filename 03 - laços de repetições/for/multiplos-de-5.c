/**
 * Tava ensinado um coleta da faculdade o porquê
 * se usar o % em vez do / para encontrar os múltiplos
 * de um número, expliquei que o modulo de todas as divisões
 * pelo número retornaria 0, e a divisão não havia um padrão
 * para encontrar os múltiplos. Mas logo em seguida me liguei
 * que todos os múltiplos de algum número são sequenciais, então
 * bolei um algoritmo para encontrar os múltiplos de 5 sem usar
 * o modulo. É um bagulho meio besta, mas acho interessante detec-
 * ta padrões e soluções para problemas.
 */
#include <stdio.h>

int main()
{
  int controlador = 1;
  for (int i = 1; i <= 500; i++)
  {
    if (i / 5 == controlador)
    {
      printf("%d \n", i);
      controlador++;
    }
  }
}