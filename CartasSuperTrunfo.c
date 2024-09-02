#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int códigodacidade;
    char nome[20];
    float população;
    float área;
    float PIB;
    int pontosturísticos;

    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("Código da cidade: \n");
    scanf("%d", &códigodacidade);

    printf("População da cidade: \n");
    scanf("%f", população);

    printf("Área em KM² da cidade: \n");
    scanf("%f", área);

    printf("Qual o PIB da cidade: \n");
    scanf("%f", PIB);

    printf("Pontos turísticos: \n");
    scanf("%d", pontosturísticos);

    printf("Cidade: %s \n", nome);
    printf("Código: %d \n", códigodacidade);
    printf("População: %f \n", população);
    printf("Área KM²: %f \n", área);
    printf("PIB: %f \n", PIB);
    printf("Pontos turísticos: %d \n", pontosturísticos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
