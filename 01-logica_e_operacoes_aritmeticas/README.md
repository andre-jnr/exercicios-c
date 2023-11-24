# Lógica e operações aritméticas

## Sintaxe básica

Para usar comandos de entrada e saída, importamos a biblioteca `stdio.h` (standard input-output header / cabeçalho padrão de entrada/saída).

Para usar as funções da biblioteca `stdio.h`, é necessário incluir o cabeçalho `stdio.h` no início do programa. Isso é feito usando a diretiva `#include`:

```c
#include <stdio.h>
```

Assim podemos imprimir valores na tela.

```c
#include <stdio.h>

int main() {
    printf("Olá, mundo!\n");
    return 0;
}
```

## Variáveis

uma variável é um espaço na memória do computador reservado para armazenar um valor. As variáveis são usadas para armazenar dados que podem ser alterados durante a execução do programa.

As variáveis são definidas por um nome e um tipo de dados. O nome da variável é usado para se referir a ela no código. O tipo de dados determina o tipo de valor que a variável pode armazenar.

```c
// Declarando uma variavel chamada soma do tipo inteiro
int soma
```

> Lembrando que a linguagem c é casa-sensitive, ou seja, diferencia letras maiusculas de menusculas (cuidado ao escolher o nome de declaração da variavel (A != a)).

### Tipos primitivos

As variáveis podem ser usadas para armazenar uma ampla variedade de dados, incluindo:

- Números inteiros: 1, 2, 3, ...
- Números de ponto flutuante (reais): 1.0, 2.0, 3.0, ...
- Caracteres: 'a', 'b', 'c', ...

Em C, são declaradas da seguinte forma:

```c
int inteira;
float reais;
char caractere;
```

Aqui estão alguns exemplos de como as variáveis são usadas em linguagem de programação:

- Para armazenar o valor de uma entrada do usuário.
- Para armazenar o resultado de um cálculo.
- Para controlar o fluxo de um programa.

## Impressão

> usa-se \n para quebrar linha.

Você pode imprimir diferentes tipos de variáveis.

```c
#include <stdio.h>

int main()
{
int inteiro = 1;
float real = 1.5;
char caracter = 'x';

    printf("%i \n", inteiro);
    printf("%f \n", real);
    printf("%c \n", caracter);

}
```

Como é uma impressão formatada, você pode imprimir ela em qualquer lugar da mensagem, basta referenciar ela com % + tipo.

```c
#include <stdio.h>

int main()
{
char minha_variavel = 'X';

    // esquerda da mensagem
    printf("%c --- ---\n", minha_variavel);

    // meio da mensagem
    printf("--- %c ---\n", minha_variavel);

    // direita da mensagem
    printf("--- --- %c \n", minha_variavel);

}
```

Em vez de usar uma variável, você pode imprimir o resultado de um processo,

```c
#include <stdio.h>

int main()
{
int a = 1;
int b = 2;

    printf("%i + %i = %i", a, b, a + b);
    // 1 + 2 = 3

}
```

## Entrada de valores

Para ler dados digitado pelo teclado usando a função scanf().

```c
scanf(formato_da_entrada, &variavel_1, &variavel_2, ...);
```

- _formato_da_entrada_: é onde especifica o formato dos dados a serem inseridos.
- **variavel_1, variavel_2, ...**: são as variáveis onde os dados lidos serão armazenados.

> Podemos ler mais de um valor por vez usando o scanf(), mas por questão de boas práticas, é recomendado ler apenas um por vez.

- Usamos o & para referenciar o endereço de memória da variável.

```c
#include <stdio.h>

int main()
{
int inteiro;
float real;
char caracter;

    // Para ler um número inteiro
    scanf("%d", &inteiro);

    // Para ler um número inteiro
    scanf("%i", &inteiro);

    // Para ler um número real
    scanf("%f", &real);

    // Para ler um caracter
    getchar(); // para o programa esperar um caracter ser inserido
    scanf("%c", &caracter);

}
```

Note que, o terminal vai esperar o usuário digitar algum valor, mas sem uma mensagem comunicando o que deseja, fica díficil o infeliz advinha o que o programa deseja.

