- [Acesse o repositório aqui](https://github.com/andre-jnr/exercicios-c)
- [Acesse o site aqui](https://andre-jnr.github.io/exercicios-c/)

# Lógica e programação estruturada

## [Lógica e operações aritmética](/01-logica_e_operacoes_aritmeticas/README.md)

1. [Olá mundo](/01-logica_e_operacoes_aritmeticas/01-ola_mundo.c): Crie um programa que imprima "Olá mundo" na tela.

1. [Variaveis](/01-logica_e_operacoes_aritmeticas/02-variaveis.c): Faça um algoritmo que tenha duas variáveis com o mesmo nome, mas uma completamente em maiúsculo e a outra completamente minúsculo com valores distintos e imprimas na tela.

1. [Soma](/01-logica_e_operacoes_aritmeticas/03-soma.c): Faça um programa que tenha `n1` e `n2`, onde `n1` recebe 5 e `n2` 8. Depois mostre a soma na tela.

1. [Troca de valores](/01-logica_e_operacoes_aritmeticas/04-troca_de_valores.c): Faça um algoritmo tem tenha a variável `a` e a variável `b`. Onde a variável `a` recebe 10 e a variável `b` recebe 20. Faça com que as variáveis troquem de valores, sem que as variáveis recebam os números diretamente.

1. [Input](/01-logica_e_operacoes_aritmeticas/05-input.c): Desenvolva um programa que peça para o usuário digitar algum número inteiro, e depois mostre com alguma mensagem o valor digitado.

1. [Antecessor](/01-logica_e_operacoes_aritmeticas/06-antecessor.c): Peça para o usuário digitar um valor inteiro, e depois mostre o antecessor desse número.

1. [Quantos dias de vida você tem?](/01-logica_e_operacoes_aritmeticas/07-quantos_dias_vc_tem.c): Peça para o usuário digitar a idade dele. Em seguida mostre quantos meses e quantos dias a pessoa tem de vida.

1. [Média ponderada](/01-logica_e_operacoes_aritmeticas/08-media_ponderada.c): Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final. Considerando que a média é ponderada e que o peso das notas é `2`, `3` e `5`.

   ```
   media_ponderada = (n1 * 2 + n2 * 3 + n3 * 5) / 10

   ```

1. [Fahrenheit para celsius](/01-logica_e_operacoes_aritmeticas/09-fahrenheit_para_celsius.c): Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsiu

   ```
   C = (f - 32) * 5 / 9
   ```

   - Ex: 100°C = 212F

1. [Reajuste salarial](/01-logica_e_operacoes_aritmeticas/10-reajuste_de_salario.c): Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

1. [Valor do carro](/01-logica_e_operacoes_aritmeticas/11-valor_carro.c): O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que O percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.

1. [Relação de eleitores](/01-logica_e_operacoes_aritmeticas/12-relacao_de_eleitores.c): Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual de cada um em relação ao total de eleitores.

1. [Operações aritmeticas](/01-logica_e_operacoes_aritmeticas/13-operaçoes_aritmeticas.c): Fazer um programa em C que solicite 2 números e informe:

   A) A soma dos números;

   B) O produto do primeiro número pelo quadrado do segundo;

   C) O quadrado do primeiro número;

   D) A raiz quadrada da soma dos quadrados;

   E) O seno da diferença do primeiro número pelo segundo;

   F) O módulo do primeiro número.

## [Condicionais](02-condicionais/README.md)

### [If e Else](/02-condicionais/If_e_else/README.md)

1. [Maior que 10?](/02-condicionais/If_e_else/01-maiorQue10.c): Faça um programa que leia um valor e mostre a mensagem "É maior que 10!" se o valor lido for maior que 10, caso contrário, mostre "Não é maior que 10!".

1. [Maior valor](/02-condicionais/If_e_else/02-maior.c): Faça um programa que leia dois valores e mostre qual o maior (considerando que nãos serão digitados o mesmo valores).

1. [Média com situação](/02-condicionais/If_e_else/03-media_com_situação.c): Leia duas notas, além de mostrar a média, mostre se o aluno foi aprovado (igual e acima de 6), ou reprovado.

1. [Positivo ou negativo?](/02-condicionais/If_e_else/04-positivo_ou_negativo.c): Leia um valor e escreva se ele é positivo ou negativo (considerando 0 como positivo).

1. [Ordem crescente](/02-condicionais/If_e_else/05-ordem_crescente.c): Leia dois valores (considere que não serão lidos valores iguais) e escreve-los e ordem crescente.

1. [Preço de vendas](/02-condicionais/If_e_else/06-valor_maça.c): As maças custam R$1,30 cada se forem compradas menos de uma dúzia, e R$1,00 se forem comprados pelos menos 12. Escreva um programa que leia o número de maças compradas, calcule e escreva o custo total da compra.

