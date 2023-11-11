// Leia uma letra e imprima se ela é uma vogal ou uma consoante.

#include <stdio.h>

int main()
{
  char letra;

  printf("Digite uma letra: ");
  scanf(" %c", &letra);

  switch (letra)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    printf("A letra e uma vogal.\n");
    break;
  default:
    printf("A letra e uma consoante.\n");
  }

  return 0;
}
