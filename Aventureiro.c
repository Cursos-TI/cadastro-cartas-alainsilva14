#include <stdio.h>

int main(){

char codigo[20], codigo2[20], codigo3[20], codigo4[20];
int populacao, populacao2, populacao3, populacao4;
float area, area2, area3, area4, densidade, densidade2, densidade3, densidade4;
float pib, pib2, pib3, pib4, pibpercapta, pibpercapta2, pibpercapta3, pibpercapta4 ;
int pontos_turisticos, pontos_turisticos2, pontos_turisticos3, pontos_turisticos4;


//--------Cidade 01--------
printf("Cidade 01\n");
printf("Digite o código da cidade: ");
scanf("%s", codigo);

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

//--------Cidade 03--------
printf("Cidade 03\n");
printf("Digite o código da cidade 3: ");
scanf("%s", codigo3);

printf("Digite a população da cidade 3: ");
scanf("%d", &populacao3);

printf("Digite a área da cidade 3: ");
scanf("%f", &area3);

printf("Digite o pib da cidade 3: ");
scanf("%f", &pib3);

printf("Digite os pontos turísticos da cidade 3: ");
scanf(" %d", &pontos_turisticos3);

//Cálculos automáticos
    densidade3 = populacao3 / area3;
    pibpercapta3 = pib3 / populacao3;

//--------Cidade 04--------
printf("Cidade 04\n");
printf("Digite o código da cidade 4: ");
scanf("%s", codigo4);

printf("Digite a população da cidade 4: ");
scanf("%d", &populacao4);

printf("Digite a área da cidade 4: ");
scanf("%f", &area4);

printf("Digite o pib da cidade 4: ");
scanf("%f", &pib4);

printf("Digite os pontos turísticos da cidade 4: ");
scanf(" %d", &pontos_turisticos4);

//Cálculos automáticos
    densidade4 = populacao4 / area4;
    pibpercapta4 = pib4 / populacao4;

 // Área para exibição dos dados da cidade

//----------------------Cidade 1-----------------------------

printf("\n--- Cidade 1 ---\n");
printf("Código da cidade é: %s \n", codigo);
printf("População da cidade é: %d \n", populacao);
printf("Área da cidade é: %.2f \n", area);
printf("Pib da cidade é: %.2f \n", pib);
printf("Pontos turísticos da cidade: %d \n", pontos_turisticos);  
printf("Densidade Populacional: %.2f hab/km²\n", densidade);
printf("PIB per Capita: %.2f\n", pibpercapta);

//----------------------Cidade 2-----------------------------

printf("\n--- Cidade 2 ---\n");
printf("Código da cidade é: %s \n", codigo2);
printf("População da cidade é: %d \n", populacao2);
printf("Área da cidade é: %.2f \n", area2);
printf("Pib da cidade é: %.2f \n", pib2);
printf("Pontos turísticos da cidade: %d \n", pontos_turisticos2);  
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f\n", pibpercapta2);

//----------------------Cidade 3-----------------------------

printf("\n--- Cidade 3 ---\n");
printf("Código da cidade é: %s \n", codigo3);
printf("População da cidade é: %d \n", populacao3);
printf("Área da cidade é: %.2f \n", area3);
printf("Pib da cidade é: %.2f \n", pib3);
printf("Pontos turísticos da cidade: %d \n", pontos_turisticos3);  
printf("Densidade Populacional: %.2f hab/km²\n", densidade3);
printf("PIB per Capita: %.2f\n", pibpercapta3);

//----------------------Cidade 4-----------------------------

printf("\n--- Cidade 4 ---\n");
printf("Código da cidade é: %s \n", codigo4);
printf("População da cidade é: %d \n", populacao4);
printf("Área da cidade é: %.2f \n", area4);
printf("Pib da cidade é: %.2f \n", pib4);
printf("Pontos turísticos da cidade: %d \n", pontos_turisticos4);  
printf("Densidade Populacional: %.2f hab/km²\n", densidade4);
printf("PIB per Capita: %.2f\n", pibpercapta4);




}