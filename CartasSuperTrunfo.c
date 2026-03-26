#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //======variaveis
// carta 1
char estado1;
char codigocarta1[10];
char nomecidade1[50];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;

// carta 2
char estado2;
char codigocarta2[10];
char nomecidade2[50];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n---cadrasto da carta 1---\n");

printf("Digite uma letra para o estado: ");
scanf(" %c", &estado1);

printf("Digite o codigo da carta:");
scanf("%s", codigocarta1);

printf("Digite o nome da cidade: ");
scanf("%s", nomecidade1);

getchar(); // limpar buffer do teclado

printf("Digite a populacao: ");
scanf("%d", &populacao1);

printf("Digite a area: ");
scanf("%f", &area1);

printf("Digite o pib: ");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosturisticos1);


printf("\n---cadrasto da carta 2---\n");

printf("Digite uma letra para o estado: ");
scanf(" %c", &estado2);

printf("Digite o codigo da carta: ");
scanf("%s", codigocarta2);

getchar();// limpar o buffer do teclado

printf("Digite o nome da cidade: ");
scanf("%[^\n]", nomecidade2);


printf("Digite a populacao: ");
scanf("%d", &populacao2);

printf("Digite a area: ");
scanf("%f", &area2);

printf("Digite o pib: ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosturisticos2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
//========Exibir as cartas======

printf("cartas cadrastadas\n");

printf("\n---carta---1\n");
printf("\n---estado: %c\n", estado1);
printf("codigo: %s\n", codigocarta1);
printf("nome da cidade: %s\n", nomecidade1);
printf("populacao: %d\n", populacao1);
printf("area: %.2f\n", area1);
printf("pib: %.2f\n", pib1);
printf("pontos turisticos: %d\n", pontosturisticos1);

printf("\n---carta 2---\n");
printf("\n---estado: %c\n", estado2);
printf("codigo: %s\n", codigocarta2);
printf("nome da cidade: %s\n", nomecidade2);
printf("populacao: %d\n", populacao2);
printf("area: %.2f\n", area2);
printf("pib: %.2f\n", pib2);
printf("pontos turisticos: %d\n", pontosturisticos2);
    return 0;
}
