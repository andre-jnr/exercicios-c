#include <stdio.h>
#include <locale.h>

/*
  Uma largata sobre 3cm de dia e a noite ela desce 2cm,
  pra subir um balde de 10cm em quantos dias ela chega
  no topo do balde: crie um programa em c que simule o
  ambiente.
*/

int main()
{
  setlocale(LC_ALL, "portuguese");
  int topo_balde = 10, lagarta = 0;

  do
  {
    // dia
    lagarta += 3;

    // noite
    lagarta -= 2;
  } while (lagarta < topo_balde);

  printf("Foram necessários %i dias para a lagarta chegar ao topo do balde.", lagarta);

  return 0;
}