#include <stdio.h>

// Estrutura da carta (Tive de aprender a função struct para salvar os dados)
typedef struct
{
    char estado; // Definição das variáveis da carta
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_Turisticos;
}Carta;


int main(){
    Carta carta_1; // Variáveis onde os dados da carta serão salvos
    Carta carta_2; 

    printf("---- Insira os dados da Carta 1 ----"); // Criação da carta 1
    printf("\nDigite a letra do estado (A-H): ");
    scanf(" %c", &carta_1.estado);

    printf("\nDigite o código da cidade: ");
    scanf("%s", carta_1.codigo);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", carta_1.cidade);

    printf("\nDigite a população da cidade: ");
    scanf("%d", &carta_1.populacao);

    printf("\nDigite a área da cidade (km²): ");
    scanf("%f", &carta_1.area);

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &carta_1.pib);

    printf("\nDigite o n° de pontos turísticos: ");
    scanf("%d", &carta_1.pontos_Turisticos);
    
    printf("\n---- Insira os dados da Carta 2 ----"); // Criação da carta 2
    printf("\nDigite a letra do estado (A-H): ");
    scanf(" %c", &carta_2.estado);

    printf("\nDigite o código da cidade: ");
    scanf("%s", carta_2.codigo);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", carta_2.cidade);

    printf("\nDigite a população da cidade: ");
    scanf("%d", &carta_2.populacao);

    printf("\nDigite a área da cidade (km²): ");
    scanf("%f", &carta_2.area);

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &carta_2.pib);

    printf("\nDigite o n° de pontos turísticos: \n");
    scanf("%d", &carta_2.pontos_Turisticos);

    // Imprimindo os dados das cartas
    // Carta 1:
    printf("=========== Carta 1 =========== \n");
    printf("Estado:  %c\n", carta_1.estado);
    printf("Código: %s\n", carta_1.codigo);
    printf("Cidade: %s\n", carta_1.cidade);
    printf("População: %d\n", carta_1.populacao);
    printf("Área: %.2f\n", carta_1.area);
    printf("PIB: %.2f\n", carta_1.pib);
    printf("N° de Pontos Turísticos: %d\n", carta_1.pontos_Turisticos);

    // Carta 2:
    printf("=========== Carta 2 =========== \n");
    printf("Estado:  %c\n", carta_2.estado);
    printf("Código: %s\n", carta_2.codigo);
    printf("Cidade: %s\n", carta_2.cidade);
    printf("População: %d\n", carta_2.populacao);
    printf("Área: %.2f\n", carta_2.area);
    printf("PIB: %.2f\n", carta_2.pib);
    printf("N° de Pontos Turísticos: %d", carta_2.pontos_Turisticos);
    
    return 0;
}