#include <stdio.h>

// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    printf("DESAFIO SUPER TRUNFO - PAÍSES \n\n");

    // Passo 1: Definição das variáveis.
    
    char estado;
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    // Passo 2: Cadastro das cartas pelo usuário.
    
    printf("Cadastro da Carta 1\n");
    printf("Digite a letra que representa o estado: ");
    scanf("%c", &estado);
    printf("\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo);
    printf("\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("\n");
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("\n");
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    printf("\n");

    // Passo 3: Exibição dos dados das cartas.

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area, "km²");


    return 0;
}
