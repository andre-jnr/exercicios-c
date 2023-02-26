#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
  Fazer um programa em "C" que solicite 2 números e informe:
    — a) A soma dos números;
    — b) O produto do primeiro número pelo quadrado do segundo;
    — c) O quadrado do primeiro número;
    — d) A raiz quadrada da soma dos quadrados;
    — e) O seno da diferença do primeiro número pelo segundo;
    — f) O módulo do primeiro número.
*/

int main()
{
  setlocale(LC_ALL, "portuguese");
  int n1, n2, raiz_dos_quadrados;

  printf("Digite um número: ");
  scanf("%i", &n1);

  printf("Digite outro número: ");
  scanf("%i", &n2);

  printf("A) soma dos dois números é: %i\n", n1 + n2);
  printf("B) O produto do primeiro número pelo quadrado do segundo: %i\n", n1 * (n2 * n2));
  printf("C) O quadrado do primeiro número: %i\n", n1 * n1);

  raiz_dos_quadrados = (n1 * n1) + (n2 * n2);
  raiz_dos_quadrados = sqrt(raiz_dos_quadrados);

  printf("D) A raiz quadrada da soma dos quadrados: %i", raiz_dos_quadrados);

  printf("E) O seno da diferença do primeiro número pelo segundo: %f\n", sin(n1 - n2));

  printf("F) O módulo do primeiro número: %i", n1 % n2);

  return 0;
}