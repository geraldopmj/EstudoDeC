#include <stdio.h>
#include <string.h>

// ------------------------------------------------------------------------------------------------------------------------------
// funcoes basicas---------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------------------

void limparEntrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}
// O código acima uma função em linguagem C chamada limparEntrada,
// que é usada para limpar o buffer de entrada. O objetivo dessa função é descartar todos os caracteres
// pendentes no buffer de entrada (geralmente o teclado) até que seja encontrado um caractere de nova linha ('\n')
// ou o final do arquivo (EOF).
// NECESSÁRIO PRA USAR fgets

void scanText(char *variable, int lenght)
{
    fgets(variable, lenght, stdin);
    // Guarda na variavel (1 arg) o que o user digitou, o segundo arg o tamanho da var, o 3 define o arquivo (standard input)
    // só guarda coisa sem espaço pra guardar com espaço tem q usar fgets

    strtok(variable, "\n");
    // necessário depois do fgets, pra eliminar o enter da variável gerando quebra de linha indesejada
}

// ------------------------------------------------------------------------------------------------------------------------------
// Funcao principal--------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------------------

int main()
{
    // declarar variável

    int nomeVariavel;
    char seuNome[50], seuNome2[50];

    // ------------------------------------------------------------------------------------------------------------------------------
    // ENTRADA E SAÍDA DE DADOS------------------------------------------------------------------------------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------

    nomeVariavel = 10;

    // PRINT-----------------------------------------------------------------------------------------------------------
    printf("O que esta guardado na variavel e: %i\n", nomeVariavel);
    // Printa o primeiro argumento é o que sera e o tipo, o segundo arg as var q serão printadas
    // %i integral, %f float, %lf double, %s string

    // SCANF-----------------------------------------------------------------------------------------------------------
    printf("Digite um valor para ser guardado na variavel:\n");
    scanf("%i", &nomeVariavel);
    // Guarda na variavel o que o user digitou o primeiro argumento é o tipo, o segundo o nome da var onde sera salva
    // só guarda coisa até o espaço pra guardar com espaço tem q usar fgets
    printf("O que esta guardado na variavel e: %i\n", nomeVariavel);

    // FGETS-----------------------------------------------------------------------------------------------------------
    printf("Digite o seu nome:\n");

    limparEntrada();
    // necessário antes do fgets pra limpar o buffer de entrada

    fgets(seuNome, 50, stdin);
    // Guarda na variavel (1 arg) o que o user digitou, o segundo arg o tamanho da var, o 3 define o arquivo (standard input)
    // só guarda coisa sem espaço pra guardar com espaço tem q usar fgets

    strtok(seuNome, "\n");
    // necessário depois do fgets, pra eliminar o enter da variável gerando quebra de linha indesejada

    // ---------ATENCAO foi criada a funcao scanText(var,lenght) para facilitar tudo isso TA LA EM CIMA!!!--------

    printf("O seu nome e: %s\n", seuNome);
    printf("Digite o seu nome:\n");
    scanText(seuNome2, 50);
    printf("O seu nome e: %s\n", seuNome2);

    // ------------------------------------------------------------------------------------------------------------------------------
    // ESTRUTURA CONDICIONAL---------------------------------------------------------------------------------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------

    int horaDigitada = 1;

    if (horaDigitada = 1)
    {
        printf("Boa noite!\n");
    }

    // IF ELSE------------------------------------------------------------------------------------------------------------

    if (horaDigitada < 6)
    {
        printf("Boa noite!\n");
    }
    else
    {
        printf("Bom dia!\n");
    }

    // IF ELSE IF--------------------------------------------------------------------------------------------------------

    printf("Digite a hora: \n");
    scanf("%i", &horaDigitada);
    if (horaDigitada > 4 && horaDigitada < 12)
    {
        printf("Bom dia!\n");
    }
    else if (horaDigitada > 12 && horaDigitada < 18)
    {
        printf("Boa tarde!\n");
    }
    else
    {
        printf("Boa noite!\n");
    }

    // ------------------------------------------------------------------------------------------------------------------------------
    // ESTRUTURA REPETICAO---------------------------------------------------------------------------------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------

    // WHILE--------------------------------------------------------------------------------------------------------

    printf("while\n");
    while (horaDigitada < 18)
    {
        printf("Bom dia!\n");
        horaDigitada++;
    }

    // FOR----------------------------------------------------------------------------------------------------------

    printf("for\n");
    for (horaDigitada = 1; horaDigitada < 18; horaDigitada++)
    {
        printf("Bom dia!\n");
    }

    // DO WHILE-----------------------------------------------------------------------------------------------------
    printf("do while\n");
    horaDigitada = 1;
    do
    {
        printf("Bom dia!\n");
        horaDigitada++;
    } while (horaDigitada < 18);

    // ------------------------------------------------------------------------------------------------------------------------------
    // VETORES-----------------------------------------------------------------------------------------------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------

    int vetor1[10]; // cria vetor de 10 indices do tipo inteiro

    int N, i, soma, media;
    printf("Quantas notas para calcular a media?\n");
    scanf("%i", &N);

    int vetorNotas[N];

    for (i = 0; i < N; i++)
    {
        printf("Digite uma nota:\n");
        scanf("%i", &vetorNotas[i]);
    }

    soma = 0;

    for (i = 0; i < N; i++)
    {
        soma = soma + vetorNotas[i];
    }
    media = soma / N;
    printf("A media e %i\n", media);

    printf("Programa executado com sucesso!\n");
    return 0;
}
