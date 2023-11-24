#include <stdio.h>
#include <locale.h>

/*
  Leia a hora de início e a hora do fim de um jogo de xadrez
  (considere apenas horas inteiras, sem os minutos) e calcule
  a duração de jogo em horas, sabendo que o tempo máximo de
  duração do jogo é de 24 horas e que o jogo pode iniciar em um
  dia e terminar no dia seguinte.
*/

int main()
{
  setlocale(LC_ALL, "portuguese");
  int hora_inicial, hora_final, horas_jogadas;

  printf("Hora inicial: ");
  scanf("%i", &hora_inicial);

  printf("Hora de termino: ");
  scanf("%i", &hora_final);

  if (hora_inicial > hora_final)
  {
    horas_jogadas = (24 - hora_inicial) + hora_final;
  }
  else
  {
    horas_jogadas = hora_final - hora_inicial;
  }

  printf("O jogo durou: %i horas", horas_jogadas);

  return 0;
}