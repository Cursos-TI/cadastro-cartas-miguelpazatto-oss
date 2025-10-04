#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main () {

 char estado1[20];
    char codigo1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;
    float densidade1;
    float PIBp1;
    
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float densidade2;
    float PIBp2;

    /*Acima estão definidas as variáveis que dizem respeito aos componentes de cada carta (ass com final 1 se referem a primeira carta e as com final 2 a segunda), eles irão aparecer na ordem: 
    Nome do estado
    Código da carta
    Nome da cidade
    População
    Área
    PIB
    Pontos turisticos
    Desenidade populacional
    PIB per capita
    */

    printf("Vamos montar as cartas do seu super-trunfo, para isso siga as seguintes regras:\n");
    printf("Não de espaço entre as palavras (demarque com um hífen), use pontos ao invés de vírgulas e fique atento para não errar as informações\n");

    printf("\n");

    printf("Coloque abaixo as informações da sua primeira carta:\n");
    
    printf("Estado que ela faz parte:\n");
    scanf("%s", estado1);

    printf("Código da sua carta:\n");
    scanf("%s", codigo1);

    printf("Nome da cidade:\n");
    scanf("%s", cidade1);

    printf("População da cidade:\n");
    scanf("%d", &populacao1);

    printf("Área em km²:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &turismo1);

    printf("\n");

    printf("Coloque abaixo as informações da sua segunda carta:\n");
    
    printf("Estado que ela faz parte:\n");
    scanf("%s", estado2);

    printf("Código da sua carta:\n");
    scanf("%s", codigo2);

    printf("Nome da cidade:\n");
    scanf("%s", cidade2);

    printf("População da cidade:\n");
    scanf("%d", &populacao2);

    printf("Área em km²:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &turismo2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    PIBp1 = populacao1 / pib1;
    PIBp2 = populacao2 / pib2;


    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos turisticos: %d\n", turismo1);
    printf("Densidade populacional: %f\n", densidade1);
    printf("PIB per capita: %f\n", PIBp1);
    
    
    printf("\n");
    
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos turisticos: %d\n", turismo2);
    printf("Densidade populacional: %f\n", densidade2);
    printf("PIB per capita: %f\n", PIBp2);

    return 0;
    
}
