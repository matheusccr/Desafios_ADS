#include <stdio.h>
int main () {
    char estado1, estado2;
    char codigo_carta1 [10], codigo_carta2 [10];
    char cidade1 [20], cidade2 [20];
    int codigo_cidade1, codigo_cidade2;
    int populaçao1, populaçao2;
    float area1, area2;
    float PIB_1, PIB_2;
    int pontos_turisticos1, pontos_turisticos2;
     
printf ("Ola, bem vindo ao jogo de cartas Super Trunfo-Paises. \n");

printf("Vamos cadastras suas cartas, por favor, siga as intruções a seguir: \n");
//explicaçao para o cadastro das cartas
printf("Nesse jogo, imagine um país dividido em 8 estados (A-H), cada estado possui 4 cidades (01-04). \n");
//cadastramento da carta 01
printf("Carta 01 \n");

printf("Digite a letra do estado: ");
scanf("%c", &estado1);

printf("Digite o nome da cidade: ");
scanf("%s", &cidade1);

printf("Escolha o numero da cidade (01-04): ");
scanf("%d",&codigo_cidade1);

printf("Digite o codigo da carta (letra do estado + numero da cidade): ");
scanf("%s", &codigo_carta1);

printf("Digite a população (sem pontuaçao, apenas numeros): ");
scanf("%d", &populaçao1);

printf("Digite a área da cidade: ");
scanf("%d",area1);

printf("Digite o PIB: ");
scanf("%f", &PIB_1);

printf("Quantos pontos turísticos essa cidade tem: ");
scanf("%d", &pontos_turisticos1);






}
