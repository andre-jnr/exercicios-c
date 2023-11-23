/* MATRIZ
    Crie uma matriz 5x7. Insira dados inteiros
    na matriz apenas nas duas primeiras colunas.
    Some os valore dessas duas colunas iniciais
    para preencher a terceira coluna. Siga o
    o mesmo passo dando origem a próxima coluna
    a partir da soma das duas anteriores.
    Apresente a matriz 5x7 no final.
*/
#include <stdio.h>

int main()
{
    int matriz[5][7];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite algum valor inteiro: ");
            scanf("%i", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 2; j < 7; j++)
        {
            matriz[i][j] = matriz[i][j - 2] + matriz[i][j - 1];
        }
    }

    printf("Apresentando matriz 5x7 completa \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}