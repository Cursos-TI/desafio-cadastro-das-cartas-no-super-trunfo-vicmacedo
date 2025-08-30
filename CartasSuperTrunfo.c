#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Definição das variáveis usadas para guardar informação
struct Carta {
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {

    struct Carta carta1, carta2; //organiza as cartas para receber apenas o cadastro de duas cartas
    int numero; 

    printf("JOGO SUPER TRUNFO\n"); // o uso de '\n' é para melhor organizar a formatação no console

    printf("\n CADASTRO DE CARTAS ===============\n");

    // Cadastro das Cartas:
    printf("\n ====== Carta 1\n");

    printf("Estado (A-H): "); //printf imprime uma mensagem (guiando o usuário)
    scanf(" %c", &carta1.estado); 
    // scanf lê a informação enviada pelo usuário
    // % especifica o tipo de formatação dos dados da variável (com espaço na frente para ignorar caracteres em branco)
    // & para definir onde a informação será armazenada (qual carta e qual tipo de informação

    printf("Código da Carta (01 à 04): ");
    scanf(" %d", &numero); //lê o numero
    sprintf(carta1.codigo, "%c%02d", carta1.estado, numero); 
    //(%c%02d) puxa o caracter armazenado para Estado e lê o número inserido em Codigo da Carta(2 digitos contando com o 0 na frente)

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade); //[^\n] permite ler toda a linha contando os espaços

    printf("População da Cidade: ");
    scanf(" %d", &carta1.populacao);
    
    printf("Area da Cidade (km2): ");
    scanf(" %f", &carta1.area);

    printf("PIB da cidade (em bilhões): ");
    scanf(" %f", &carta1.pib);

    printf("Pontos Turísticos: ");
    scanf(" %d", &carta1.pontosTuristicos);

    printf("\n ====== Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (01 à 04): ");
    scanf(" %d", &numero);
    sprintf(carta2.codigo, "%c%02d", carta2.estado, numero);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População da Cidade: ");
    scanf(" %d", &carta2.populacao);
    
    printf("Área da Cidade (km2): ");
    scanf(" %f", &carta2.area);

    printf("PIB da cidade (em bilhões): ");
    scanf(" %f", &carta2.pib);

    printf("Pontos Turísticos: ");
    scanf(" %d", &carta2.pontosTuristicos);


    // Exibição dos Dados das Cartas, um por linha:
    printf("\n CARTAS CADASTRADAS ===============\n");

    printf("\n====== Carta 1\n");
    printf("Estado: %c\n", carta1.estado); //printf que puxa as infomações da carta
    printf("Código da Carta: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n ====== Carta 2\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da Carta: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
};
