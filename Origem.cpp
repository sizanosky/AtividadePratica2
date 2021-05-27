/*
* Atividade Prática - Exercício 2
* Aluno: Marcos Fabricio Sizanosky RU-3395570
* Professor: Winston Sen Lun Fung
* Data criação: 28/04/2021
*/

#include <stdio.h>
#include <locale.h>

// Função para limpar o buffer do teclado após um "scanf_s".
void limpa_buffer_teclado();

int main() {
    printf("Hello World!\n\n");

    // Função para habilitar a utilização de caracteres da língua portuguesa.
    setlocale(LC_ALL, "Portuguese");

    // Declaração de vetor, variáveis e ponteiros.
    int vetor_ru[7]; // Vetor de 7 posições para armazenar o RU.

    int i; // Variável usada para iterar no loop "for" como índice do vetor_ru.
    int cont = 0; // Variável mostra qual é o dígito à ser inserido.
    int res = 0; // Variável resultado da soma de todos os dígitos do RU.

    int *p_vetor = vetor_ru; // Ponteiro "aponta" para o "vetor_ru".
    int *p_soma = &res; // Ponteiro "aponta" para variável "res".

    // Cabeçalho do programa e informações ao usuário.
    printf("+=+=+=+=+=+= VETOR RU ALUNO =+=+=+=+=+=+\n\n");
    printf("- Digite o número do seu RU (somente números).\n");
    printf("- Visualize na tela a soma de todos os dígitos do seu RU.\n\n");

    // A entrada do usuário é armazenada nos indices do "vetor_ru".
    for (i = 0; i < 7; i++) {
        cont++; // Apenas incrementa o número do digito "%d" a ser inserido
        printf("Digite o %dº dígito do seu RU: ", cont);
        scanf_s("%i", &p_vetor[i]);
        limpa_buffer_teclado();
    }

    printf("\n+=+=+=+=+=+= SOMA DÍGITOS RU =+=+=+=+=+=+\n\n");
    printf("RU informado..............: ");

    // Itera os indices de "p_vetor" e imprime com formato de um número "único".
    // Ponteiro "p_soma" recebe a soma de todos dados no índice do vetor.
    for (i = 0; i < 7; i++) {
        printf("%i", p_vetor[i]);
        *p_soma = *p_soma + p_vetor[i];
    }

    printf("\nSoma dos dígitos do RU....: ");
    printf("%i", *p_soma); // Imprime na tela a soma de todos os dígitos do RU.
    printf("\n");

    return 0;
}

void limpa_buffer_teclado() {
    /* Está função é utilizada para limpar o buffer do teclado após
     * um "scanf_s".*/

    char c;
    while ((c = getchar()) != '\n' && c != EOF);

}