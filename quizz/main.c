#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

char r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15;

void pergunta1(){
    printf("====================================================\n");
    printf("            PERGUNTA 01/05  - JOGADOR 1\n");
    printf("====================================================\n");
    printf("Qual a montanha mais alta do mundo?\n");
    printf("\nA) Mauna Kea\nB) Monty Python\nC) Monte Chimborazo\nD) Monte Everest\nE) Pico da Neblina\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r1);
    r1 = toupper(r1);
}
void pergunta2(){
    printf("====================================================\n");
    printf("            PERGUNTA 02/05  - JOGADOR 1\n");
    printf("====================================================\n");
    printf("A que temperatura a �gua ferve?\n");
    printf("\nA) 200 �C\nB) -10 �C\nC) 180 �C\nD) 0 �C\nE) 100 �C\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r2);
    r2 = toupper(r2);
}
void pergunta3(){
    printf("====================================================\n");
    printf("            PERGUNTA 03/05  - JOGADOR 1\n");
    printf("====================================================\n");
    printf("Qual o maior planeta do sistema solar?\n");
    printf("\nA) Marte\nB) Lua\nC) Saturno\nD) Terra\nE) J�piter\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r3);
    r3 = toupper(r3);
}
void pergunta4(){
    printf("====================================================\n");
    printf("            PERGUNTA 04/05  - JOGADOR 1\n");
    printf("====================================================\n");
    printf("Qual a maior floresta tropical do mundo?\n");
    printf("\nA) Mata Atl�ntica\nB) Pampas\nC) Pantanal\nD) Floresta Amaz�nica\nE) Caatinga\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r4);
    r4 = toupper(r4);
}
void pergunta5(){
    printf("====================================================\n");
    printf("            PERGUNTA 05/05  - JOGADOR 1\n");
    printf("====================================================\n");
    printf("Qual o monumento famoso pela sua inclina��o?");
    printf("\nA) Torre Eiffel\nB) Esfinge\nC) Est�tua da Liberdade\nD) Cristo Redentor\nE) Torre de Pisa\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r5);
    r5 = toupper(r5);
}
void pergunta6(){
    printf("====================================================\n");
    printf("            PERGUNTA 01/05  - JOGADOR 2\n");
    printf("====================================================\n");
    printf("Qual o planeta mais pr�ximo do Sol?\n");
    printf("\nA) Netuno\nB) J�piter\nC) Merc�rio\nD) Terra\nE) Marte\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r6);
    r6 = toupper(r6);
}
void pergunta7(){
    printf("====================================================\n");
    printf("            PERGUNTA 02/05  - JOGADOR 2\n");
    printf("====================================================\n");
    printf("Quem pintou Mona Lisa?\n");
    printf("\nA) Leonardo da Vinci\nB) Salvador Dal�\nC) Van Gogh\nD) Tarsila do Amaral\nE) Pablo Picasso\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r7);
    r7 = toupper(r7);
}
void pergunta8(){
    printf("====================================================\n");
    printf("            PERGUNTA 03/05  - JOGADOR 2\n");
    printf("====================================================\n");
    printf("Qual o nome popular do cloreto de s�dio?\n");
    printf("\nA) Vinagre\nB) �gua\nC) Papel\nD) Fermento\nE) Sal de cozinha\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r8);
    r8 = toupper(r8);
}
void pergunta9(){
    printf("====================================================\n");
    printf("            PERGUNTA 04/05  - JOGADOR 2\n");
    printf("====================================================\n");
    printf("Que grande evento hist�rico aconteceu em 1822 no Brasil?\n");
    printf("\nA) Proclama��o da Republica\nB) Ditadura Militar\nC) Revolu��o de 1930\nD) Independ�ncia do Brasil\nE) Constru��o de Bras�lia\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r9);
    r9 = toupper(r9);
}
void pergunta10(){
    printf("====================================================\n");
    printf("            PERGUNTA 05/05  - JOGADOR 2\n");
    printf("====================================================\n");
    printf("O que comemora no feriado do dia 21 de abril no Brasil?\n");
    printf("\nA) Natal\nB) Tiradentes\nC) Independ�ncia do Brasil\nD) Finados\nE) Nossa Senhora Aparecida\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r10);
    r10 = toupper(r10);
}
void pergunta11(){
    printf("====================================================\n");
    printf("            PERGUNTA 01/05  - JOGADOR 3\n");
    printf("====================================================\n");
    printf("Que fruto nasce da oliveira?\n");
    printf("\nA) Am�ndoa\nB) Abacate\nC) Azeitona\nD) A�a�\nE) Acerola\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r11);
    r11 = toupper(r11);
}
void pergunta12(){
    printf("====================================================\n");
    printf("            PERGUNTA 02/05  - JOGADOR 2\n");
    printf("====================================================\n");
    printf("Em que pa�s de localiza o Taj Mahal?\n");
    printf("\nA) Egito\nB) �ndia\nC) Inglaterra\nD) Brasil\nE) Fran�a\n");
    printf("RESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r12);
    r12 = toupper(r12);
}
void pergunta13(){
    printf("====================================================\n");
    printf("            PERGUNTA 03/05  - JOGADOR 3\n");
    printf("====================================================\n");
    printf("Que navio famoso naufragou na sua viagem inaugural?\n");
    printf("\nA) Titanic\nB) Antonov\nC) Boeing\nD) Airbus\nE) Symphony of the Seas\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r13);
    r13 = toupper(r13);
}
void pergunta14(){
    printf("====================================================\n");
    printf("            PERGUNTA 04/05  - JOGADOR 3\n");
    printf("====================================================\n");
    printf("O que � um tsunami?\n");
    printf("\nA) Um ciclone\nB) Um tornado\nC) Um maremoto\nD) Um terremoto\nE) Um inc�ndio\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r14);
    r14 = toupper(r14);
}
void pergunta15(){
    printf("====================================================\n");
    printf("            PERGUNTA 05/05  - JOGADOR 3\n");
    printf("====================================================\n");
    printf("Qual destas subst�ncias faz parte da composi��o do vidro?\n");
    printf("\nA) Petr�leo\nB) Fibra\nC) Celulose\nD) Areia\nE) �lcool\n");
    printf("\nRESPOSTA: ");
    fflush(stdin);
    scanf(" %c", &r15);
    r15 = toupper(r15);
}

void regras(){
    system("cls");
    sleep(1);
    printf("====================================================\n");
    printf("                 OL� JOGADOR(ES)\n");
    printf("====================================================\n");
    printf("\n\nANTES DE MAIS NADA, PRECISAMOS ESTABELECER ALGUMAS REGRAS!!!\n\n");
    printf("REGRA 01 - TODAS AS RESPOSTAS PERGUNTAS SER�O DE MULTIPLA ESCOLHA!!!\n");
    printf("(n�o pensei em nenhuma outra regra n...)");
    printf("\nOBS = ENT�O, J� DEIXA SEU CAPSLOCK LIGADO!!!\n");
    printf("\n\n=====================================================================\n");
    printf("AS RESPOSTAS EQUIVALEM A:\n");
    printf("\n----------------------------------------------------------------------\n");
    printf("\nRESPOSTA CORRETA\t=\t 50 PONTOS\nRESPOSTA INCORRETA\t=\t-25 PONTOS\n");
    printf("\n=====================================================================\n");
    printf("\nAS NOTAS DOS JOGADORES SER�O SOMADAS E MOSTRADAS NO FINAL DO JOGO!!!\n");
    printf("\nBOA SORTE E DIVIRTA-SE\n");
    sleep(5);
}

int main(void){
    int n, resp_correta, resp_incorreta;
    char iniciar;
    resp_correta = 50;
    resp_incorreta = -25;

    setlocale(LC_ALL, "Portuguese");

    printf("=====================================================================\n");
    printf("                             QUIZZ\n");
    printf("=====================================================================\n");
    sleep(1);
    printf("\nAOBA CHEFIA, QUANTOS JOGADORES TEREMOS DESSA VEZ? ");
    fflush(stdin);
    scanf("%d", &n);

    // LIMITA��ES
    while(n <= 0 || n > 3){
        if (n > 3){
            system("cls");
            printf("?");
            sleep(1);
            system("cls");
            printf("??");
            sleep(1);
            system("cls");
            printf("???");
            system("cls");
            sleep(1);
            printf("=====================================================================\n");
            printf("    OPA... ESQUECI DE AVISAR, A QUANTIDADE MAX EH DE 3 JOGADORES!!\n");
            printf("=====================================================================\n");
            sleep(4);
            system("cls");
            printf("=====================================================================\n");
            printf("                             QUIZZ\n");
            printf("=====================================================================\n");
            printf("\nAOBA, QUANTOS JOGADORES TEREMOS DESSA VEZ? ");
            fflush(stdin);
            scanf("%d", &n);
        }
        if (n <= 0){
            system("cls");
            printf("?");
            sleep(1);
            system("cls");
            printf("??");
            sleep(1);
            system("cls");
            printf("???");
            system("cls");
            printf("=====================================================================\n");
            printf("  ??? PRECISA DE PELO MENOS 1 JOGADOR PRA ISSO AQUI FUNCIONAR !!!\n");
            printf("=====================================================================\n");
            sleep(4);
            system("cls");
            printf("=====================================================================\n");
            printf("                             QUIZZ\n");
            printf("=====================================================================\n");
            printf("\nAOBA, QUANTOS JOGADORES TEREMOS DESSA VEZ? ");
            fflush(stdin);
            scanf("%d", &n);
        }
    }



    // UM JOGADOR
    if (n == 1){
        int jogador1 = 0;
        int acertos = 0;
        regras();
        printf("OL�, PODEMOS COME�AR? (S/N) ");
        fflush(stdin);
        scanf("%c", &iniciar);
        iniciar = toupper(iniciar);

        if (iniciar == 'S'){
            printf("\nVAMOS AS PERGUNTAS!!!\n");
            sleep(2);
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
            printf("\nPARABENS!! VOC� ACERTOU %d DAS 5 PERGUNTAS!!\n", acertos);
            sleep(2);
            printf("AQUI EST� SUA PONTUA��O!!\n\n");
            sleep(2);
            system("cls");
            printf("-------------------------------------\n");
            printf("JOGADOR 1\t=\t%d\n", jogador1);
            printf("-------------------------------------\n");
        } else {
            printf("\n\nNOS VEMOS NA PROXIMA ENT... :(\n");
            sleep(1);
            system("pause");
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
        printf("OL�, PODEMOS COME�AR? (S/N) ");
        fflush(stdin);
        scanf(" %c", &iniciar);
        iniciar = toupper(iniciar);

        if (iniciar == 'S'){
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

            printf("\nPARABENS JOGADOR 1!! VOC� ACERTOU %d DAS 5 PERGUNTAS!!\n\n", acertos1);
            sleep(2);
            printf("AGORA � A VEZ DO JOGADOR 2!!\n\n");
            sleep(2);
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
            printf("\nPARABENS JOGADOR 2!! VOC� ACERTOU %d DAS 5 PERGUNTAS!!\n\n", acertos2);
            sleep(3);
            printf("\nAQUI VAI A PONTUA��O DE CADA UM.........\n");
            sleep(3);
            system("cls");
            sleep(2);
            printf("-------------------------------------\n");
            printf("JOGADOR 1\t=\t%d\n", jogador1);
            printf("JOGADOR 2\t=\t%d\n", jogador2);
            printf("-------------------------------------\n");
            if (acertos1 > acertos2){
                printf("\n\nPARAB�NS JOGADOR 1 !!!!\n");
            } else if(acertos1 == acertos2){
                printf("\n\nVOC�S EMPATARAM !!!\n");
            } else {
                printf("\n\nPARAB�NS JOGADOR 2 !!!!\n");
            }
        } else {
            printf("\n\nNOS VEMOS NA PROXIMA ENT... :(\n");
            sleep(1);
            system("pause");
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
        printf("OL�, PODEMOS COME�AR? (S/N) ");
        fflush(stdin);
        scanf(" %c", &iniciar);
        iniciar = toupper(iniciar);

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

            printf("\nPARABENS JOGADOR 1!! VOC� ACERTOU %d DAS 5 PERGUNTAS!!\n\n", acertos1);
            sleep(2);
            printf("AGORA � A VEZ DO JOGADOR 2!!\n\n");
            sleep(2);
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
            printf("\nPARABENS JOGADOR 2!! VOC� ACERTOU %d DAS 5 PERGUNTAS!!\n\n", acertos2);
            sleep(2);
            printf("AGORA � A VEZ DO JOGADOR 3!!\n\n");
            sleep(2);
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
            printf("\nPARABENS JOGADOR 3!! VOC� ACERTOU %d DAS 5 PERGUNTAS!!\n\n", acertos3);
            sleep(2);
            printf("\nAQUI VAI A PONTUA��O DE CADA UM.........\n");
            sleep(2);
            system("cls");
            printf("-------------------------------------\n");
            printf("JOGADOR 1\t=\t%d\n", jogador1);
            printf("JOGADOR 2\t=\t%d\n", jogador2);
            printf("JOGADOR 3\t=\t%d\n", jogador3);
            printf("-------------------------------------\n");

            if (acertos1 > acertos2 && acertos1 > acertos3){
                printf("\n\nPARAB�NS JOGADOR 1 !!!!\n");
            } else if(acertos1 == acertos2 && acertos1 == acertos3){
                printf("\n\nVOC�S EMPATARAM !!!\n");
            } else if(acertos2 > acertos1 && acertos2 > acertos3){
                printf("\n\nPARAB�NS JOGADOR 2 !!!!\n");
            } else if(acertos1 == acertos2){
                printf("\n\nO JOGADOR 1 EMPATOU COM O JOGADOR 2 !!!\n");
            } else if(acertos2 == acertos3){
                printf("\n\nO JOGADOR 2 EMPATOU COM O JOGADOR 3 !!!\n");
            } else if(acertos1 == acertos3){
                printf("\n\nO JOGADOR 1 EMPATOU COM O JOGADOR 3 !!!\n");
            } else {
                printf("\n\nPARAB�NS JOGADOR 3 !!!!\n");
            }

        } else {
            printf("\n\nNOS VEMOS NA PROXIMA ENT... :(\n");
            system("pause");
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