1. [Faixa etária](/02-condicionais/If_e_else/07-faixa-etaria.c): Desenvolva um algoritmo que leia a idade de uma pessoa e informe a sua faixa etária:

   - Bebê: entre 0 e 2 anos.
   - Criança: entre 3 e 11 anos.
   - Adolescente: entre 12 e 17 anos.
   - Jovem: entre 18 e 30 anos.
   - Adulto: entre 31 e 59 anos.
   - Idoso: acima de 60 anos.

1. [Duração do jogo](/02-condicionais/If_e_else/08-duracao_xadrez.c): Leia a hora de início e a hora do fim de um jogo de xadrez (considere apenas horas inteiras, sem os minutos) e calcule a duração de jogo em horas, sabendo que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.

1. [Média alinhada](/02-condicionais/If_e_else/09-mediaAlinhada.c): Um professor deseja automatizar o processo de avaliação das notas de seus alunos. Ele pede a você para criar um programa em C que irá ler as notas das três provas de um aluno e determinar sua situação acadêmica com base em sua média. O professor adota as seguintes regras:

   - A média mínima para aprovação é 7.0.
   - Se a média estiver entre 4.0 e 6.9 (inclusive), o aluno estará em recuperação.
   - Se a média for menor que 4.0, o aluno será reprovado.

   Você deve criar um programa que solicita ao usuário que insira as notas das três provas, calcula a média das notas e, em seguida, imprime a situação acadêmica do aluno com base nas regras acima.

1. [É um triangulo?](/02-condicionais/If_e_else/11-triangulo.c): Faça um programa que leia os 3 lados de uma forma e identifique, se é ou não um triangulo. Use if alinhados para treinar.

1. [Operações com idade](/02-condicionais/If_e_else/10-operaceos_com_idades.c): Leia a idade de 2 homens, em seguida leia a idade de 2 mulheres. Em seguida mostre:

   - A soma do homem mais velho com a mulher mais nova.
   - O produto do homem mais novo com a mulher mais velha
   - A soma do homem mais velho com a mulher mais nova.
   - O produto do homem mais novo com a mulher mais velha.
     > Use ifs alinhados para treinar.

### [Switch case](/02-condicionais/switch_case/README.md)

1. [Dia da semana](/02-condicionais/switch_case/01-dia_da_semana.c): Leia o número que representa o dia da semana e imprima o nome do dia da semana

1. [Mês](/02-condicionais/switch_case/02-mes.c): Leia o número que representa um mês do ano e imprima o nome do mês.

1. [Consolante ou vogal?](/02-condicionais/switch_case/03-consoante_ou_vogal.c): Leia uma letra e imprima se ela é uma vogal ou uma consoante.

1. [Estação do ano](/02-condicionais/switch_case/04-estacao.c): Leia um número inteiro (1 a 12) e imprima a estação do ano correspondente.

1. [Dia útil](/02-condicionais/switch_case/05-dia_util.c): Leia um número inteiro (1 a 7) e imprima se é dia útil ou fim de semana.

1. [Grau correspondente](/02-condicionais/switch_case/06-grau_correspondente.c): Leia um número de 1 a 5 e imprima o grau correspondente.

   - 1 - Muito fraco
   - 2 - Fraco
   - 3 - Moderado
   - 4 - Forte
   - 5 - Muito forte

1. [Quantos dias tem o mês?](/02-condicionais/switch_case/07-dias_do_mes.c): Leia um número inteiro de 1 a 12 e imprima o número de dias no mês correspondente.

1. [Maiúscula ou minúscula](/02-condicionais/switch_case/08-maiuscula_minuscula.c): Leia uma letra e imprima se é uma letra maiúscula, minúscula ou um caractere não alfabético.

1. [Trimestre](/02-condicionais/switch_case/09-trimestre.c): Leia um número inteiro de 1 a 12 e imprima o número do trimestre ao qual esse mês pertence.

1. [Menu com taxas populacionais](/02-condicionais/switch_case/10-taxas_populacionais.c): A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de fundamental importância por ajudar a compreender aquilo que os especialistas chamas de dinâmica populacional e a entender sua relação com variáveis que influenciam o desenvolvimento, como qualidade de vida, migrações, fatores socioeconômicos e localização. Sabendo disso, crie um programa que calcule os dois indicadores utilizando o comando `switch`.

   ```
   taxa de natalidade =  (número de crianças nascidas x 1000) / número de habitantes
   ```

   ```
   taxa de mortalidade = (número de óbitos x 1000) / número de habitantes
   ```

1. [Senhor dos aneis](/02-condicionais/switch_case/11-senhor_dos_aneis.c): No dia da estreia do filme "Senhor dos Anéis", uma grande emissora de TV realizou uma pesquisa logo após o encerramento do filme. Cada espectador respondeu a um questionário no qual constava sua idade e sua opinião em relação ao filme:

   - 3 - Excelente;
   - 2 - Bom;
   - 1 - Regular;

   Criar um algoritmo que receba a idade e opinião de vários espectadores, calcule e imprima:

   - A média das idades das pessoas que responderam excelente;
   - A quantidade de pessoas que responderam regular;
   - A percentagem de pessoas que responderam bom entre todos os expectadores analisados.