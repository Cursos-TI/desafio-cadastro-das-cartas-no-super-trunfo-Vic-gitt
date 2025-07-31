#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct
{
    char estado; // Definição das variáveis da carta
    char codigo[5];
    char cidade[50];
    unsigned long int populacao;
    float area;
    unsigned long int pib;
    int pontos_Turisticos;
    float densidade_Populacional;
    float pib_Per_Capta;
    float superPoder;
}Carta;

// função que divide a população pela área para encontrar a densidade populacional
// também divide o pib pela população para encontrar o pib per capta
// depois, guarda essas informações em suas respectivas variáveis
void divisao(Carta *c){ 
     c->densidade_Populacional = (float)c->populacao / (float)c->area;
     c->pib_Per_Capta = (float)c->pib / (float)c->populacao; 

}

//Função que compara atributos das cartas    
int comparar(Carta carta_1, Carta carta_2){ 
    int pontos1 = 0, pontos2 = 0; // Pontuação entre as cartas

    printf("===============População================\n");
    if(carta_1.populacao > carta_2.populacao) 
    { // Comparando população
        printf(" %s venceu! (%d)\n",carta_1.cidade, carta_1.populacao > carta_2.populacao);
        pontos1++;
        printf("Pontuação: %d x %d.\n", pontos1,pontos2);
    } else {
        printf(" %s venceu! (%d)\n", carta_2.cidade, carta_1.populacao > carta_2.populacao);
        pontos2++;
        printf("Pontuação: %d x %d.\n", pontos1,pontos2);
    }
    printf("================Area===============\n");
    if (carta_1.area > carta_2.area)
    { // Comparando áreas
        printf(" %s venceu! (%d)\n",carta_1.cidade, (int)(carta_1.area > carta_2.area));
        pontos1++;
        printf("Pontuação: %d x %d\n",pontos1,pontos2);
    } else {
        printf(" %s venceu! (%d)\n", carta_2.cidade, (int)(carta_1.area > carta_2.area));
        pontos2++;
        printf("Pontuação: %d x %d\n", pontos1,pontos2);
    }
    printf("===============PIB================\n");
    if (carta_1.pib > carta_2.pib)
    { // Comparando PIB
        printf(" %s venceu! (%d)\n",carta_1.cidade, carta_1.pib > carta_2.pib);
        pontos1++;
        printf("Pontuação: %d x %d\n",pontos1,pontos2);
    } else {
        printf(" %s venceu! (%d)\n", carta_2.cidade, carta_1.pib > carta_2.pib);
        pontos2++;
        printf("Pontuação: %d x %d\n", pontos1,pontos2);
    }
    printf("==============Pontos Turísticos=================\n"); 
    if (carta_1.pontos_Turisticos > carta_2.pontos_Turisticos)
    { // Comparando n° de pontos turísticos
        printf(" %s venceu! (%d)\n",carta_1.cidade, carta_1.pontos_Turisticos > carta_2.pontos_Turisticos);
        pontos1++;
        printf("Pontuação: %d x %d\n",pontos1,pontos2);
    } else {
        printf(" %s venceu! (%d)\n", carta_2.cidade, carta_1.pontos_Turisticos > carta_2.pontos_Turisticos);
        pontos2++;
        printf("Pontuação: %d x %d\n", pontos1,pontos2);
    }

    // Invertendo o valor da densidade populacional
    float inverso1 = 1/carta_1.densidade_Populacional;
    float inverso2 = 1/carta_2.densidade_Populacional;
    printf("===========Densidade Populacional====================\n");
    if (inverso1 < inverso2)
    { // Comparando o inverso da densidade populacional (o menor valor vence)
        printf(" %s venceu! (%d)\n",carta_1.cidade, (int)(inverso1 < inverso2));
        pontos1++;
        printf("Pontuação: %d x %d\n",pontos1,pontos2);
    } else {
        printf(" %s venceu! (%d)\n", carta_2.cidade, (int)(inverso1 < inverso2));
        pontos2++;
        printf("Pontuação: %d x %d\n", pontos1,pontos2);
    }
    printf("=============Pib Per Capta==================\n");
    if (carta_1.pib_Per_Capta > carta_2.pib_Per_Capta)
    { // Comparando pib per capta
        printf(" %s venceu! (%d)\n",carta_1.cidade, (int)(carta_1.densidade_Populacional > carta_2.densidade_Populacional));
        pontos1++;
        printf("Pontuação: %d x %d\n",pontos1,pontos2);
    } else {
        printf(" %s venceu! (%d)\n", carta_2.cidade, (int)(carta_1.densidade_Populacional > carta_2.densidade_Populacional));
        pontos2++;
        printf("Pontuação: %d x %d\n", pontos1,pontos2);
    }
    
    
};

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
    scanf("%lu", &carta_1.pib);

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
    printf("População: %lu\n", carta_1.populacao);
    printf("Área: %.2f\n", carta_1.area);
    printf("PIB: %lu\n", carta_1.pib);
    printf("N° de Pontos Turísticos: %d\n", carta_1.pontos_Turisticos);
    printf("Densidade Populacional: %.2f\n", carta_1.densidade_Populacional);
    printf("Pib per capta: %.2f\n", carta_1.pib_Per_Capta);

    // Carta 2
    divisao(&carta_2); // Chamamento da função para carta 2
    printf("=========== Carta 2 =========== \n");
    printf("Estado:  %c\n", carta_2.estado);
    printf("Código: %s\n", carta_2.codigo);
    printf("Cidade: %s\n", carta_2.cidade);
    printf("População: %lu\n", carta_2.populacao);
    printf("Área: %.2f\n", carta_2.area);
    printf("PIB: %lu\n", carta_2.pib);
    printf("N° de Pontos Turísticos: %d\n", carta_2.pontos_Turisticos);
    printf("Densidade Populacional: %.2f\n", carta_2.densidade_Populacional);
    printf("Pib per capta: %.2f\n", carta_2.pib_Per_Capta);

    // Comparação de atributos das cartas
    comparar(carta_1,carta_2); // Chamamento da função comparar

    return 0;
};
