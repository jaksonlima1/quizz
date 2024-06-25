#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

//LEMBRANDO QUE O GAME É LIMITADO A 3 PARTICIPANTES
//ENTÃO A QUANTIDADE DE JOGADORES TEM QUE SER > 0 && <= A 3


char r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15;

void pergunta1(){
    printf("Qual a montanha mais alta do mundo?\n");
    printf("\nA) Mauna Kea\nB) Monty Python\nC) Monte Chimborazo\nD) Monte Everest\nE) Pico da Neblina\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r1);
}
void pergunta2(){
    printf("A que temperatura a água ferve?\n");
    printf("\nA) 200 ºC\nB) -10 ºC\nC) 180 ºC\nD) 0 ºC\nE) 100 ºC\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r2);
}
void pergunta3(){
    printf("Qual o maior planeta do sistema solar?\n");
    printf("\nA) Marte\nB) Lua\nC) Saturno\nD) Terra\nE) Júpiter\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r3);
}
void pergunta4(){
    printf("Qual a maior floresta tropical do mundo?\n");
    printf("\nA) Mata Atlântica\nB) Pampas\nC) Pantanal\nD) Floresta Amazônica\nE) Caatinga\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r4);
}
void pergunta5(){
    printf("Qual o monumento famoso pela sua inclinação?");
    printf("\nA) Torre Eiffel\nB) Esfinge\nC) Estátua da Liberdade\nD) Cristo Redentor\nE) Torre de Pisa\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r5);
}
void pergunta6(){
    printf("Qual o planeta mais próximo do Sol?\n");
    printf("\nA) Netuno\nB) Júpiter\nC) Mercúrio\nD) Terra\nE) Marte\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r6);
}
void pergunta7(){
    printf("Quem pintou Mona Lisa?\n");
    printf("\nA) Leonardo da Vinci\nB) Salvador Dalí\nC) Van Gogh\nD) Tarsila do Amaral\nE) Pablo Picasso\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r7);
}
void pergunta8(){
    printf("Qual o nome popular do cloreto de sódio?\n");
    printf("\nA) Vinagre\nB) Água\nC) Papel\nD) Fermento\nE) Sal de cozinha\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r8);
}
void pergunta9(){
    printf("Que grande evento histórico aconteceu em 1822 no Brasil?\n");
    printf("\nA) Proclamação da Republica\nB) Ditadura Militar\nC) Revolução de 1930\nD) Independência do Brasil\nE) Construção de Brasília\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r9);
}
void pergunta10(){
    printf("O que comemora no feriado do dia 21 de abril no Brasil?\n");
    printf("\nA) Natal\nB) Tiradentes\nC) Independência do Brasil\nD) Finados\nE) Nossa Senhora Aparecida\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r10);
}
void pergunta11(){
    printf("Que fruto nasce da oliveira?\n");
    printf("\nA) Amêndoa\nB) Abacate\nC) Azeitona\nD) Açaí\nE) Acerola\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r11);
}
void pergunta12(){
    printf("Em que país de localiza o Taj Mahal?\n");
    printf("\nA) Egito\nB) Índia\nC) Inglaterra\nD) Brasil\nE) França\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r12);
}
void pergunta13(){
    printf("Que navio famoso naufragou na sua viagem inaugural?\n");
    printf("\nA) Titanic\nB) Antonov\nC) Boeing\nD) Airbus\nE) Symphony of the Seas\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r13);
}
void pergunta14(){
    printf("O que é um tsunami?\n");
    printf("\nA) Um ciclone\nB) Um tornado\nC) Um maremoto\nD) Um terremoto\nE) Um incêndio\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r14);
}
void pergunta15(){
    printf("Qual destas substâncias faz parte da composição do vidro?\n");
    printf("\nA) Petróleo\nB) Fibra\nC) Celulose\nD) Areia\nE) Álcool\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r15);
}

void regras(){
    sleep(1);
    printf("\n\n==== OLÁ JOGADOR ====\n\nANTES DE MAIS NADA, PRECISAMOS ESTABELECER ALGUMAS REGRAS!!!\n");
    sleep(1);
    printf("TODAS AS RESPOSTAS PERGUNTAS SERÃO DE MULTIPLA ESCOLHA!!! TENHA ISSO EM MENTE.\n");
    sleep(3);
    printf("TODAS AS RESPOSTAS DEVERAO SER ESCRITAS EM LETRA MAIUSCULA!!!");
    sleep(2);
    printf("\nENTÃO, JÁ DEIXA SEU CAPSLOCK LIGADO!\n");
    sleep(2);
    printf("AS RESPOSTAS EQUIVALEM A:\n");
    sleep(1);
    printf("\n=====================================================================\n");
    printf("\nRESPOSTA CORRETA\t=\t 50 PONTOS\nRESPOSTA INCORRETA\t=\t-25 PONTOS\n");
    printf("\n=====================================================================\n");
    printf("\nAS NOTAS DOS JOGADORES SERÃO SOMADAS E MOSTRADAS NO FINAL DO JOGO!\n");
    sleep(1);
    printf("\nBOA SORTE E DIVIRTA-SE\n");
    printf("-------------------------------------------------------------------\n\n");
    sleep(4);
}

int main(void){
    int n, resp_correta, resp_incorreta;
    char iniciar;
    resp_correta = 50;
    resp_incorreta = -25;

    setlocale(LC_ALL, "Portuguese");

    printf("============= JOGO DE PERGUNTAS =============\n\n");
    printf("Olá, quantos jogadores irão jogar? ");
    fflush(stdin);
    scanf("%d", &n);

    // LIMITAÇÕES
    while(n <= 0 || n > 3){
        if (n > 3){
            printf("\nOPA... ESQUECI DE AVISAR, A QUANTIDADE MAX EH DE 3 JOGADORES!!\n");
            sleep(2);
            system("cls");
            printf("============= JOGO DE PERGUNTAS =============\n\n");
            printf("Olá, quantos jogadores irão jogar? ");
            fflush(stdin);
            scanf("%d", &n);
        }
        if (n <= 0){
            printf("\nPERAE AMIGAO... PRECISA DE PELO MENOS 1 JOGADOR AQ...");
            sleep(4);
            system("cls");
            printf("============= JOGO DE PERGUNTAS =============\n\n");
            printf("Olá, quantos jogadores irão jogar? ");
            fflush(stdin);
            scanf("%d", &n);
        }
    }



    // UM JOGADOR
    if (n == 1){
        int jogador1 = 0;
        int acertos = 0;
        regras();
        sleep(3);
        printf("\nLEIA ATENTAMENTE AS REGRAS!!!\n");
        printf("OLÁ JOGADOR 1, PODEMOS COMEÇAR? (S/N) ");
        fflush(stdin);
        scanf("%c", &iniciar);

        if (iniciar == 'S'){
            sleep(2);
            printf("\nVAMOS AS PERGUNTAS!!!\n");
            sleep(3);
            system("cls");
            pergunta1();
            if (r1 == 'D'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos = acertos + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta2();
            if (r2 == 'E'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos = acertos + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta3();
            if (r3 == 'E'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos = acertos + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta4();
            if (r4 == 'D'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos = acertos + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta5();
            if (r5 == 'E'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos = acertos + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            printf("\nPARABENS!! VOCÊ ACERTOU %d DAS 5 PERGUNTAS!!\n", acertos);
            sleep(2);
            printf("AQUI ESTÁ SUA PONTUAÇÃO!!\n\n");
            sleep(2);
            printf("-------------------------------------\n");
            printf("JOGADOR 1\t=\t%d\n", jogador1);
            printf("-------------------------------------\n");
        } else {
            printf("\n\nNOS VEMOS NA PROXIMA ENT... :(\n");
            sleep(1);
            return 0;
        }
    }

    if(n == 2){
        int jogador1 = 0;
        int jogador2 = 0;

        int acertos1 = 0;
        int acertos2 = 0;

        regras();
        sleep(3);
        printf("OLÁ, PODEMOS COMEÇAR? (S/N) ");
        fflush(stdin);
        scanf(" %c", &iniciar);

        if (iniciar == 'S'){
            sleep(2);
            printf("\nVAMOS AS PERGUNTAS!!!\n");
            sleep(2);
            system("cls");

            pergunta1();
            if (r1 == 'D'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos1 = acertos1 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta2();
            if (r2 == 'E'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos1 = acertos1 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta3();
            if (r3 == 'E'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos1 = acertos1 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta4();
            if (r4 == 'D'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos1 = acertos1 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta5();
            if (r5 == 'E'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos1 = acertos1 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");

            printf("\nPARABENS JOGADOR 1!! VOCÊ ACERTOU %d DAS 5 PERGUNTAS!!\n\n", acertos1);
            sleep(2);
            printf("AGORA É A VEZ DO JOGADOR 2!!\n\n");
            sleep(5);
            system ("cls");
            pergunta6();
            if (r6 == 'C'){
                printf("\nCERTA RESPOSTA\n");
                jogador2 = jogador2 + resp_correta;
                acertos2 = acertos2 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador2 = jogador2 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta7();
            if (r7 == 'A'){
                printf("\nCERTA RESPOSTA\n");
                jogador2 = jogador2 + resp_correta;
                acertos2 = acertos2 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador2 = jogador2 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta8();
            if (r8 == 'E'){
                printf("\nCERTA RESPOSTA\n");
                jogador2 = jogador2 + resp_correta;
                acertos2 = acertos2 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador2 = jogador2 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta9();
            if (r9 == 'D'){
                printf("\nCERTA RESPOSTA\n");
                jogador2 = jogador2 + resp_correta;
                acertos2 = acertos2 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador2 = jogador2 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta10();
            if (r10 == 'B'){
                printf("\nCERTA RESPOSTA\n");
                jogador2 = jogador2 + resp_correta;
                acertos2 = acertos2 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador2 = jogador2 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            printf("\nPARABENS JOGADOR 2!! VOCÊ ACERTOU %d DAS 5 PERGUNTAS!!\n\n", acertos2);
            sleep(3);
            printf("\nAQUI VAI A PONTUAÇÃO DE CADA UM.........\n");
            sleep(3);
            system("cls");
            sleep(2);
            printf("-------------------------------------\n");
            printf("JOGADOR 1\t=\t%d\n", jogador1);
            printf("JOGADOR 2\t=\t%d\n", jogador2);
            printf("-------------------------------------\n");
            if (acertos1 > acertos2){
                printf("\n\nPARABÉNS JOGADOR 1 !!!!\n");
            } else if(acertos1 == acertos2){
                printf("\n\nVOCÊS EMPATARAM !!!\n");
            } else {
                printf("\n\nPARABÉNS JOGADOR 2 !!!!\n");
            }
        } else {
            printf("\n\nNOS VEMOS NA PROXIMA ENT... :(\n");
            sleep(1);
            return 0;
        }
    }

    if (n==3){
        int jogador1 = 0;
        int jogador2 = 0;
        int jogador3 = 0;

        int acertos1 = 0;
        int acertos2 = 0;
        int acertos3 = 0;

        regras();
        sleep(3);
        printf("OLÁ, PODEMOS COMEÇAR? (S/N) ");
        fflush(stdin);
        scanf(" %c", &iniciar);

        if (iniciar == 'S'){
            sleep(2);
            printf("\nVAMOS AS PERGUNTAS!!!\n");
            sleep(2);
            system("cls");
            pergunta1();
            if (r1 == 'D'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos1 = acertos1 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta2();
            if (r2 == 'E'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos1 = acertos1 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta3();
            if (r3 == 'E'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos1 = acertos1 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta4();
            if (r4 == 'D'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos1 = acertos1 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta5();
            if (r5 == 'E'){
                printf("\nCERTA RESPOSTA\n");
                jogador1 = jogador1 + resp_correta;
                acertos1 = acertos1 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador1 = jogador1 + resp_incorreta;
            }
            sleep(2);
            system("cls");

            printf("\nPARABENS JOGADOR 1!! VOCÊ ACERTOU %d DAS 5 PERGUNTAS!!\n\n", acertos1);
            sleep(2);
            printf("AGORA É A VEZ DO JOGADOR 2!!\n\n");
            sleep(5);
            system("cls");
            pergunta6();
            if (r6 == 'C'){
                printf("\nCERTA RESPOSTA\n");
                jogador2 = jogador2 + resp_correta;
                acertos2 = acertos2 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador2 = jogador2 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta7();
            if (r7 == 'A'){
                printf("\nCERTA RESPOSTA\n");
                jogador2 = jogador2 + resp_correta;
                acertos2 = acertos2 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador2 = jogador2 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta8();
            if (r8 == 'E'){
                printf("\nCERTA RESPOSTA\n");
                jogador2 = jogador2 + resp_correta;
                acertos2 = acertos2 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador2 = jogador2 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta9();
            if (r9 == 'D'){
                printf("\nCERTA RESPOSTA\n");
                jogador2 = jogador2 + resp_correta;
                acertos2 = acertos2 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador2 = jogador2 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta10();
            if (r10 == 'B'){
                printf("\nCERTA RESPOSTA\n");
                jogador2 = jogador2 + resp_correta;
                acertos2 = acertos2 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador2 = jogador2 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            printf("\nPARABENS JOGADOR 2!! VOCÊ ACERTOU %d DAS 5 PERGUNTAS!!\n\n", acertos2);
            sleep(2);
            printf("AGORA É A VEZ DO JOGADOR 3!!\n\n");
            sleep(5);
            system("cls");

            pergunta11();
            if (r11 == 'C'){
                printf("\nCERTA RESPOSTA\n");
                jogador3 = jogador3 + resp_correta;
                acertos3 = acertos3 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador3 = jogador3 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta12();
            if (r12 == 'B'){
                printf("\nCERTA RESPOSTA\n");
                jogador3 = jogador3 + resp_correta;
                acertos3 = acertos3 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador3 = jogador3 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta13();
            if (r13 == 'A'){
                printf("\nCERTA RESPOSTA\n");
                jogador3 = jogador3 + resp_correta;
                acertos3 = acertos3 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador3 = jogador3 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta14();
            if (r14 == 'C'){
                printf("\nCERTA RESPOSTA\n");
                jogador3 = jogador3 + resp_correta;
                acertos3 = acertos3 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador3 = jogador3 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            pergunta15();
            if (r15 == 'D'){
                printf("\nCERTA RESPOSTA\n");
                jogador3 = jogador3 + resp_correta;
                acertos3 = acertos3 + 1;
            } else{
                printf("\nERROOUUUU!!!!\n");
                jogador3 = jogador3 + resp_incorreta;
            }
            sleep(2);
            system("cls");
            printf("\nPARABENS JOGADOR 3!! VOCÊ ACERTOU %d DAS 5 PERGUNTAS!!\n\n", acertos3);
            sleep(4);
            printf("\nAQUI VAI A PONTUAÇÃO DE CADA UM.........\n");
            sleep(3);
            system("cls");
            sleep(2);
            printf("-------------------------------------\n");
            printf("JOGADOR 1\t=\t%d\n", jogador1);
            printf("JOGADOR 2\t=\t%d\n", jogador2);
            printf("JOGADOR 3\t=\t%d\n", jogador3);
            printf("-------------------------------------\n");

            if (acertos1 > acertos2 && acertos1 > acertos3){
                printf("\n\nPARABÉNS JOGADOR 1 !!!!\n");
            } else if(acertos1 == acertos2 && acertos1 == acertos3){
                printf("\n\nVOCÊS EMPATARAM !!!\n");
            } else if(acertos2 > acertos1 && acertos2 > acertos3){
                printf("\n\nPARABÉNS JOGADOR 2 !!!!\n");
            } else if(acertos1 == acertos2){
                printf("\n\nO JOGADOR 1 EMPATOU COM O JOGADOR 2 !!!\n");
            } else if(acertos2 == acertos3){
                printf("\n\nO JOGADOR 2 EMPATOU COM O JOGADOR 3 !!!\n");
            } else if(acertos1 == acertos3){
                printf("\n\nO JOGADOR 1 EMPATOU COM O JOGADOR 3 !!!\n");
            } else {
                printf("\n\nPARABÉNS JOGADOR 3 !!!!\n");
            }

        } else {
            printf("\n\nNOS VEMOS NA PROXIMA ENT... :(\n");
            sleep(1);
            return 0;
        }
    }
    system("pause");
    return 0;
}



/*

GABARITO

1 = D
2 = E
3 = E
4 = D
5 = E

6 = C
7 = A
8 = E
9 = D
10 = B

11 = C
12 = B
13 = A
14 = C
15 = D

*/
