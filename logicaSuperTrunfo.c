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
    int pontosturA, pontosturB, escolha, escolha2;
    double escolha_atribA1, escolha_atribA2, escolha_atribB1, escolha_atribB2, somacompara1, somacompara2, resultado;
    
    
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
    printf("Escolha o primeiro atributo\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Qual sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha){
        
        case 1: 
            escolha_atribA1 = populacaoA;
            escolha_atribA2 = populacaoB;
            //Escolhendo o segundo atributo
             printf(" **** COMPARANDO ATRIBUTOS ****\n");
             printf("Escolha o segundo atributo\n");
             printf("2 - Area\n");
             printf("3 - PIB\n");
             printf("4 - Pontos Turisticos\n");
             printf("5 - Densidade Demografica\n");
             printf("Qual sua escolha: ");
             scanf("%d", &escolha2);
            
             switch (escolha2){
                case 2:
                    escolha_atribB1 = areaA;
                    escolha_atribB2 = areaB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e Area: Carta A - População Carta A, com valor de: %d Area Carta A com valor de: %2.f ---- População Carta B com valor de: %d Area Carta B, com valor de: %.2f \n", populacaoA, areaA, populacaoB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e Area: Carta A - População Carta A, com valor de: %d Area Carta A com valor de: %2.f ---- População Carta B com valor de: %d Area Carta B, com valor de: %.2f \n", populacaoA, areaA, populacaoB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e Area: Carta A - População Carta A, com valor de: %d Area Carta A com valor de: %2.f ---- População Carta B com valor de: %d Area Carta B, com valor de: %.2f \n", populacaoA, areaA, populacaoB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;

                case 3:
                    escolha_atribB1 = pibB;
                    escolha_atribB2 = pibB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e PIB: Carta A - População Carta A, com valor de: %d PIB Carta A com valor de: %2.f ---- População Carta B com valor de: %d PIB Carta B, com valor de: %.2f \n", populacaoA, pibA, populacaoB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e PIB: Carta A - População Carta A, com valor de: %d PIB Carta A com valor de: %2.f ---- População Carta B com valor de: %d PIB Carta B, com valor de: %.2f \n", populacaoA, pibA, populacaoB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e PIB: Carta A - População Carta A, com valor de: %d PIB Carta A com valor de: %2.f ---- População Carta B com valor de: %d PIB Carta B, com valor de: %.2f \n", populacaoA, pibA, populacaoB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;

                case 4:
                    escolha_atribB1 = pontosturA;
                    escolha_atribB2 = pontosturB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e PONTOS TURISTICOS: Carta A - População Carta A, com valor de: %d PONTOS TURISTICOS Carta A com valor de: %2.f ---- População Carta B com valor de: %d PONTOS TURISTICOS Carta B, com valor de: %.2f \n", populacaoA, pontosturA, populacaoB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e PONTOS TURISTICOS: Carta A - População Carta A, com valor de: %d PONTOS TURISTICOS Carta A com valor de: %2.f ---- População Carta B com valor de: %d PONTOS TURISTICOS Carta B, com valor de: %.2f \n", populacaoA, pontosturA, populacaoB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e PONTOS TURISTICOS: Carta A - População Carta A, com valor de: %d PONTOS TURISTICOS Carta A com valor de: %2.f ---- População Carta B com valor de: %d PONTOS TURISTICOS Carta B, com valor de: %.2f \n", populacaoA, pontosturA, populacaoB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;

                case 5:
                    escolha_atribB1 = desnidadeA;
                    escolha_atribB2 = densidadeB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 < somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e DENSIDADE DEMOGRAFICA: Carta A - População Carta A, com valor de: %d DENSIDADE DEMOGRAFICA Carta A com valor de: %2.f ---- População Carta B com valor de: %d DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", populacaoA, desnidadeA, populacaoB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e DENSIDADE DEMOGRAFICA: Carta A - População Carta A, com valor de: %d DENSIDADE DEMOGRAFICA Carta A com valor de: %2.f ---- População Carta B com valor de: %d DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", populacaoA, desnidadeA, populacaoB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram População e DENSIDADE DEMOGRAFICA: Carta A - População Carta A, com valor de: %d DENSIDADE DEMOGRAFICA Carta A com valor de: %2.f ---- População Carta B com valor de: %d DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", populacaoA, desnidadeA, populacaoB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;

                default:
                    printf("Opção Inválida!!");
                    break;
             }
        break;
        case 2:
             escolha_atribA1 = areaA;
             escolha_atribA2 = areaB;
             //escolhendo segundo atributo
             printf("Escolha o segundo, atributo\n");
             printf("1 - População\n");
             printf("3 - PIB\n");
             printf("4 - Pontos Turisticos\n");
             printf("5 - Densidade Demografican\n");
             printf("Qual sua escolha: ");
             scanf("%d", &escolha2);

             switch (escolha2){

                case 1: 
                    escolha_atribB1 = populacaoA;
                    escolha_atribB2 = populacaoB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e POPULAÇÃO: Carta A - Area Carta A, com valor de: %.2f POPULAÇÃO Carta A com valor de: %d ---- AREA Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", areaA, populacaoA, areaB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e POPULAÇÃO: Carta A - Area Carta A, com valor de: %.2f POPULAÇÃO Carta A com valor de: %d ---- AREA Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", areaA, populacaoA, areaB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e POPULAÇÃO: Carta A - Area Carta A, com valor de: %.2f POPULAÇÃO Carta A com valor de: %d ---- AREA Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", areaA, populacaoA, areaB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;

                case 3:
                    escolha_atribB1 = pibB;
                    escolha_atribB2 = pibB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e PIB: Carta A - Area Carta A, com valor de: %.2f PIB Carta A com valor de: %.2f ---- AREA Carta B com valor de: %.2f PIB Carta B, com valor de: %.2f \n", areaA, pibA, areaB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e PIB: Carta A - Area Carta A, com valor de: %.2f PIB Carta A com valor de: %.2f ---- AREA Carta B com valor de: %.2f PIB Carta B, com valor de: %.2f \n", areaA, pibA, areaB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e PIB: Carta A - Area Carta A, com valor de: %.2f PIB Carta A com valor de: %.2f ---- AREA Carta B com valor de: %.2f PIB Carta B, com valor de: %.2f \n", areaA, pibA, areaB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;

                case 4:
                    escolha_atribB1 = pontosturA;
                    escolha_atribB2 = pontosturB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e PONTOS TURISTICOS: Carta A - Area Carta A, com valor de: %.2f PONTOS TURISTICOS Carta A com valor de: %d ---- AREA Carta B com valor de: %.2f PONTOS TURISTICOS Carta B, com valor de: %d \n", areaA, pontosturA, areaB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e PONTOS TURISTICOS: Carta A - Area Carta A, com valor de: %.2f PONTOS TURISTICOS Carta A com valor de: %d ---- AREA Carta B com valor de: %.2f PONTOS TURISTICOS Carta B, com valor de: %d \n", areaA, pontosturA, areaB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e PONTOS TURISTICOS: Carta A - Area Carta A, com valor de: %.2f PONTOS TURISTICOS Carta A com valor de: %d ---- AREA Carta B com valor de: %.2f PONTOS TURISTICOS Carta B, com valor de: %d \n", areaA, pontosturA, areaB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");
                    }
                    break;

                case 5:
                    escolha_atribB1 = desnidadeA;
                    escolha_atribB2 = densidadeB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 < somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e DENSIDADE DEMOGRAFICA: Carta A - Area Carta A, com valor de: %.2f DENSIDADE DEMOGRAFICA Carta A com valor de: %.2f ---- AREA Carta B com valor de: %.2f DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", areaA, desnidadeA, areaB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e DENSIDADE DEMOGRAFICA: Carta A - Area Carta A, com valor de: %.2f DENSIDADE DEMOGRAFICA Carta A com valor de: %.2f ---- AREA Carta B com valor de: %.2f DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", areaA, desnidadeA, areaB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e DENSIDADE DEMOGRAFICA: Carta A - Area Carta A, com valor de: %.2f DENSIDADE DEMOGRAFICA Carta A com valor de: %.2f ---- AREA Carta B com valor de: %.2f DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", areaA, desnidadeA, areaB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");
                    }
                    break;

                default:
                    printf("Opção Inválida!!");
                    break;
             }
             break;
        break;     
        case 3:
             escolha_atribA1 = pibA;
             escolha_atribA2 = pibB;
             //escolhendo segundo atributo
             printf("Escolha o segundo, atributo\n");
             printf("1 - População\n");
             printf("2 - Area\n");
             printf("4 - Pontos Turisticos\n");
             printf("5 - Densidade Demografican\n");
             printf("Qual sua escolha: ");
             scanf("%d", &escolha2);

             switch (escolha2){

                    case 1:
                    escolha_atribB1 = populacaoA;
                    escolha_atribB2 = populacaoB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e POPULAÇÃO: Carta A - PIB Carta A, com valor de: %.2f POPULAÇÃO Carta A com valor de: %d ---- PIB Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", pibA, populacaoA, pibB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e POPULAÇÃO: Carta A - PIB Carta A, com valor de: %.2f POPULAÇÃO Carta A com valor de: %d ---- PIB Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", pibA, populacaoA, pibB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e POPULAÇÃO: Carta A - PIB Carta A, com valor de: %.2f POPULAÇÃO Carta A com valor de: %d ---- PIB Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", pibA, populacaoA, pibB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;

                    case 2:
                    escolha_atribB1 = areaA;
                    escolha_atribB2 = areaB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e Area: Carta A - PIB Carta A, com valor de: %.2f Area Carta A com valor de: %2.f ---- PIB Carta B com valor de: %.2f Area Carta B, com valor de: %.2f \n", pibA, areaA, pibB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e Area: Carta A - PIB Carta A, com valor de: %.2f Area Carta A com valor de: %2.f ---- PIB Carta B com valor de: %.2f Area Carta B, com valor de: %.2f \n", pibA, areaA, pibB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e Area: Carta A - PIB Carta A, com valor de: %.2f Area Carta A com valor de: %2.f ---- PIB Carta B com valor de: %.2f Area Carta B, com valor de: %.2f \n", pibA, areaA, pibB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;

                case 4:
                    escolha_atribB1 = pontosturA;
                    escolha_atribB2 = pontosturB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e PONTOS TURISTICOS: Carta A - PIB Carta A, com valor de: %.2f PONTOS TURISTICOS Carta A com valor de: %d ---- PIB Carta B com valor de: %.2f PONTOS TURISTICOS Carta B, com valor de: %d \n", pibA, pontosturA, pibB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e PONTOS TURISTICOS: Carta A - PIB Carta A, com valor de: %.2f PONTOS TURISTICOS Carta A com valor de: %d ---- PIB Carta B com valor de: %.2f PONTOS TURISTICOS Carta B, com valor de: %d \n", pibA, pontosturA, pibB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e PONTOS TURISTICOS: Carta A - PIB Carta A, com valor de: %.2f PONTOS TURISTICOS Carta A com valor de: %d ---- PIB Carta B com valor de: %.2f PONTOS TURISTICOS Carta B, com valor de: %d \n", pibA, pontosturA, pibB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");
                    }
                    break;

                case 5:
                    escolha_atribB1 = desnidadeA;
                    escolha_atribB2 = densidadeB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 < somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e DENSIDADE DEMOGRAFICA: Carta A - PIB Carta A, com valor de: %.2f DENSIDADE DEMOGRAFICA Carta A com valor de: %.2f ---- PIB Carta B com valor de: %.2f DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", pibA, desnidadeA, pibB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e DENSIDADE DEMOGRAFICA: Carta A - PIB Carta A, com valor de: %.2f DENSIDADE DEMOGRAFICA Carta A com valor de: %.2f ---- PIB Carta B com valor de: %.2f DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", pibA, desnidadeA, pibB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e DENSIDADE DEMOGRAFICA: Carta A - PIB Carta A, com valor de: %.2f DENSIDADE DEMOGRAFICA Carta A com valor de: %.2f ---- PIB Carta B com valor de: %.2f DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", pibA, desnidadeA, pibB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");
                    }
                    break;

                default:
                    printf("Opção Inválida!!");
                    break;
             }
        case 4:
             escolha_atribA1 = pontosturA;
             escolha_atribA2 = pontosturB;
             //escolhendo segundo atributo
             printf("Escolha o segundo, atributo\n");
             printf("1 - População\n");
             printf("2 - Area\n");
             printf("3 - PIB\n");
             printf("5 - Densidade Demografican\n");
             printf("Qual sua escolha: ");
             scanf("%d", &escolha2);

             switch (escolha2){
                case 1:
                    escolha_atribB1 = populacaoA;
                    escolha_atribB2 = populacaoB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PONTOS TURISTICOS e POPULAÇÃO: Carta A - PONTOS TURISTICOS Carta A, com valor de: %.d POPULAÇÃO Carta A com valor de: %d ---- PONTOS TURISTICOS Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", pontosturA, populacaoA, pontosturB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PONTOS TURISTICOS e POPULAÇÃO: Carta A - PONTOS TURISTICOS Carta A, com valor de: %.d POPULAÇÃO Carta A com valor de: %d ---- PONTOS TURISTICOS Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", pontosturA, populacaoA, pontosturB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PONTOS TURISTICOS e POPULAÇÃO: Carta A - PONTOS TURISTICOS Carta A, com valor de: %.d POPULAÇÃO Carta A com valor de: %d ---- PONTOS TURISTICOS Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", pontosturA, populacaoA, pontosturB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;
                case 2:
                    escolha_atribB1 = areaA;
                    escolha_atribB2 = areaB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PONTOS TURISTICOS e Area: PONTOS TURISTICOS Carta A, com valor de: %d Area Carta A com valor de: %2.f ---- PONTOS TURISTICOS Carta B com valor de: %.d Area Carta B, com valor de: %.2f \n", pontosturA, areaA, pontosturB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PONTOS TURISTICOS e Area: PONTOS TURISTICOS Carta A, com valor de: %d Area Carta A com valor de: %2.f ---- PONTOS TURISTICOS Carta B com valor de: %.d Area Carta B, com valor de: %.2f \n", pontosturA, areaA, pontosturB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PONTOS TURISTICOS e Area: PONTOS TURISTICOS Carta A, com valor de: %d Area Carta A com valor de: %2.f ---- PONTOS TURISTICOS Carta B com valor de: %.d Area Carta B, com valor de: %.2f \n", pontosturA, areaA, pontosturB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;
                
                case 3:
                    escolha_atribB1 = pibB;
                    escolha_atribB2 = pibB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PONTOS TURISTICOS e PIB: PONTOS TURISTICOS Carta A, com valor de: %d PIB Carta A com valor de: %.2f ---- PONTOS TURISTICOS Carta B com valor de: %d PIB Carta B, com valor de: %.2f \n", pontosturA, pibA, pontosturB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e PIB: Carta A - Area Carta A, com valor de: %.2f PIB Carta A com valor de: %.2f ---- AREA Carta B com valor de: %.2f PIB Carta B, com valor de: %.2f \n", areaA, pibA, areaB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram Area e PIB: Carta A - Area Carta A, com valor de: %.2f PIB Carta A com valor de: %.2f ---- AREA Carta B com valor de: %.2f PIB Carta B, com valor de: %.2f \n", areaA, pibA, areaB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;
                case 5:
                    escolha_atribB1 = desnidadeA;
                    escolha_atribB2 = densidadeB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 < somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PONTOS TURISTICOS e DENSIDADE DEMOGRAFICA: PONTOS TURISTICOS Carta A, com valor de: %d DENSIDADE DEMOGRAFICA Carta A com valor de: %.2f ---- PONTOS TURISTICOS Carta B com valor de: %d DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", pontosturA, desnidadeA, pontosturB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e DENSIDADE DEMOGRAFICA: Carta A - PIB Carta A, com valor de: %.2f DENSIDADE DEMOGRAFICA Carta A com valor de: %.2f ---- PIB Carta B com valor de: %.2f DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", pibA, desnidadeA, pibB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram PIB e DENSIDADE DEMOGRAFICA: Carta A - PIB Carta A, com valor de: %.2f DENSIDADE DEMOGRAFICA Carta A com valor de: %.2f ---- PIB Carta B com valor de: %.2f DENSIDADE DEMOGRAFICA Carta B, com valor de: %.2f \n", pibA, desnidadeA, pibB, densidadeB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");
                    }
                    break;



             } 
             default:
                    printf("Opção Inválida!!");
                    break;
                    
        case 5:
             escolha_atribA1 = desnidadeA;
             escolha_atribA2 = densidadeB;
             //escolhendo segundo atributo
             printf("Escolha o segundo, atributo\n");
             printf("1 - População\n");
             printf("2 - Area\n");
             printf("3 - PIB\n");
             printf("4 - Pontos Turisticos\n");
             printf("Qual sua escolha: ");
             scanf("%d", &escolha2);

             switch (escolha2){

                case 1:
                    escolha_atribB1 = populacaoA;
                    escolha_atribB2 = populacaoB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e POPULAÇÃO: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f POPULAÇÃO Carta A com valor de: %d ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", desnidadeA, populacaoA, densidadeB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e POPULAÇÃO: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f POPULAÇÃO Carta A com valor de: %d ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", desnidadeA, populacaoA, densidadeB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e POPULAÇÃO: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f POPULAÇÃO Carta A com valor de: %d ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f POPULAÇÃO Carta B, com valor de: %d \n", desnidadeA, populacaoA, densidadeB, populacaoB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;

                case 2:
                    escolha_atribB1 = areaA;
                    escolha_atribB2 = areaB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e Area: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f Area Carta A com valor de: %2.f ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f Area Carta B, com valor de: %.2f \n", desnidadeA, areaA, densidadeB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e Area: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f Area Carta A com valor de: %2.f ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f Area Carta B, com valor de: %.2f \n", desnidadeA, areaA, densidadeB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e Area: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f Area Carta A com valor de: %2.f ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f Area Carta B, com valor de: %.2f \n", desnidadeA, areaA, densidadeB, areaB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;

                case 3:
                    escolha_atribB1 = pibB;
                    escolha_atribB2 = pibB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e PIB: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f PIB Carta A com valor de: %.2f ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f PIB Carta B, com valor de: %.2f \n", desnidadeA, pibA, densidadeB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e PIB: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f PIB Carta A com valor de: %.2f ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f PIB Carta B, com valor de: %.2f \n", desnidadeA, pibA, densidadeB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e PIB: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f PIB Carta A com valor de: %.2f ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f PIB Carta B, com valor de: %.2f \n", desnidadeA, pibA, densidadeB, pibB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");

                    }
                    break;

                case 4:
                    escolha_atribB1 = pontosturA;
                    escolha_atribB2 = pontosturB;
                    somacompara1 = (float) escolha_atribA1 + escolha_atribB1;
                    somacompara2 = (float) escolha_atribA1 + escolha_atribB2;
                    resultado = somacompara1 > somacompara2 ? 1 : 0;
                    if (resultado == 1){
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e PONTOS TURISTICOS: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f PONTOS TURISTICOS Carta A com valor de: %d ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f PONTOS TURISTICOS Carta B, com valor de: %d \n", desnidadeA, pontosturA, densidadeB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta A");
                    } else if (resultado == 0) {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e PONTOS TURISTICOS: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f PONTOS TURISTICOS Carta A com valor de: %d ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f PONTOS TURISTICOS Carta B, com valor de: %d \n", desnidadeA, pontosturA, densidadeB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("A carta vencedora foi a Carta B");
                    } else {
                        printf("O nome dos paises são: Carta A = %s ---- Carta B = %s \n", nomeA, nomeB);
                        printf("Os atributos escolhidos foram DENSIDADE DEMOGRAFICA e PONTOS TURISTICOS: DENSIDADE DEMOGRAFICA Carta A, com valor de: %.2f PONTOS TURISTICOS Carta A com valor de: %d ---- DENSIDADE DEMOGRAFICA Carta B com valor de: %.2f PONTOS TURISTICOS Carta B, com valor de: %d \n", desnidadeA, pontosturA, densidadeB, pontosturB);
                        printf("A soma dos atributos são: Carta A com valor de: %.2f ---- Carta B com valor de: %.2f \n", somacompara1, somacompara2);
                        printf("Empatou, a soma dos atributos são iguais");
                    }
                    break;

             default:
                printf("Opção Inválida!!");
                break;
             } 
            
             
    return 0;
       
    }

}
