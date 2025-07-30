#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct
{
    char estado; // Definição das variáveis da carta
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_Turisticos;
    float densidade_Populacional;
    float pib_Per_Capta;
}Carta;

// função que divide a população pela área para encontrar a densidade populacional
// também divide o pib pela população para encontrar o pib per capta
// depois, guarda essas informações em suas respectivas variáveis
void divisao(Carta *c){ 
     c->densidade_Populacional = (float)c->populacao / (float)c->area;
     c->pib_Per_Capta = (float)c->pib / (float)c->populacao; 

}

int main(){
    Carta carta_1, carta_2; // Variáveis onde os dados da carta serão salvos
   
    printf("---- Insira os dados da Carta 1 ----"); // Criação da carta 1
    printf("\nDigite a letra do estado (A-H): ");
    scanf(" %c", &carta_1.estado);

    printf("\nDigite o código da cidade: ");
    scanf(" %s%*c", carta_1.codigo);

    printf("\nDigite o nome da cidade: ");
    fgets(carta_1.cidade, sizeof(carta_1.cidade), stdin);

    printf("\nDigite a população da cidade: ");
    scanf("%d", &carta_1.populacao);

    printf("\nDigite a área da cidade (km²): ");
    scanf("%f", &carta_1.area);

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &carta_1.pib);

    printf("\nDigite o n° de pontos turísticos: ");
    scanf("%d", &carta_1.pontos_Turisticos);
    
    printf("---- Insira os dados da Carta 2 ----"); // Criação da carta 2
    printf("\nDigite a letra do estado (A-H): ");
    scanf(" %c", &carta_2.estado);

    printf("\nDigite o código da cidade: ");
    scanf(" %s%*c", carta_2.codigo);

    printf("\nDigite o nome da cidade: ");
    fgets(carta_2.cidade, sizeof(carta_2.cidade), stdin);

    printf("\nDigite a população da cidade: ");
    scanf("%d", &carta_2.populacao);

    printf("\nDigite a área da cidade (km²): ");
    scanf("%f", &carta_2.area);

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &carta_2.pib);

    printf("\nDigite o n° de pontos turísticos: ");
    scanf("%d", &carta_2.pontos_Turisticos);

    // Imprimindo os dados das cartas
    // Carta 1:
    divisao(&carta_1); // Chamamento da função para carta 1
    printf("=========== Carta 1 =========== \n");
    printf("Estado:  %c\n", carta_1.estado);
    printf("Código: %s\n", carta_1.codigo);
    printf("Cidade: %s\n", carta_1.cidade);
    printf("População: %d\n", carta_1.populacao);
    printf("Área: %.2f\n", carta_1.area);
    printf("PIB: %.2f\n", carta_1.pib);
    printf("N° de Pontos Turísticos: %d\n", carta_1.pontos_Turisticos);
    printf("Densidade Populacional: %.2f\n", carta_1.densidade_Populacional);
    printf("Pib per capta: %.2f\n", carta_1.pib_Per_Capta);

    // Carta 2
    divisao(&carta_2); // Chamamento da função para carta 2
    printf("=========== Carta 2 =========== \n");
    printf("Estado:  %c\n", carta_2.estado);
    printf("Código: %s\n", carta_2.codigo);
    printf("Cidade: %s\n", carta_2.cidade);
    printf("População: %d\n", carta_2.populacao);
    printf("Área: %.2f\n", carta_2.area);
    printf("PIB: %.2f\n", carta_2.pib);
    printf("N° de Pontos Turísticos: %d\n", carta_2.pontos_Turisticos);
    printf("Densidade Populacional: %.2f\n", carta_2.densidade_Populacional);
    printf("Pib per capta: %.2f\n", carta_2.pib_Per_Capta);
    
    return 0;
};
