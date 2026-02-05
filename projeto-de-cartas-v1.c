#include <string.h>
#include <stdio.h>

int main() {
    //Calculo das Cartas2
    float densidadep1, densidadep2, pibc1, pibc2;
    //calculo das casrtas3
    float Inversoden1, Inversoden2, superpoder1, superpoder2;
    float densidadeinv1, densidadeinv2;
    int resultado_populacao, resultado_area, resultado_pib, resultado_pibc, resultado_pontos, resultado_densidade, resultado_super_poder;
    // Carta 1
    char estado1[2];
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2[2];
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Apresentação do jogo
    printf("\n");
    printf("Agora, iniciaremos a criação das suas cartas.\n");
    printf("Por favor, siga as instruções abaixo.\n");
    printf("\n");

    // Criando a Carta 1
    printf("Criação da Carta 1\n");
    printf("Digite uma letra de 'A' a 'H' para representar um dos oito estados:\n");
    scanf("%1s", estado1);

    printf("Digite o código da carta (Ex: A01, B03):\n");
    scanf("%3s", codigo1);

    printf("Escolha o nome da sua cidade:\n");
    // o [^\n] posibilizar ler nomes com espaco
    scanf(" %99[^\n]", cidade1); 

    printf("Digite o número de habitantes da sua cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto (PIB) da sua cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos que a sua cidade possui:\n");
    scanf("%d", &pontos1);
    printf("\n");

    printf("Primeira carta criada com sucesso! Agora vamos criar a segunda carta.\n");
    printf("\n");

    // Criando a Carta 2
    printf("Criação da Carta 2\n");
    printf("Digite uma letra de 'A' a 'H' para representar um dos oito estados:\n");
    scanf("%1s", estado2);

    printf("Digite o código da carta (Ex: A01, B03):\n");
    scanf("%3s", codigo2);

    printf("Escolha o nome da sua cidade:\n");
    scanf(" %99[^\n]", cidade2);  

    printf("Digite o número de habitantes da sua cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto (PIB) da sua cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos que a sua cidade possui:\n");
    scanf("%d", &pontos2);

    printf("\n");
    printf("Cartas criadas com sucesso! Vamos analisar os dados.\n");

    //Calculo das cartas2
    densidadep1 = (float) populacao1 / area1;
    densidadep2 = (float)  populacao2 /  area2;
    pibc1 = pib1 /  populacao1;
    pibc2 = pib2 / populacao2;
    //Calculo das cartas3
    Inversoden1 = (float) area1 / populacao1;
    Inversoden2 = (float) area2 / populacao2;
    superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibc1 + Inversoden1;
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibc2 + Inversoden2;
    //comparacaoes
    resultado_populacao = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_pontos = pontos1 > pontos2;
    resultado_densidade = densidadep1 > densidadep2;
    resultado_pibc = pibc1 > pibc2;
    resultado_super_poder = superpoder1 < superpoder2; 

 
    // Exibicao das cartas
    printf("============ CARTA 1 ============\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d habitantes \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadep1);
    printf("PIB per Capita: %.2f reais/habitante \n", pibc1);
    printf("O Super Poder dessa carta seria: %.2f \n", superpoder1);
    printf("\n");

    printf("============ CARTA 2 ============\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadep2);
    printf("PIB per Capita: %.2f reais/habitantes \n", pibc2);
    printf("O Super Poder dessa carta seria: %.2f \n", superpoder2);
    printf("\n");

    //resultados 
printf("============ RESULTADO DA COMPARAÇÃO ============\n");
printf("\n");
printf("População: %d\n", resultado_populacao);
printf("Área: %d\n", resultado_area);
printf("PIB: %d\n", resultado_pib);
printf("Pontos Turísticos: %d\n", resultado_pontos);
printf("Densidade Populacional: %d\n", resultado_densidade);
printf("PIB per Capita: %d\n", resultado_pibc);
printf("Super Poder: %d\n", resultado_super_poder);


return 0;
}