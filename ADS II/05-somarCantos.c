/* MATRIZ
    Crie uma matriz 4x4. Insira dados inteiros na matriz.
    Apresente a matriz 4x4. Some os valores dos cantos
    superiores e inferiores. Apressente a soma.

    -----------------
    | X |   |   | X |
    -----------------
    |   |   |   |   |
    -----------------
    |   |   |   |   |
    -----------------
    | X |   |   | X |
    -----------------
*/
#include <stdio.h>

int main()
{
    int tam = 4;
    int somaCantos = 0;
    int matriz[tam][tam];

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("Digite um valor para posicao[%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);

            if ((i == 0 || i == tam - 1) && (j == 0 || j == tam - 1))
                somaCantos += matriz[i][j];
        }
    }

    printf("soma dos cantos: %i", somaCantos);

    return 0;
}