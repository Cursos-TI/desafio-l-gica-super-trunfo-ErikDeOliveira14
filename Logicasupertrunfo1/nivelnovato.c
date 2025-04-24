#include <stdio.h>

int main () {
   char estado1;
   char estado2;
   char codigo1[4];
   char codigo2[4];
   char cidade1[30];
   char cidade2[30];
   int pop1;
   int pop2;
   float area1;
   float area2;
   float PIB1;
   float PIB2;
   int pontosTuristicos1;
   int pontosTuristicos2;
   float DensidadePopulacional1;
   float DensidadePopulacional2;
   float RendaPercapita1;
   float RendaPercapita2;



   printf("==Carta1==\n");
   printf("Estado: ");
   scanf(" %c", &estado1);

   printf("Codigo: ");
   scanf("%s", codigo1);

   printf("Cidade: ");
   scanf(" %[^\n]", cidade1);

   printf("populacao: ");
   scanf("%d", &pop1);

   printf("area: ");
   scanf("%f", &area1);

   printf("PIB: ");
   scanf("%f", &PIB1);

   printf("Pontos turisticos: ");
   scanf("%d", &pontosTuristicos1);

   DensidadePopulacional1 = (float) pop1 / area1;
   RendaPercapita1 = (float) PIB1 / pop1;
//(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
   float SuperPoderCarta1 = (pop1 + area1 + PIB1 + pontosTuristicos1 +RendaPercapita1) / DensidadePopulacional1;

   
   printf("==Carta2==\n");
   printf("Estado: ");
   scanf(" %c", &estado2);

   printf("Codigo: ");
   scanf("%s", codigo2);

   printf("Cidade: ");
   scanf(" %[^\n]", cidade2);

   printf("populacao: ");
   scanf("%d", &pop2);

   printf("area: ");
   scanf("%f", &area2);

   printf("PIB: ");
   scanf("%f", &PIB2);

   printf("Pontos turisticos: ");
   scanf("%d", &pontosTuristicos2);

   DensidadePopulacional2 = (float) pop2 / area2;
   RendaPercapita2 = (float) PIB2 / pop2;

   float SuperPoderCarta2 = (pop2 + area2 + PIB2 + pontosTuristicos2 +RendaPercapita2) / DensidadePopulacional2;

   printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("a densidade populacional: %.2f hab/km²\n ", DensidadePopulacional1);
    printf("a renda per capita: %.2f reais\n", RendaPercapita1);
    printf(" o super poder : %.2f ", SuperPoderCarta1);


    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("a densidade populacional: %.2f hab/km²\n ", DensidadePopulacional2);
    printf("a renda per capita: %.2f reais\n", RendaPercapita2);
    printf(" o super poder : %.2f\n\n\n\n ", SuperPoderCarta2);

    printf("carta 1 - %s : %d  \n", cidade1, pop1);
    printf("carta 2 - %s : %d  \n", cidade2, pop2);




    if (pop1 > pop2)
    {
        printf("a carta %s venceu \n", cidade1);
    }
    else{
        printf("a carta %s venceu", cidade2);

    }


 




    return 0;


}