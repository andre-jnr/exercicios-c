/*
    Crie um vetor de 10 entradas do tipo
    inteiro. Armazene os valores pares em
    em todos o vetor. Apresente o vetor em
    tela. Troque o conteúdo do vetor apenas
    dos índices impares somando 1 ao conteudo,
    apresente o novo vetor.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguse");
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        do {
            printf("Digite o valor %d: ", i + 1);
            scanf("%d", &vetor[i]);
        } while (vetor[i] % 2 != 0);
    }

    printf("O vetor ficou: ");
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
            printf("%d, ", vetor[i]);
        else
            printf("%d. \n", vetor[i]);
    }

    printf("O vetor com indice impares trocados: ");
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
            vetor[i]++;
        
        printf("%d, ", vetor[i]);
    }

    return 0;
}