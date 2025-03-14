#include <stdio.h>
#include <string.h> // Adicionada para usar strcspn()

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Entrada dos dados da primeira carta
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    getchar(); // Limpa o buffer
    
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf(" %3s", codigo1);
    getchar(); // Limpa o buffer
    
    printf("Digite o nome da cidade da Carta 1: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // Remove a quebra de linha
    
    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área da cidade da Carta 1 (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da cidade da Carta 1: ");
    scanf("%d", &pontosTuristicos1);
    getchar(); // Limpa o buffer
    
    // Entrada dos dados da segunda carta
    printf("\nDigite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    getchar(); // Limpa o buffer
    
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf(" %3s", codigo2);
    getchar(); // Limpa o buffer
    
    printf("Digite o nome da cidade da Carta 2: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0'; // Remove a quebra de linha
    
    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade da Carta 2 (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade da Carta 2: ");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos dados das cartas
    printf("\n============================\n");
    printf("          CARTA 1           \n");
    printf("============================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("\n============================\n");
    printf("          CARTA 2           \n");
    printf("============================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}
