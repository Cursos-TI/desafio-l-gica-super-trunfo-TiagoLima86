#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estadoA, estadoB;
    char codigoA, codigoB;
    char nomeA[50];
    char nomeB[50];
    unsigned int populacaoA, populacaoB;
    float areaA, areaB, pibA, pibB, desnidadeA, densidadeB, pibpercaptaA, pibpercaptaB;
    int pontosturA, pontosturB, escolha;

    
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
   
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
 printf("-----CADASTRANDO A PRIMEIRA CARTA ------\n");
    printf("Digite o estado da primeira carta(Letra entre A-H): \n");
    scanf("%s", &estadoA);

    printf("Digite o codigo da carta(Estado cadastrado + 2 digitos - ex: A01): \n");
    scanf("%s", &codigoA);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeA);

    printf("Digite a populacão de sua cidade: \n");
    scanf("%u", &populacaoA);

    printf("Digite a area de sua cidade(Exemplo 50000.00): \n");
    scanf("%f", &areaA);

    printf("Digite o PIB de sua cidade(Exemplo: 100000000.00): \n");
    scanf("%f", &pibA);

    printf("Digite a quantidade de pontos turisticos tem sua cidade: \n");
    scanf("%d", &pontosturA);

    desnidadeA = (float) populacaoA * areaA;
    pibpercaptaA = (float) pibA * populacaoA;

    printf("-----CADASTRANDO A SEGUNDA CARTA ------\n");
    printf("Digite o estado da segunda carta(Letra entre A-H, diferente da primeira carta): \n");
    scanf("%s", &estadoB);

    printf("Digite o codigo da carta(Estado cadastrado + 2 digitos - ex: A01): \n");
    scanf("%s", &codigoB);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeB);

    printf("Digite a populacão de sua cidade: \n");
    scanf("%u", &populacaoB);

    printf("Digite a area de sua cidade(Exemplo 50000.00): \n");
    scanf("%f", &areaB);

    printf("Digite o PIB de sua cidade(Exemplo: 100000000.00): \n");
    scanf("%f", &pibB);

    printf("Digite a quantidade de pontos turisticos tem sua cidade: \n");
    scanf("%d", &pontosturB);

    densidadeB = (float) populacaoB * areaB;
    pibpercaptaB = (float) pibB * populacaoB;
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    //Comparação do desafio anterior
    /*
    if (pibA > pibB){
        printf("O PIB da carta A é maior!");
        printf("A carta A é vencedora!!!!");
    } else {
        printf("O PIB da carta B é maior!");
        printf("A carta B é vencedora!!");
    } 
    */
   
    //Adicionando menu interativo para o desafio intermediario
    printf(" **** COMPARANDO ATRIBUTOS ****\n");
    printf("Escolha um atributo\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografican\n");
    printf("Qual sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha){

        case 1:
            if (populacaoA > populacaoB) {
                printf("Nome carta A: %s --- Nome Carta B: %s\n", nomeA, nomeB);
                printf("O Atributo escolhido foi a POPULAÇÃO\n");
                printf("População carta A: %u --- População Carta B: %u\n", populacaoA, populacaoB);
                printf("Carta A venceu!!");
            } else {
                printf("Nome carta A: %s --- Nome Carta B: %s\n", nomeA, nomeB);
                printf("O Atributo escolhido foi a POPULAÇÃO\n");
                printf("População carta A: %u --- População Carta B: %u\n", populacaoA, populacaoB);
                printf("Carta B venceu!!");
            }
            break;
        
        case 2:
            if (areaA > areaB){
                printf("Nome carta A: %s --- Nome Carta B: %s\n", nomeA, nomeB);
                printf("O Atributo escolhido foi a Área\n");
                printf("Area da Carta A: %.2f KM² --- Area da carta B: %.2f KM²\n", areaA, areaB);
                printf("Carta A venceu!!");
            } else {
                printf("Nome carta A: %s --- Nome Carta B: %s\n", nomeA, nomeB);
                printf("O Atributo escolhido foi a Área\n");
                printf("Area da Carta A: %.2f KM² --- Area da carta B: %.2f KM²\n", areaA, areaB);
                printf("Carta B venceu!!");
            }
            break;

        case 3:
            if (pibA > pibB) {
                printf("Nome carta A: %s --- Nome Carta B: %s\n", nomeA, nomeB);
                printf("O Atributo escolhido foi o PIB\n");
                printf("PIB da Carta A: R$ %.2f Bilhões --- PIB da carta B: R$ %.2f Bilhões\n", pibA, pibB);
                printf("Carta A venceu!!");
            } else {
                printf("Nome carta A: %s --- Nome Carta B: %s\n", nomeA, nomeB);
                printf("O Atributo escolhido foi o PIB\n");
                printf("PIB da Carta A: R$ %.2f Bilhões --- PIB da carta B: R$ %.2f Bilhões\n", pibA, pibB);
                printf("Carta B venceu!!");
            }
            break;


        case 4:
            if (pontosturA > pontosturB){
                printf("Nome carta A: %s --- Nome Carta B: %s\n", nomeA, nomeB);
                printf("O Atributo escolhido foi Pontos Turisticos\n");
                printf("Pontos Turisticos da Carta A: %d --- Pontos turisticos da carta B: %d\n", pontosturA, pontosturB);
                printf("Carta A venceu!!");                
            } else {
                printf("Nome carta A: %s --- Nome Carta B: %s\n", nomeA, nomeB);
                printf("O Atributo escolhido foi Pontos Turisticos\n");
                printf("Pontos Turisticos da Carta A: %d --- Pontos turisticos da carta B: %d\n", pontosturA, pontosturB);
                printf("Carta B venceu!!");
            }
            break;

        case 5:
            if (desnidadeA < densidadeB){
                printf("Nome carta A: %s --- Nome Carta B: %s\n", nomeA, nomeB);
                printf("O Atributo escolhido foi Densidade Demográfica\n");
                printf("Densidade Demográfica Carta A: %.2f hab/km² --- Densidade Demográfica Carta B: %.2f hab/km²\n", desnidadeA, densidadeB);
                printf("Carta A venceu!!");
            } else {
                printf("Nome carta A: %s --- Nome Carta B: %s\n", nomeA, nomeB);
                printf("O Atributo escolhido foi Densidade Demográfica\n");
                printf("Densidade Demográfica Carta A: %.2f hab/km² --- Densidade Demográfica Carta B: %.2f hab/km²\n", desnidadeA, densidadeB);
                printf("Carta B venceu!!");
            }
            break;
        
        default:
            printf("Opção inválida!!");
            break;
    return 0;
        }
}
