#include <stdio.h>

int main(){

char codigo[5], codigo2[5];
char estado[4], estado2[4];
char cidade[20], cidade2[20];
int populacao, populacao2;
float area, area2, densidade, densidade2;
float pib, pib2, pibpercapta, pibpercapta2;
int pontos_turisticos, pontos_turisticos2;


//--------Cidade 01--------
printf("Cidade 01\n");
printf("Digite o código da cidade: ");
scanf("%s", codigo);

printf("Digite o estado: ");
scanf("%s", estado);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", cidade);

printf("Digite a população da cidade: ");
scanf("%d", &populacao);

printf("Digite a área da cidade: ");
scanf("%f", &area);

printf("Digite o pib da cidade: ");
scanf("%f", &pib);

printf("Digite os pontos turísticos da cidade: ");
scanf(" %d", &pontos_turisticos);

//Cálculos automáticos
    densidade = populacao / area;
    pibpercapta = pib / populacao;

//--------Cidade 02--------
printf("Cidade 02\n");
printf("Digite o código da cidade 2: ");
scanf("%s", codigo2);

printf("Digite o estado: ");
scanf(" %s", estado2);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", cidade2);

printf("Digite a população da cidade 2: ");
scanf("%d", &populacao2);

printf("Digite a área da cidade 2: ");
scanf("%f", &area2);

printf("Digite o pib da cidade 2: ");
scanf("%f", &pib2);

printf("Digite os pontos turísticos da cidade 2: ");
scanf(" %d", &pontos_turisticos2);

//Cálculos automáticos

    densidade2 = populacao2 / area2;
    pibpercapta2 = pib2 / populacao2;

 // Área para exibição dos dados da cidade

//----------------------Cidade 1-----------------------------

printf("\n--- Cidade 1 ---\n");
printf("Código da cidade é: %s \n", codigo);
printf("Nome do estado: %s \n", estado);
printf("Nome da cidade: %s \n", cidade);
printf("População da cidade é: %d \n", populacao);
printf("Área da cidade é: %.2f \n", area);
printf("Pib da cidade é: %.2f \n", pib);
printf("Pontos turísticos da cidade: %d \n", pontos_turisticos);  
printf("Densidade Populacional: %.2f hab/km²\n", densidade);
printf("PIB per Capita: %.2f\n", pibpercapta);

//----------------------Cidade 2-----------------------------

printf("\n--- Cidade 2 ---\n");
printf("Código da cidade é: %s \n", codigo2);
printf("Nome do estado: %s \n", estado2);
printf("Nome da cidade: %s \n", cidade2);
printf("População da cidade é: %d \n", populacao2);
printf("Área da cidade é: %.2f \n", area2);
printf("Pib da cidade é: %.2f \n", pib2);
printf("Pontos turísticos da cidade: %d \n", pontos_turisticos2);  
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f\n", pibpercapta2);

//----------------------Comparação-----------------------------

printf("Carta 1: %s (%s) %d\n", cidade, estado, populacao);
printf("Carta 2: %s (%s) %d\n", cidade2, estado2, populacao2);


if(populacao > populacao2) {
    printf(" Carta 1 venceu!\n");
}else{
    printf(" Carta 2 venceu!\n");
}


}
