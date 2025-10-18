#include <stdio.h>

int main() {
    char estado1[50], codigo1[10], nomecidade1[50];
    int populacao1;
    float area1;
    double pib1;
    int pontosturi1;
    float densidade1;
    float pibper1;

    char estado2[50], codigo2[10], nomecidade2[50];
    int populacao2;
    float area2;
    double pib2;
    int pontosturi2;
    float densidade2;
    float pibper2;

    // CARTA 1
    printf("ESTADO: ");
    scanf("%s", estado1);
    getchar();
    printf("CODIGO DA CARTA: ");
    scanf("%s", codigo1);
    getchar();
    printf("NOME DA CIDADE: ");
    scanf(" %[^\n]", nomecidade1);
    printf("POPULACAO: ");
    scanf("%d", &populacao1);
    printf("AREA: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%lf", &pib1);
    printf("NUMERO DE PONTOS TURISTICOS: ");
    scanf("%d", &pontosturi1);

    // CARTA 2
    printf("\n--- CARTA 2 ---\n");
    printf("ESTADO: ");
    scanf("%s", estado2);
    getchar();
    printf("CODIGO DA CARTA: ");
    scanf("%s", codigo2);
    getchar();
    printf("NOME DA CIDADE: ");
    scanf(" %[^\n]", nomecidade2);
    printf("POPULACAO: ");
    scanf("%d", &populacao2);
    printf("AREA: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%lf", &pib2);
    printf("NUMERO DE PONTOS TURISTICOS: ");
    scanf("%d", &pontosturi2);

    // CÁLCULOS
    densidade1 = populacao1 / area1;
    pibper1 = (pib1 * 1000000000.0) / populacao1;

    densidade2 = populacao2 / area2;
    pibper2 = (pib2 * 1000000000.0) / populacao2;

    // RESULTADOS
    printf("\n--- RESULTADOS ---\n");
    printf("DADOS DA CARTA 1:\n");
    printf("Cidade: %s - Estado: %s\n", nomecidade1, estado1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibper1);

    printf("\nDADOS DA CARTA 2:\n");
    printf("Cidade: %s - Estado: %s\n", nomecidade2, estado2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibper2);

    // COMPARAÇÃO POR POPULAÇÃO
    printf("\n--- COMPARAÇÃO ---\n");
    if (populacao1 > populacao2) {
        printf("RESULTADO: CARTA 1 (%s) VENCEU!\n", estado1);
    } else if (populacao2 > populacao1) {
        printf("RESULTADO: CARTA 2 (%s) VENCEU!\n", estado2);
    } else {
        printf("EMPATE EM POPULACAO!\n");
    }

    printf("ATRIBUTO COMPARADO: POPULACAO\n");
    printf("CARTA 1: %d habitantes\n", populacao1);
    printf("CARTA 2: %d habitantes\n", populacao2);

    return 0;
}
