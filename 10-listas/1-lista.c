/*
 Crie um programa usando lista que:
  - Mostre o tamanho
  - Insira
  - Exclua
  - Liste
  - Renicie
  - Busque
*/
#include <stdio.h>
#include <stdbool.h>

#define MAX 50

typedef int TIPOCHAVE;

typedef struct
{
  TIPOCHAVE chave;
  // outros campos
} REGISTRO;

typedef struct
{
  REGISTRO ELEMENTOS[MAX];
  int numeroElementos;
} LISTA;

void inicializarLista(LISTA *lista)
{
  lista->numeroElementos = 0;
}

int tamanho(LISTA *lista)
{
  return lista->numeroElementos;
}

void exibirLista(LISTA *lista)
{
  printf("LISTA: ");
  for (int i = 0; i < lista->numeroElementos; i++)
    printf("%d ", lista->ELEMENTOS[i].chave);
  printf("\n");
}

bool inserirElemento(LISTA *lista, REGISTRO registro, int posicao)
{
  if ((lista->numeroElementos == MAX) || (posicao < 0) || (posicao > lista->numeroElementos))
    return false;

  for (int i = lista->numeroElementos; i > posicao; i--)
    lista->ELEMENTOS[i] = lista->ELEMENTOS[i - 1];

  lista->ELEMENTOS[posicao] = registro;
  lista->numeroElementos++;

  return true;
}

int buscarElemento(LISTA *lista, TIPOCHAVE chave)
{
  int i = 0;

  while (i < lista->numeroElementos)
  {
    if (chave == lista->ELEMENTOS[i].chave)
      return i;
    else
      i++;
  }

  return -1;
}

bool excluirElemento(LISTA *lista, TIPOCHAVE chave)
{
  int posicao;

  posicao = buscarElemento(lista, chave);
  if (posicao == -1)
    return false;

  for (int i = posicao; i < lista->numeroElementos - 1; i++)
    lista->ELEMENTOS[i] = lista->ELEMENTOS[i + 1];

  lista->numeroElementos--;

  return true;
}

int main()
{
  int escolhaUsuario;
  LISTA lista;
  REGISTRO registro;
  inicializarLista(&lista);

  while (true)
  {
    printf("Menu\n");
    printf("[1] - Tamanho \n");
    printf("[2] - Inserir \n");
    printf("[3] - Excluir \n");
    printf("[4] - Listar \n");
    printf("[5] - Reniciar \n");
    printf("[6] - Buscar \n");
    printf("[7] - Sair \n");
    printf("-> ");
    scanf("%i", &escolhaUsuario);

    switch (escolhaUsuario)
    {
    case 1:
      printf("%i \n", tamanho(&lista));
      break;
    case 2:
      printf("Qual número você deseja inserir: ");
      scanf("%i", &registro.chave);
      inserirElemento(&lista, registro, tamanho(&lista));
      break;
    case 3:
      printf("Que elemento deseja excluir: ");
      scanf("%i", &registro.chave);
      excluirElemento(&lista, registro.chave);
      break;
    case 4:
      exibirLista(&lista);
      break;
    case 5:
      inicializarLista(&lista);
      break;
    case 6:
      printf("Qual número deseja buscar: ");
      scanf("%i", &registro.chave);
      printf("Índice do %i: %i \n", registro.chave, buscarElemento(&lista, registro.chave));
      break;
    case 7:
      return 0;
    default:
      break;
    }
  }
  return 0;
}