Por isso, sempre é usando um printf() informando o que precisa ser digitado, e em seguida, um scanf() para ler o valor.

```c
#include <stdio.h>

int main()
{
int inteiro;
float real;
char caracter;

    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um número inteiro: ");
    scanf("%i", &inteiro);

    printf("Digite um número real: ");
    scanf("%f", &real);

    printf("Digite um caracter: ");
    getchar(); // para o programa esperar um caracter ser inserido
    scanf("%c", &caracter);

}
```

## Operações aritméticas

A tabela abaixo mostra o grau de prioridade, quando menor o número, maior será a prioridade.

O programa executará primeiro os com grau de prioridade maior, se o grau de prioridade for o mesmo, será executado o primeiro da esquerda para o direita.

| Prioridade | símbolo | significado   |
| ---------- | ------- | ------------- |
| 3          | ( )     | prioridade    |
| 1          | +       | adição        |
| 1          | -       | subtração     |
| 2          | \*      | multiplicação |
| 2          | /       | divisão       |
| 2          | %       | modulo        |

## Exercicios

1. [Olá mundo](../01-logica_e_operacoes_aritmeticas/01-ola_mundo.c): Crie um programa que imprima "Olá mundo" na tela.

1. [Variaveis](../01-logica_e_operacoes_aritmeticas/02-variaveis.c): Faça um algoritmo que tenha duas variáveis com o mesmo nome, mas uma completamente em maiúsculo e a outra completamente minúsculo com valores distintos e imprimas na tela.

1. [Soma](../01-logica_e_operacoes_aritmeticas/03-soma.c): Faça um programa que tenha `n1` e `n2`, onde `n1` recebe 5 e `n2` 8. Depois mostre a soma na tela.

1. [Troca de valores](../01-logica_e_operacoes_aritmeticas/04-troca_de_valores.c): Faça um algoritmo tem tenha a variável `a` e a variável `b`. Onde a variável `a` recebe 10 e a variável `b` recebe 20. Faça com que as variáveis troquem de valores, sem que as variáveis recebam os números diretamente.

1. [Input](../01-logica_e_operacoes_aritmeticas/05-input.c): Desenvolva um programa que peça para o usuário digitar algum número inteiro, e depois mostre com alguma mensagem o valor digitado.

1. [Antecessor](../01-logica_e_operacoes_aritmeticas/06-antecessor.c): Peça para o usuário digitar um valor inteiro, e depois mostre o antecessor desse número.

1. [Quantos dias de vida você tem?](../01-logica_e_operacoes_aritmeticas/07-quantos_dias_vc_tem.c): Peça para o usuário digitar a idade dele. Em seguida mostre quantos meses e quantos dias a pessoa tem de vida.

1. [Média ponderada](../01-logica_e_operacoes_aritmeticas/08-media_ponderada.c): Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final. Considerando que a média é ponderada e que o peso das notas é `2`, `3` e `5`.

   ```
   media_ponderada = (n1 * 2 + n2 * 3 + n3 * 5) / 10

   ```

1. [Fahrenheit para celsius](../01-logica_e_operacoes_aritmeticas/09-fahrenheit_para_celsius.c): Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsiu

   ```
   C = (f - 32) * 5 / 9
   ```

   - Ex: 100°C = 212F

1. [Reajuste salarial](../01-logica_e_operacoes_aritmeticas/10-reajuste_de_salario.c): Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

1. [Valor do carro](../01-logica_e_operacoes_aritmeticas/11-valor_carro.c): O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que O percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.

1. [Relação de eleitores](../01-logica_e_operacoes_aritmeticas/12-relacao_de_eleitores.c): Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual de cada um em relação ao total de eleitores.

1. [Operações aritmeticas](../01-logica_e_operacoes_aritmeticas/13-operaçoes_aritmeticas.c): Fazer um programa em C que solicite 2 números e informe:

   A) A soma dos números;

   B) O produto do primeiro número pelo quadrado do segundo;

   C) O quadrado do primeiro número;

   D) A raiz quadrada da soma dos quadrados;

   E) O seno da diferença do primeiro número pelo segundo;

   F) O módulo do primeiro número.