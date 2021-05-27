/*
* Atividade Pr�tica - Exerc�cio 2
* Aluno: Marcos Fabricio Sizanosky RU-3395570
* Professor: Winston Sen Lun Fung
* Data cria��o: 28/04/2021
*/

#include <stdio.h>
#include <locale.h>

// Fun��o para limpar o buffer do teclado ap�s um "scanf_s".
void limpa_buffer_teclado();

int main() {
    printf("Hello World!\n\n");

    // Fun��o para habilitar a utiliza��o de caracteres da l�ngua portuguesa.
    setlocale(LC_ALL, "Portuguese");

    // Declara��o de vetor, vari�veis e ponteiros.
    int vetor_ru[7]; // Vetor de 7 posi��es para armazenar o RU.

    int i; // Vari�vel usada para iterar no loop "for" como �ndice do vetor_ru.
    int cont = 0; // Vari�vel mostra qual � o d�gito � ser inserido.
    int res = 0; // Vari�vel resultado da soma de todos os d�gitos do RU.

    int *p_vetor = vetor_ru; // Ponteiro "aponta" para o "vetor_ru".
    int *p_soma = &res; // Ponteiro "aponta" para vari�vel "res".

    // Cabe�alho do programa e informa��es ao usu�rio.
    printf("+=+=+=+=+=+= VETOR RU ALUNO =+=+=+=+=+=+\n\n");
    printf("- Digite o n�mero do seu RU (somente n�meros).\n");
    printf("- Visualize na tela a soma de todos os d�gitos do seu RU.\n\n");

    // A entrada do usu�rio � armazenada nos indices do "vetor_ru".
    for (i = 0; i < 7; i++) {
        cont++; // Apenas incrementa o n�mero do digito "%d" a ser inserido
        printf("Digite o %d� d�gito do seu RU: ", cont);
        scanf_s("%i", &p_vetor[i]);
        limpa_buffer_teclado();
    }

    printf("\n+=+=+=+=+=+= SOMA D�GITOS RU =+=+=+=+=+=+\n\n");
    printf("RU informado..............: ");

    // Itera os indices de "p_vetor" e imprime com formato de um n�mero "�nico".
    // Ponteiro "p_soma" recebe a soma de todos dados no �ndice do vetor.
    for (i = 0; i < 7; i++) {
        printf("%i", p_vetor[i]);
        *p_soma = *p_soma + p_vetor[i];
    }

    printf("\nSoma dos d�gitos do RU....: ");
    printf("%i", *p_soma); // Imprime na tela a soma de todos os d�gitos do RU.
    printf("\n");

    return 0;
}

void limpa_buffer_teclado() {
    /* Est� fun��o � utilizada para limpar o buffer do teclado ap�s
     * um "scanf_s".*/

    char c;
    while ((c = getchar()) != '\n' && c != EOF);

}