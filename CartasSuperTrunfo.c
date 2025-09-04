#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 -
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa
// Desafio: nível mestre, Batalha de Cartas no Super Trunfo

// Definição das variáveis usadas para guardar informação
struct Carta {
    char estado;
    char codigo[4];
    char cidade[50];
    unsigned long populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float superPoder; // variável extra para o super poder da carta

};

int main() {
    struct Carta carta1, carta2; //organiza as cartas para receber apenas o cadastro de duas cartas
    int numero; 
    int resultado;

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
    scanf(" %lu", &carta1.populacao);
    
    printf("Area da Cidade (km2): ");
    scanf(" %f", &carta1.area);

    printf("PIB da cidade (em bilhões): ");
    scanf(" %f", &carta1.pib);

    printf("Pontos Turísticos: ");
    scanf(" %d", &carta1.pontosTuristicos);

    // calcula o super poder da carta somando todos os atributos
    carta1.superPoder = (float)carta1.populacao // converte populacao para float para evitar perda de dados na soma
                    + carta1.area
                    + carta1.pib
                    + (float)carta1.pontosTuristicos // mesmo aqui, converte pontosTuristicos para float
                    + ((carta1.pib * 1000000000.0f) / carta1.populacao) // PIB per capita
                    + (carta1.area / carta1.populacao);               // inverso da densidade

    printf("\n ====== Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (01 à 04): ");
    scanf(" %d", &numero);
    sprintf(carta2.codigo, "%c%02d", carta2.estado, numero);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População da Cidade: ");
    scanf(" %lu", &carta2.populacao);
    
    printf("Área da Cidade (km2): ");
    scanf(" %f", &carta2.area);

    printf("PIB da cidade (em bilhões): ");
    scanf(" %f", &carta2.pib);

    printf("Pontos Turísticos: ");
    scanf(" %d", &carta2.pontosTuristicos);

    carta2.superPoder = (float)carta2.populacao 
                    + carta2.area
                    + carta2.pib
                    + (float)carta2.pontosTuristicos 
                    + ((carta2.pib * 1000000000.0f) / carta2.populacao)
                    + (carta2.area / carta2.populacao);               

    // Exibição dos Dados das Cartas, um por linha:
    printf("\n CARTAS CADASTRADAS ===============\n");

    printf("\n====== Carta 1\n");
    printf("Estado: %c\n", carta1.estado); //printf que puxa as infomações da carta
    printf("Código da Carta: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    // Calculo da Densidade Populacional (população/área):
    printf("Densidade Populacional: %.2f habitantes/km2\n", carta1.populacao / carta1.area);
    // Calculo do PIB per capita (PIB/população):
    printf("PIB per capita: %.2f reais\n", (carta1.pib * 1000000000) / carta1.populacao); //multiplica o pib por 1 bilhão para converter em reais
    printf("Super Poder: %.2f\n", carta1.superPoder); //exibe o super poder da carta (ainda não implementado)

    printf("\n ====== Carta 2\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da Carta: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km2\n", carta2.populacao / carta2.area);
    printf("PIB per capita: %.2f reais\n", (carta2.pib * 1000000000) / carta2.populacao);
    printf("Super Poder: %.2f\n", carta2.superPoder); //exibe o super poder da carta (ainda não implementado)


    printf("\n COMPARAÇÃO DE CARTAS ===============\n");

    // População
    resultado = carta1.populacao > carta2.populacao; // usa comparação entre as duas cartas e armazena o resultado (1 ou 0) na variável resultado 
    printf("População: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado); // se resultado for 1 (verdadeiro), %d exibe 'carta 1 venceu', se for 0 (falso), %d exibe 'carta 2 venceu'
    //Após, o segundo %d exibe o valor do resultado da comparação (1 ou 0).

    // Área
    resultado = carta1.area > carta2.area;
    printf("Área: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado); 

    // PIB
    resultado = carta1.pib > carta2.pib;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Pontos Turísticos
    resultado = carta1.pontosTuristicos > carta2.pontosTuristicos;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Densidade Populacional (menor vence)
    resultado = (carta1.populacao / carta1.area) < (carta2.populacao / carta2.area);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);


    // PIB per Capita
    resultado = ((carta1.pib * 1000000000) / carta1.populacao) > ((carta2.pib * 1000000000) / carta2.populacao); 
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Super Poder
    resultado = carta1.superPoder > carta2.superPoder;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    return 0;
};
