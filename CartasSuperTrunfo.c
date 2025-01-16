#include <stdio.h>

int main() {
    // Inicialização das variáveis 
    char codigo_cidade[5];
    char nome[20];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;
    

    // Cadastro dos dados:
    printf("Código da cidade que deseja cadastrar:\n");
    scanf("%s", &codigo_cidade);

    printf("Adicione o nome da cidade %s:\n", codigo_cidade);
    scanf("%s", &nome);

    printf("Adicione a quantidade população da cidade:\n");
    scanf("%d", &populacao);

    printf("Adicione a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_turisticos);

    printf("Adicione a área da cidade em km2:\n");
    scanf("%f", &area);

    printf("Adicione o PIB da cidade:\n");
    scanf("%f", &pib);


    
    // Exibição dos Dados das Cartas:
    printf("Código da cidade: %s\n", codigo_cidade);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos);
    printf("Área: %f km2\n", area);
    printf("PIB: %f bilhões\n", pib);

    return 0;
}
