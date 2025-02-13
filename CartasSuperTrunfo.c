#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa



// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {

    /*Declaração de todas as variasves 
    de cada cidade para obter: código da cidade(CodC),
    nome(NomeE), população(Popu), área(Area), PIB(PIB), número de pontos turísticos(PonTu).*/

    char CodC1[3], CodC2[3], CodC3[3], CodC4[3], CodC5[3], CodC6[3], CodC7[3], CodC8[3], CodC9[3], CodC10[3], CodC11[3], CodC12[3], CodC13[3], CodC14[3], CodC15[3], CodC16[3], CodC17[3], CodC18[3], CodC19[3], CodC20[3], CodC21[3], CodC22[3], CodC23[3], CodC24[3], CodC25[3], CodC26[3], CodC27[3], CodC28[3], CodC29[3], CodC30[3], CodC31[3], Cod32[3];
    char NomeE1[20], NomeE2[20], NomeE3[20], NomeE4[20], NomeE5[20], NomeE6[20], NomeE7[20], NomeE8[20], NomeE9[20], NomeE10[20], NomeE11[20], NomeE12[20], NomeE13[20], NomeE14[20], NomeE15[20], NomeE16[20], NomeE17[20], NomeE18[20], NomeE19[20], NomeE20[20], NomeE21[20], NomeE22[20], NomeE23[20], NomeE24[20], NomeE25[20], NomeE26[20], NomeE27[20], NomeE28[20], NomeE29[20], NomeE30[20], NomeE31[20], NomeE32[20];
    int Popu1, Popu2, Popu3, Popu4, Popu5, Popu6, Popu7, Popu8, Popu9, Popu10, Popu11, Popu12, Popu13, Popu14, Popu15, Popu16, Popu17, Popu18, Popu19, Popu20, Popu21, Popu22, Popu23, Popu24, Popu25, Popu26, Popu27, Popu28, Popu28, Popu29, Popu30, Popu31, Popu32;
    int PonTu1, PonTu2, PonTu3, PonTu4, PonTu5, PonTu6, PonTu7, PonTu8, PonTu9, PonTu10, PonTu11, PonTu12, PonTu13, PonTu14, PonTu15, PonTu16, PonTu17, PonTu18, PonTu19, PonTu20, PonTu21, PonTu22, PonTu23, PonTu24, PonTu25, PonTu26, PonTu27, PonTu28, PonTu29, PonTu30, PonTu31, PonTu32;
    float Area1, Area2, Area3, Area4, Area5, Area6, Area7, Area8, Area9, Area10, Area11, Area12, Area13, Area14, Area15, Area16, Area17, Area18, Area19, Area20, Area21, Area22, Area23, Area24, Area25, Area26, Area27, Area28, Area29, Area30, Area31, Area32;
    float PIB1, PIB2, PIB3, PIB4, PIB5, PIB6, PIB7, PIB8, PIB9, PIB10, PIB11, PIB12, PIB13, PIB14, PIB15, PIB16, PIB17, PIB18, PIB19, PIB20, PIB21, PIB22, PIB23, PIB24, PIB25, PIB26, PIB27, PIB28, PIB29, PIB30, PIB31, PIB32;
    
    /*Esse é o bloco de cadastro das cartas, onde utilizando os conceitos apresentados em aula
    o código realiza um serie de perguntus sobre cada uma das caracateristicas das 32 cidades*/

    /*Obs.: Nesse bloco foi utilizado um código não apresentado em aula,
    mas eu pesquisei sobre, e o compreendi, para que houvesse uma melhor
    execução do código, onde se trata de fregmento "%[^\n]". Sua utilidade
    consiste em formatar uma string, salvando seu conteundo em uma variavel,
    até que encontre oque está apos o sinal "^"*/

    // Código para a primeira cidade
    printf("Insira o código da primeira cidade:\n");
    scanf("%s", CodC1);
    printf("Insira o nome da primeira cidade:\n");
    scanf(" %[^\n]", NomeE1);
    printf("Insira a população da primeira cidade:\n");
    scanf("%d", &Popu1);
    printf("Insira a área da primeira cidade:\n");
    scanf("%f", &Area1);
    printf("Insira o PIB da primeira cidade:\n");
    scanf("%f", &PIB1);
    printf("Insira  o número de pontos turístcos da primeira cidade:\n");
    scanf("%d", &PonTu1);

    // Código para a segunda cidade
    printf("Insira o código da segunda cidade:\n");
    scanf("%s", CodC2);
    printf("Insira o nome da segunda cidade:\n");
    scanf(" %[^\n]", NomeE2);
    printf("Insira a população da segunda cidade:\n");
    scanf("%d", &Popu2);
    printf("Insira a área da segunda cidade:\n");
    scanf("%f", &Area2);
    printf("Insira o PIB da segunda cidade:\n");
    scanf("%f", &PIB2);
    printf("Insira o número de pontos turísticos da segunda cidade:\n");
    scanf("%d", &PonTu2);
    
    // Código para a terceira cidade
    printf("Insira o código da terceira cidade:\n");
    scanf("%s", CodC3);
    printf("Insira o nome da terceira cidade:\n");
    scanf(" %[^\n]", NomeE3);
    printf("Insira a população da terceira cidade:\n");
    scanf("%d", &Popu3);
    printf("Insira a área da terceira cidade:\n");
    scanf("%f", &Area3);
    printf("Insira o PIB da terceira cidade:\n");
    scanf("%f", &PIB3);
    printf("Insira o número de pontos turísticos da terceira cidade:\n");
    scanf("%d", &PonTu3);
    
    // Código para a quarta cidade
    printf("Insira o código da quarta cidade:\n");
    scanf("%s", CodC4);
    printf("Insira o nome da quarta cidade:\n");
    scanf(" %[^\n]", NomeE4);
    printf("Insira a população da quarta cidade:\n");
    scanf("%d", &Popu4);
    printf("Insira a área da quarta cidade:\n");
    scanf("%f", &Area4);
    printf("Insira o PIB da quarta cidade:\n");
    scanf("%f", &PIB4);
    printf("Insira o número de pontos turísticos da quarta cidade:\n");
    scanf("%d", &PonTu4);
    
    // Código para a quinta cidade
    printf("Insira o código da quinta cidade:\n");
    scanf("%s", CodC5);
    printf("Insira o nome da quinta cidade:\n");
    scanf(" %[^\n]", NomeE5);
    printf("Insira a população da quinta cidade:\n");
    scanf("%d", &Popu5);
    printf("Insira a área da quinta cidade:\n");
    scanf("%f", &Area5);
    printf("Insira o PIB da quinta cidade:\n");
    scanf("%f", &PIB5);
    printf("Insira o número de pontos turísticos da quinta cidade:\n");
    scanf("%d", &PonTu5);
    
        // Código para a sexta cidade
    printf("Insira o código da sexta cidade:\n");
    scanf("%s", CodC6);
    printf("Insira o nome da sexta cidade:\n");
    scanf(" %[^\n]", NomeE6);
    printf("Insira a população da sexta cidade:\n");
    scanf("%d", &Popu6);
    printf("Insira a área da sexta cidade:\n");
    scanf("%f", &Area6);
    printf("Insira o PIB da sexta cidade:\n");
    scanf("%f", &PIB6);
    printf("Insira o número de pontos turísticos da sexta cidade:\n");
    scanf("%d", &PonTu6);
    
    // Código para a sétima cidade
    printf("Insira o código da sétima cidade:\n");
    scanf("%s", CodC7);
    printf("Insira o nome da sétima cidade:\n");
    scanf(" %[^\n]", NomeE7);
    printf("Insira a população da sétima cidade:\n");
    scanf("%d", &Popu7);
    printf("Insira a área da sétima cidade:\n");
    scanf("%f", &Area7);
    printf("Insira o PIB da sétima cidade:\n");
    scanf("%f", &PIB7);
    printf("Insira o número de pontos turísticos da sétima cidade:\n");
    scanf("%d", &PonTu7);
    
    // Código para a oitava cidade
    printf("Insira o código da oitava cidade:\n");
    scanf("%s", CodC8);
    printf("Insira o nome da oitava cidade:\n");
    scanf(" %[^\n]", NomeE8);
    printf("Insira a população da oitava cidade:\n");
    scanf("%d", &Popu8);
    printf("Insira a área da oitava cidade:\n");
    scanf("%f", &Area8);
    printf("Insira o PIB da oitava cidade:\n");
    scanf("%f", &PIB8);
    printf("Insira o número de pontos turísticos da oitava cidade:\n");
    scanf("%d", &PonTu8);
    
    // Código para a nona cidade
    printf("Insira o código da nona cidade:\n");
    scanf("%s", CodC9);
    printf("Insira o nome da nona cidade:\n");
    scanf(" %[^\n]", NomeE9);
    printf("Insira a população da nona cidade:\n");
    scanf("%d", &Popu9);
    printf("Insira a área da nona cidade:\n");
    scanf("%f", &Area9);
    printf("Insira o PIB da nona cidade:\n");
    scanf("%f", &PIB9);
    printf("Insira o número de pontos turísticos da nona cidade:\n");
    scanf("%d", &PonTu9);
    
    // Código para a décima cidade     
    printf("Insira o código da décima cidade:\n");     
    scanf("%s", CodC10);     
    printf("Insira o nome da décima cidade:\n");      
    scanf(" %[^\n]", NomeE10);       
    printf("Insira a população da décima cidade:\n");
    scanf("%d", &Popu10);
    printf("Insira a área da décima cidade:\n");
    scanf("%f", &Area10);
    printf("Insira o PIB da décima cidade:\n");
    scanf("%f", &PIB10);
    printf("Insira o número de pontos turísticos da décima cidade:\n");
    scanf("%d", &PonTu10);

     // Código para a décima primeira cidade
    printf("Insira o código da décima primeira cidade:\n");
    scanf("%s", CodC11);
    printf("Insira o nome da décima primeira cidade:\n");
    scanf(" %[^\n]", NomeE11);
    printf("Insira a população da décima primeira cidade:\n");
    scanf("%d", &Popu11);
    printf("Insira a área da décima primeira cidade:\n");
    scanf("%f", &Area11);
    printf("Insira o PIB da décima primeira cidade:\n");
    scanf("%f", &PIB11);
    printf("Insira o número de pontos turísticos da décima primeira cidade:\n");
    scanf("%d", &PonTu11);

    // Código para a décima segunda cidade
    printf("Insira o código da décima segunda cidade:\n");
    scanf("%s", CodC12);
    printf("Insira o nome da décima segunda cidade:\n");
    scanf(" %[^\n]", NomeE12);
    printf("Insira a população da décima segunda cidade:\n");
    scanf("%d", &Popu12);
    printf("Insira a área da décima segunda cidade:\n");
    scanf("%f", &Area12);
    printf("Insira o PIB da décima segunda cidade:\n");
    scanf("%f", &PIB12);
    printf("Insira o número de pontos turísticos da décima segunda cidade:\n");
    scanf("%d", &PonTu12);

    // Código para a décima terceira cidade
    printf("Insira o código da décima terceira cidade:\n");
    scanf("%s", CodC13);
    printf("Insira o nome da décima terceira cidade:\n");
    scanf(" %[^\n]", NomeE13);
    printf("Insira a população da décima terceira cidade:\n");
    scanf("%d", &Popu13);
    printf("Insira a área da décima terceira cidade:\n");
    scanf("%f", &Area13);
    printf("Insira o PIB da décima terceira cidade:\n");
    scanf("%f", &PIB13);
    printf("Insira o número de pontos turísticos da décima terceira cidade:\n");
    scanf("%d", &PonTu13);

    // Código para a décima quarta cidade
    printf("Insira o código da décima quarta cidade:\n");
    scanf("%s", CodC14);
    printf("Insira o nome da décima quarta cidade:\n");
    scanf(" %[^\n]", NomeE14);
    printf("Insira a população da décima quarta cidade:\n");
    scanf("%d", &Popu14);
    printf("Insira a área da décima quarta cidade:\n");
    scanf("%f", &Area14);
    printf("Insira o PIB da décima quarta cidade:\n");
    scanf("%f", &PIB14);
    printf("Insira o número de pontos turísticos da décima quarta cidade:\n");
    scanf("%d", &PonTu14);

    // Código para a décima quinta cidade
    printf("Insira o código da décima quinta cidade:\n");
    scanf("%s", CodC15);
    printf("Insira o nome da décima quinta cidade:\n");
    scanf(" %[^\n]", NomeE15);
    printf("Insira a população da décima quinta cidade:\n");
    scanf("%d", &Popu15);
    printf("Insira a área da décima quinta cidade:\n");
    scanf("%f", &Area15);
    printf("Insira o PIB da décima quinta cidade:\n");
    scanf("%f", &PIB15);
    printf("Insira o número de pontos turísticos da décima quinta cidade:\n");
    scanf("%d", &PonTu15);

    // Código para a décima sexta cidade
    printf("Insira o código da décima sexta cidade:\n");
    scanf("%s", CodC16);
    printf("Insira o nome da décima sexta cidade:\n");
    scanf(" %[^\n]", NomeE16);
    printf("Insira a população da décima sexta cidade:\n");
    scanf("%d", &Popu16);
    printf("Insira a área da décima sexta cidade:\n");
    scanf("%f", &Area16);
    printf("Insira o PIB da décima sexta cidade:\n");
    scanf("%f", &PIB16);
    printf("Insira o número de pontos turísticos da décima sexta cidade:\n");
    scanf("%d", &PonTu16);

    // Código para a décima sétima cidade
    printf("Insira o código da décima sétima cidade:\n");
    scanf("%s", CodC17);
    printf("Insira o nome da décima sétima cidade:\n");
    scanf(" %[^\n]", NomeE17);
    printf("Insira a população da décima sétima cidade:\n");
    scanf("%d", &Popu17);
    printf("Insira a área da décima sétima cidade:\n");
    scanf("%f", &Area17);
    printf("Insira o PIB da décima sétima cidade:\n");
    scanf("%f", &PIB17);
    printf("Insira o número de pontos turísticos da décima sétima cidade:\n");
    scanf("%d", &PonTu17);

    // Código para a décima oitava cidade
    printf("Insira o código da décima oitava cidade:\n");
    scanf("%s", CodC18);
    printf("Insira o nome da décima oitava cidade:\n");
    scanf(" %[^\n]", NomeE18);
    printf("Insira a população da décima oitava cidade:\n");
    scanf("%d", &Popu18);
    printf("Insira a área da décima oitava cidade:\n");
    scanf("%f", &Area18);
    printf("Insira o PIB da décima oitava cidade:\n");
    scanf("%f", &PIB18);
    printf("Insira o número de pontos turísticos da décima oitava cidade:\n");
    scanf("%d", &PonTu18);

    // Código para a décima nona cidade
    printf("Insira o código da décima nona cidade:\n");
    scanf("%s", CodC19);
    printf("Insira o nome da décima nona cidade:\n");
    scanf(" %[^\n]", NomeE19);
    printf("Insira a população da décima nona cidade:\n");
    scanf("%d", &Popu19);
    printf("Insira a área da décima nona cidade:\n");
    scanf("%f", &Area19);
    printf("Insira o PIB da décima nona cidade:\n");
    scanf("%f", &PIB19);
    printf("Insira o número de pontos turísticos da décima nona cidade:\n");
    scanf("%d", &PonTu19);

    // Código para a vigésima cidade
    printf("Insira o código da vigésima cidade:\n");
    scanf("%s", CodC20);
    printf("Insira o nome da vigésima cidade:\n");
    scanf(" %[^\n]", NomeE20);
    printf("Insira a população da vigésima cidade:\n");
    scanf("%d", &Popu20);
    printf("Insira a área da vigésima cidade:\n");
    scanf("%f", &Area20);
    printf("Insira o PIB da vigésima cidade:\n");
    scanf("%f", &PIB20);
    printf("Insira o número de pontos turísticos da vigésima cidade:\n");
    scanf("%d", &PonTu20);

    // Código para a vigésima primeira cidade
    printf("Insira o código da vigésima primeira cidade:\n");
    scanf("%s", CodC21);
    printf("Insira o nome da vigésima primeira cidade:\n");
    scanf(" %[^\n]", NomeE21);
    printf("Insira a população da vigésima primeira cidade:\n");
    scanf("%d", &Popu21);
    printf("Insira a área da vigésima primeira cidade:\n");
    scanf("%f", &Area21);
    printf("Insira o PIB da vigésima primeira cidade:\n");
    scanf("%f", &PIB21);
    printf("Insira o número de pontos turísticos da vigésima primeira cidade:\n");
    scanf("%d", &PonTu21);

    // Código para a vigésima segunda cidade
    printf("Insira o código da vigésima segunda cidade:\n");
    scanf("%s", CodC22);
    printf("Insira o nome da vigésima segunda cidade:\n");
    scanf(" %[^\n]", NomeE22);
    printf("Insira a população da vigésima segunda cidade:\n");
    scanf("%d", &Popu22);
    printf("Insira a área da vigésima segunda cidade:\n");
    scanf("%f", &Area22);
    printf("Insira o PIB da vigésima segunda cidade:\n");
    scanf("%f", &PIB22);
    printf("Insira o número de pontos turísticos da vigésima segunda cidade:\n");
    scanf("%d", &PonTu22);

    // Código para a vigésima terceira cidade
    printf("Insira o código da vigésima terceira cidade:\n");
    scanf("%s", CodC23);
    printf("Insira o nome da vigésima terceira cidade:\n");
    scanf(" %[^\n]", NomeE23);
    printf("Insira a população da vigésima terceira cidade:\n");
    scanf("%d", &Popu23);
    printf("Insira a área da vigésima terceira cidade:\n");
    scanf("%f", &Area23);
    printf("Insira o PIB da vigésima terceira cidade:\n");
    scanf("%f", &PIB23);
    printf("Insira o número de pontos turísticos da vigésima terceira cidade:\n");
    scanf("%d", &PonTu23);

    // Código para a vigésima quarta cidade
    printf("Insira o código da vigésima quarta cidade:\n");
    scanf("%s", CodC24);
    printf("Insira o nome da vigésima quarta cidade:\n");
    scanf(" %[^\n]", NomeE24);
    printf("Insira a população da vigésima quarta cidade:\n");
    scanf("%d", &Popu24);
    printf("Insira a área da vigésima quarta cidade:\n");
    scanf("%f", &Area24);
    printf("Insira o PIB da vigésima quarta cidade:\n");
    scanf("%f", &PIB24);
    printf("Insira o número de pontos turísticos da vigésima quarta cidade:\n");
    scanf("%d", &PonTu24);

    // Código para a vigésima quinta cidade
    printf("Insira o código da vigésima quinta cidade:\n");
    scanf("%s", CodC25);
    printf("Insira o nome da vigésima quinta cidade:\n");
    scanf(" %[^\n]", NomeE25);
    printf("Insira a população da vigésima quinta cidade:\n");
    scanf("%d", &Popu25);
    printf("Insira a área da vigésima quinta cidade:\n");
    scanf("%f", &Area25);
    printf("Insira o PIB da vigésima quinta cidade:\n");
    scanf("%f", &PIB25);
    printf("Insira o número de pontos turísticos da vigésima quinta cidade:\n");
    scanf("%d", &PonTu25);

    // Código para a vigésima sexta cidade
    printf("Insira o código da vigésima sexta cidade:\n");
    scanf("%s", CodC26);
    printf("Insira o nome da vigésima sexta cidade:\n");
    scanf(" %[^\n]", NomeE26);
    printf("Insira a população da vigésima sexta cidade:\n");
    scanf("%d", &Popu26);
    printf("Insira a área da vigésima sexta cidade:\n");
    scanf("%f", &Area26);
    printf("Insira o PIB da vigésima sexta cidade:\n");
    scanf("%f", &PIB26);
    printf("Insira o número de pontos turísticos da vigésima sexta cidade:\n");
    scanf("%d", &PonTu26);

    // Código para a vigésima sétima cidade
    printf("Insira o código da vigésima sétima cidade:\n");
    scanf("%s", CodC27);
    printf("Insira o nome da vigésima sétima cidade:\n");
    scanf(" %[^\n]", NomeE27);
    printf("Insira a população da vigésima sétima cidade:\n");
    scanf("%d", &Popu27);
    printf("Insira a área da vigésima sétima cidade:\n");
    scanf("%f", &Area27);
    printf("Insira o PIB da vigésima sétima cidade:\n");
    scanf("%f", &PIB27);
    printf("Insira o número de pontos turísticos da vigésima sétima cidade:\n");
    scanf("%d", &PonTu27);

    // Código para a vigésima oitava cidade
    printf("Insira o código da vigésima oitava cidade:\n");
    scanf("%s", CodC28);
    printf("Insira o nome da vigésima oitava cidade:\n");
    scanf(" %[^\n]", NomeE28);
    printf("Insira a população da vigésima oitava cidade:\n");
    scanf("%d", &Popu28);
    printf("Insira a área da vigésima oitava cidade:\n");
    scanf("%f", &Area28);
    printf("Insira o PIB da vigésima oitava cidade:\n");
    scanf("%f", &PIB28);
    printf("Insira o número de pontos turísticos da vigésima oitava cidade:\n");
    scanf("%d", &PonTu28);

    // Código para a vigésima nona cidade
    printf("Insira o código da vigésima oitava cidade:\n");
    scanf("%s", CodC29);
    printf("Insira o nome da vigésima oitava cidade:\n");
    scanf(" %[^\n]", NomeE29);
    printf("Insira a população da vigésima oitava cidade:\n");
    scanf("%d", &Popu29);
    printf("Insira a área da vigésima oitava cidade:\n");
    scanf("%f", &Area29);
    printf("Insira o PIB da vigésima oitava cidade:\n");
    scanf("%f", &PIB29);
    printf("Insira o número de pontos turísticos da vigésima oitava cidade:\n");
    scanf("%d", &PonTu29);

    // Código para a trigegima cidade
    printf("Insira o código da vigésima oitava cidade:\n");
    scanf("%s", CodC30);
    printf("Insira o nome da vigésima oitava cidade:\n");
    scanf(" %[^\n]", NomeE30);
    printf("Insira a população da vigésima oitava cidade:\n");
    scanf("%d", &Popu30);
    printf("Insira a área da vigésima oitava cidade:\n");
    scanf("%f", &Area30);
    printf("Insira o PIB da vigésima oitava cidade:\n");
    scanf("%f", &PIB30);
    printf("Insira o número de pontos turísticos da vigésima oitava cidade:\n");
    scanf("%d", &PonTu30);

    // Código para a trigegima primera cidade
    printf("Insira o código da vigésima oitava cidade:\n");
    scanf("%s", CodC31);
    printf("Insira o nome da vigésima oitava cidade:\n");
    scanf(" %[^\n]", NomeE31);
    printf("Insira a população da vigésima oitava cidade:\n");
    scanf("%d", &Popu31);
    printf("Insira a área da vigésima oitava cidade:\n");
    scanf("%f", &Area31);
    printf("Insira o PIB da vigésima oitava cidade:\n");
    scanf("%f", &PIB31);
    printf("Insira o número de pontos turísticos da vigésima oitava cidade:\n");
    scanf("%d", &PonTu31);

    // Código para a vigésima oitava cidade
    printf("Insira o código da vigésima oitava cidade:\n");
    scanf("%s", CodC23);
    printf("Insira o nome da vigésima oitava cidade:\n");
    scanf(" %[^\n]", NomeE32);
    printf("Insira a população da vigésima oitava cidade:\n");
    scanf("%d", &Popu32);
    printf("Insira a área da vigésima oitava cidade:\n");
    scanf("%f", &Area32);
    printf("Insira o PIB da vigésima oitava cidade:\n");
    scanf("%f", &PIB32);
    printf("Insira o número de pontos turísticos da vigésima oitava cidade:\n");
    scanf("%d", &PonTu32);

    printf("1° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC1, NomeE1, Popu1, Area1, PIB1, PonTu1);
    printf("2° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC2, NomeE2, Popu2, Area2, PIB2, PonTu2);
    printf("3° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC3, NomeE3, Popu3, Area3, PIB3, PonTu3);
    printf("4° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC4, NomeE4, Popu4, Area4, PIB4, PonTu4);
    printf("5° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC5, NomeE5, Popu5, Area5, PIB5, PonTu5);
    printf("6° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC6, NomeE6, Popu6, Area6, PIB6, PonTu6);
    printf("7° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC7, NomeE7, Popu7, Area7, PIB7, PonTu7);
    printf("8° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC8, NomeE8, Popu8, Area8, PIB8, PonTu8);
    printf("9° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC9, NomeE9, Popu9, Area9, PIB9, PonTu9);
    printf("10° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC10, NomeE10, Popu10, Area10, PIB10, PonTu10);
    printf("11° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC11, NomeE11, Popu11, Area11, PIB11, PonTu11);
    printf("12° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC12, NomeE12, Popu12, Area12, PIB12, PonTu12);
    printf("13° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC13, NomeE13, Popu13, Area13, PIB13, PonTu13);
    printf("14° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC14, NomeE14, Popu14, Area14, PIB14, PonTu14);
    printf("15° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC15, NomeE15, Popu15, Area15, PIB15, PonTu15);
    printf("16° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC16, NomeE16, Popu16, Area16, PIB16, PonTu16);
    printf("17° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC17, NomeE17, Popu17, Area17, PIB17, PonTu17);
    printf("18° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC18, NomeE18, Popu18, Area18, PIB18, PonTu18);
    printf("19° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC19, NomeE19, Popu19, Area19, PIB19, PonTu19);
    printf("20° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC20, NomeE20, Popu20, Area20, PIB20, PonTu20);
    printf("21° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC21, NomeE21, Popu21, Area21, PIB21, PonTu21);
    printf("22° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC22, NomeE22, Popu22, Area22, PIB22, PonTu22);
    printf("23° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC23, NomeE23, Popu23, Area23, PIB23, PonTu23);
    printf("24° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC24, NomeE24, Popu24, Area24, PIB24, PonTu24);
    printf("25° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC25, NomeE25, Popu25, Area25, PIB25, PonTu25);
    printf("26° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC26, NomeE26, Popu26, Area26, PIB26, PonTu26);
    printf("27° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC27, NomeE27, Popu27, Area27, PIB27, PonTu27);
    printf("28° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC28, NomeE28, Popu28, Area28, PIB28, PonTu28);
    printf("29° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC29, NomeE29, Popu29, Area29, PIB29, PonTu29);
    printf("30° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC30, NomeE30, Popu30, Area30, PIB30, PonTu30);
    printf("31° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC31, NomeE31, Popu31, Area31, PIB31, PonTu31);
    printf("32° Carta\n%s\n%s\nPopulação: %d Milhões\nÁrea: %.2f Km²\nPIB: %.2f Milhões\nNúmero de Pontos Turísticos: %d\n", CodC23, NomeE32, Popu32, Area32, PIB32, PonTu32);

    return 0;
}
