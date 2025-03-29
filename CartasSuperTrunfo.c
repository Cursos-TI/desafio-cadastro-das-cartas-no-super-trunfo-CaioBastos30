#include <stdio.h>

// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    printf("DESAFIO SUPER TRUNFO - PAÍSES \n\n");

    // Passo 1: Declaração das variáveis.
    
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    // Passo 2: Cadastro das cartas pelo usuário.

    // Passo 2.1: Cadastro da Carta 1.

    printf("Cadastro da Carta 1:\n");
    printf("\n");
    printf("Digite a letra que representa o estado: ");
    scanf("%c", &estado1);
    printf("\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("\n");
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);
    printf("\n");
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);
    printf("\n");
    printf("Digite o Produto Interno Bruto (PIB) da cidade em bilhões de reais: ");
    scanf("%f", &pib1);
    printf("\n");
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // Passo 2.2: Cadastro da Carta 2.
    
    printf("Cadastro da Carta 2:\n");
    printf("\n");
    printf("Digite a letra que representa o estado: ");
    getchar(); // Foi preciso incluir um "consumo de quebra de linha", pois a linha estava sendo pulada antes de incluir a informação solicitada.
    scanf("%c", &estado2);
    printf("\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("\n");
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);
    printf("\n");
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("\n");
    printf("Digite o Produto Interno Bruto (PIB) da cidade em bilhões de reais: ");
    scanf("%f", &pib2);
    printf("\n");
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // Passo 3: Exibição dos dados das cartas.

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
