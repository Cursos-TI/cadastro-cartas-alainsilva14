#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Cidade 01
char codigo[20];
int populacao;
float area;
float pib;
int pontos_turisticos;

  // Área para entrada de dados
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

// Cidade 2
char codigo2[20];
int populacao2;
float area2;
float pib2;
int pontos_turisticos2;

  // Área para entrada de dados
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

//Cidade 3
char codigo3[20];
int populacao3;
float area3;
float pib3;
int pontos_turisticos3;

  // Área para entrada de dados
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



//Cidade 4

char codigo4[20];
int populacao4;
float area4;
float pib4;
int pontos_turisticos4;

  // Área para entrada de dados
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


  // Área para exibição dos dados da cidade

printf("\n--- Cidade 1 ---\n");
printf("Código da cidade é: %s \n", codigo);
printf("População da cidade é: %d \n", populacao);
printf("Área da cidade é: %.2f \n", area);
printf("Pib da cidade é: %.2f \n", pib);
printf("Pontos turísticos da cidade: %d \n", pontos_turisticos);  


printf("\n--- Cidade 2 ---\n");
printf("Código da cidade é: %s \n", codigo2);
printf("População da cidade é: %d \n", populacao2);
printf("Área da cidade é: %.2f \n", area2);
printf("Pib da cidade é: %.2f \n", pib2);
printf("Pontos turísticos da cidade: %d \n", pontos_turisticos2);  


printf("\n--- Cidade 3 ---\n");
printf("Código da cidade é: %s \n", codigo3);
printf("População da cidade é: %d \n", populacao3);
printf("Área da cidade é: %.2f \n", area3);
printf("Pib da cidade é: %.2f \n", pib3);
printf("Pontos turísticos da cidade: %d \n", pontos_turisticos3);  


printf("\n--- Cidade 4 ---\n");
printf("Código da cidade é: %s \n", codigo4);
printf("População da cidade é: %d \n", populacao4);
printf("Área da cidade é: %.2f \n", area4);
printf("Pib da cidade é: %.2f \n", pib4);
printf("Pontos turísticos da cidade: %d \n", pontos_turisticos4);  

return 0;
} 
