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
    
    char EstadoA01[50] = "Alagoas";
    char CodigoA01[20] = "A01";
    char CidadeA01[20] = "Maceió"; 
    int PopulacaoA01 = 957;
    int AreaA01 = 509; 
    int PIBA01 = 4;
    int TurismoA01 = 100;

    printf("Código da Carta: %s\n", CodigoA01);
    printf("Estado: %s\n", EstadoA01);
    printf("Nome da Cidade: %s\n", CidadeA01);  
    printf("População: %d mil\n", PopulacaoA01);
    printf("Área: %d km²\n", AreaA01);
    printf("PIB: %d bilhóes\n", PIBA01);
    printf("Número de Pontos Turísticos: %d\n", TurismoA01);

    char EstadoB02[50] = "Amazonas";
    char CodigoB02[20] = "B02";
    char CidadeB02[20] =  "Manaus"; 
    int  PopulacaoB02 = 2;
    int AreaB02 = 11401; 
    int PIBB02 = 103;
    int TurismoB02 = 50;

    printf("Código da Carta: %s\n", CodigoB02);
    printf("Estado: %s\n", EstadoB02);
    printf("Nome da Cidade: %s\n", CidadeB02);
    printf("População: %d mihões\n", PopulacaoB02);
    printf("Área: %d km²\n", AreaB02);
    printf("PIB: %d\ bilhões\n", PIBB02);
    printf("Número de Pontos Turísticos: %d\n", TurismoB02);
    
    return 0;
}
