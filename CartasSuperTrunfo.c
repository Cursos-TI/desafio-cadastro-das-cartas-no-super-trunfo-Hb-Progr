#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  printf("Desafio Super Trunfo\n");
  printf("Novo commit\n");

  char estado1;
  char codigo1[10];
  char nome1[30];
  int populacao1;
  float area1;
  float pib1;
  int ponto1;

  char estado2;
  char codigo2[10];
  char nome2[30];
  int populacao2;
  float area2;
  float pib2;
  int ponto2;

  printf("carta 1:\n");
  printf("Digite o estado: ");
  scanf(" %c", &estado1);

  printf("Digite o Código da carta: ");
  scanf("%s", codigo1); 

  printf("Digite o Nome da Cidade: ");
  scanf("%s", nome1);

  printf("Digite a População: ");
  scanf("%d", &populacao1);

  printf("Digite a Área: ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o Número de pontos turísticos: ");
  scanf("%d", &ponto1);

  printf("carta 2:\n");
  printf("Digite o estado 2: ");
  scanf(" %c", &estado2);

  printf("Digite o Código da carta 2: ");
  scanf("%s", codigo2);

  printf("Digite o nome da Cidade 2: ");
  scanf("%s", nome2);

  printf("Digite a população 2: ");
  scanf("%d", &populacao2);

  printf("Digite a Área 2: ");
  scanf("%f", &area2);

  printf("Digite o PIB 2: ");
  scanf("%f", &pib2);

  printf("Digite o Número de Pontos Turísticos 2: ");
  scanf("%d", &ponto2);
  printf("\n");

  printf("===Dados da Carta 1 Cadastrados===\n");
  printf("\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", nome1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km2 \n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos: %d\n", ponto1);
  printf("\n");

  printf("===Dados da carta 2 Cadastrados===\n");
  printf("\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km2\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos: %d\n", ponto2);
  printf("\n");

   return 0;
}

