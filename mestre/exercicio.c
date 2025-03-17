#include <stdio.h>

int main() {
    

    // Variaveis nivel novato
    char estado1[100], estado2[100];
    char codigo1[100], codigo2[100];
    char cidade1[100], cidade2[100];
    unsigned long int habitantes1, habitantes2;
    float area1, area2;
    float pib1, pib2;
    int pontost1, pontost2;

    // Variaveis nivel aventureiros 
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;


     int resultadoHabitantes;
     int resultadoArea;
     int resultadoPib;
     int resultadoPontos;
     int resultadoDensidade;
     int resultadoPibPercapita;
     int resultadoSuperPoder;

     densidade1 = (float) habitantes1 / area1;
     densidade2 = (float) habitantes2 / area2;
     pibpercapita1 = pib1 / (float) habitantes1;
     pibpercapita2 = pib2 / (float) habitantes2;
    
    // Variaveis nivel mestre
    float superPoder1, superPoder2;
    float inversoDensidade1, inversoDensidade2;

    inversoDensidade1 = area1 / habitantes1;
    inversoDensidade2 = area2 / habitantes2;

    superPoder1 = (float)habitantes1 + area1 + pib1 + (float)pontost1 + pibpercapita1 + inversoDensidade1;
    superPoder2 = (float)habitantes2 + area2 + pib2 + (float)pontost2 + pibpercapita2 + inversoDensidade2;

    //Resultado
    resultadoHabitantes = habitantes1 > habitantes2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontos = pontost1 > pontost2;
    resultadoDensidade = densidade1 < densidade2;
    resultadoPibPercapita = pibpercapita1 > pibpercapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    
    // CARTA 1
    printf("Carta 1: \n");
    printf("Digite seu estado: \n");
    scanf("%s", estado1);

    printf("Digite seu codigo: \n");
    scanf("%s", codigo1);

    printf("Digite sua cidade: \n");
    scanf(" %s", cidade1);

    printf("Quantidade de habitantes: \n");
    scanf("%ld", &habitantes1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontost1);

    // CARTA 2
    printf("\nCarta 2: \n");
    printf("Digite seu estado: \n");
    scanf("%s", estado2);

    printf("Digite seu codigo: \n");
    scanf("%s", codigo2);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade2);

    printf("Quantidade de habitantes: \n");
    scanf("%ld", &habitantes2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontost2);

    densidade1 = (float) habitantes1 / area1;
    densidade2 = (float) habitantes2 / area2;

    
   

    pibpercapita1 = pib1 / (float) habitantes1;
    pibpercapita2 = pib2 / (float) habitantes2;

    
    

    // EXIBINDO OS DADOS
    printf("\nCarta 1: \n");
    printf("Seu estado eh: %s \n", estado1);
    printf("Seu codigo eh: %s \n", codigo1);
    printf("Sua cidade eh: %s \n", cidade1);
    printf("Quantidade de habitantes: %d \n", habitantes1);
    printf("Area: %.2f km2 \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turisticos: %d \n", pontost1);
    printf("Densidade: %.2f \n", densidade1);
    printf("O Super Poder: %f \n", superPoder1);
    printf("Densidade: %.2f \n", densidade1);
    printf("pibpercapita: %.2f \n", pibpercapita1);

    printf("\nCarta 2: \n");
    printf("Seu estado eh: %s \n", estado2);
    printf("Seu codigo eh: %s \n", codigo2);
    printf("Sua cidade eh: %s \n", cidade2);
    printf("Quantidade de habitantes: %d \n", habitantes2);
    printf("Area: %.2f km2 \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turisticos: %d \n", pontost2);
    printf("O Super Poder: %f \n", superPoder2);
    printf("Densidade: %.2f \n", densidade2);
    printf("pibpercapita: %.2f \n", pibpercapita2);

    
    //Comparações das cartas 
    printf("Carta 1 venceu %d \n", resultadoHabitantes);
    printf("Carta 1 venceu %d \n", resultadoArea);
    printf("Carta 1 venceu %d \n", resultadoPib);
    printf("Carta 1 venceu %d \n", resultadoPontos);
    printf("Carta 1 venceu %d \n", resultadoDensidade);
    printf("Carta 1 venceu %d \n", resultadoPibPercapita);
    printf("Carta 1 venceu %d \n", resultadoSuperPoder);

    return 0;
    
}