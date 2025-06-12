#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main () {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    char EstadoA01[50] = "Alagoas";
    char CodigoA01[20] = "A01";
    char CidadeA01[20] = "Maceió"; 
    unsigned int PopulacaoA01 = 957000;
    int AreaA01 = 509; 
    int PIBA01 = 4000000;
    int TurismoA01 = 100;

    float desindidadeA01 = (float) PopulacaoA01 / AreaA01;

    float pibpercapitaA01 = (float) PIBA01 / PopulacaoA01;

    double superpoderA01 = (double) PopulacaoA01 + AreaA01 + PIBA01 + TurismoA01 + pibpercapitaA01 - desindidadeA01;

    printf("Código da Carta: %s\n", CodigoA01);
    printf("Estado: %s\n", EstadoA01);
    printf("Nome da Cidade: %s\n", CidadeA01);  
    printf("População: %d\n", PopulacaoA01);
    printf("Área: %d km²\n", AreaA01);
    printf("PIB: %d de reais\n", PIBA01);
    printf("Número de Pontos Turísticos: %d\n", TurismoA01);
    printf("Densidade Populacional: %.3f hab/km²\n", desindidadeA01);
    printf("PIB per Capita: %.3f reias\n", pibpercapitaA01);
    printf("Super Poder: %f\n", superpoderA01);

    printf("\n");
    printf("\n");

    char EstadoB02[50] = "Amazonas";
    char CodigoB02[20] = "B02";
    char CidadeB02[20] =  "Manaus"; 
    unsigned int  PopulacaoB02 = 2000000;
    int AreaB02 = 11401; 
    int PIBB02 = 103000000;
    int TurismoB02 = 50;

    float desindidadeB02 = (float) PopulacaoB02 / AreaB02;

    float pibpercapitaB02 = (float) PIBB02 / PopulacaoB02;

    double superpoderB02 = (double) PopulacaoB02 + AreaB02 + PIBB02 + TurismoB02 + pibpercapitaB02 - desindidadeB02;

    printf("Código da Carta: %s\n", CodigoB02);
    printf("Estado: %s\n", EstadoB02);
    printf("Nome da Cidade: %s\n", CidadeB02);
    printf("População: %d\n", PopulacaoB02);
    printf("Área: %d km²\n", AreaB02);
    printf("PIB: %d de reais\n", PIBB02);
    printf("Número de Pontos Turísticos: %d\n", TurismoB02);
    printf("Densidade Populacional: %.3f hab/km²\n", desindidadeB02);
    printf("PIB per Capita: %.3f reias\n", pibpercapitaB02);
    printf("Super Poder: %f\n", superpoderB02);

    
    printf("\n");
    printf("\n");

    printf("Comparação entre as cartas!\n");
    printf("\n");

    printf("População: Carta 1 venceu (%d)\n", PopulacaoA01 > PopulacaoB02);
    printf("Área: Carta 1 venceu (%d)\n", AreaA01 > AreaB02);
    printf("PIB: Carta 1 venceu (%d)\n", PIBA01 > PIBB02);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", TurismoA01 > TurismoB02);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", -desindidadeA01 > -desindidadeB02); //ao invés de colocar sinal de menor (<), negativei os números
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapitaA01 > pibpercapitaB02);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoderA01 > superpoderB02);
    
    return 0;
}
