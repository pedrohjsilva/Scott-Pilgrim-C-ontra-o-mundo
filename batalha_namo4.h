#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>



int batalha_namo4( )
{
    setlocale (LC_ALL,"");
    setlocale (LC_CTYPE,"pt_BR.UTF-8" );

    int morte = 0;

    int escolha = 0, ataque = 0, defesa = 0;
    int escolha_pc = 0, ataque_pc =0, defesa_pc = 0;
    int vitoria_ou_derrota = 0;

    //para nosso personagem
    struct Personagem jogador, namo1, namo2, namo3, namo4, namo5, namo6, namo7;
    strcpy(jogador.nome, "Scott Pilgrim");
    jogador.hp = 100;
    strcpy(jogador.humor, "Assustado");
    strcpy(jogador.genero, "Masculino");


    //primeiro vilão
    strcpy(namo1.nome, "Matthew Patel");
    namo1.hp = 100;
    strcpy(namo1.genero, "Masculino");


    //segundo vilão
    strcpy(namo2.nome, "Lucas Lee");
    namo2.hp = 100;
    strcpy(namo2.genero, "Masculino");


    //terceiro vilão
    strcpy(namo3.nome, "Todd Ingram");
    namo3.hp = 100;
    strcpy(namo3.genero, "Masculino");


    //quarto vilão
    strcpy(namo4.nome, "Roxanne \"Roxy\" Ritcher");
    namo4.hp = 100;
    strcpy(namo4.genero, "Mulher não-binária");


    //quinto vilão
    strcpy(namo5.nome, "Ken Katayanagi");
    namo5.hp = 100;
    strcpy(namo5.genero, "Masculino");


    //sexto vilão
    strcpy(namo6.nome, "Kyle Katayanagi");
    namo6.hp = 100;
    strcpy(namo6.genero, "Masculino");

    //último vilão
    strcpy(namo7.nome, "Gideon Gordon");
    namo7.hp = 100;
    strcpy(namo7.genero, "Masculino");

    do{
    //essa é a função que usaremos para imprimir os status do jogador e do oponente
    //optei por inseri-la dentro da função principal, pois só será usada aqui dentro, então, achei
    //que seria trivial utilizar ponteiros para acessar os dados dela
    int mostra_batalha()
{
    system("cls"); printf("\n\n\n\tJOGADOR:\t%s", jogador.nome);
    printf("\n\tHumor:\t\t%s", jogador.humor);
    printf("\n\tGênero:\t\t%s", jogador.genero);
    printf("\n\tHP:\t\t%d", jogador.hp);
    printf("\n\n\tOPONENTE:\t%s", namo4.nome);
    printf("\n\tGênero:\t\t%s", namo4.genero);
    printf("\n\tHP:\t\t%d", namo4.hp);
}

    mostra_batalha();

    //essa é outra função que dispensa o uso de ponteiros, uma vez
    //que só  precisa existir aqui dentro
int mostra_escolhas()
{
    printf("\n\n\tO que você deseja fazer?");
    printf("\n\t<1>\tEscolher um ataque");
    printf("\n\t<2>\tEscolher uma defesa\n\n");
    scanf("%d", &escolha);
}

    mostra_escolhas();

switch (escolha)
{
    case 1:
    {
    system ("cls");
    mostra_batalha();

int mostra_ataques()
{
    printf("\n\n\n\tOs ataques disponíveis são:");
    printf("\n\t<1>\tGolpear");
    printf("\n\t<2>\tAtacar");
    printf("\n\t<3>\tConfiar\n\n");
    scanf("%d", &ataque);
}
    mostra_ataques();
    mostra_batalha();
    break;
    }

    case 2:
    {
    system("cls");
    mostra_batalha();

int mostra_defesas()
{
    printf("\n\n\n\tAs defesas disponíveis são:");
    printf("\n\t<1>\tBloqueio");
    printf("\n\t<2>\tEsquivar");
    printf("\n\t<3>\tDesviar\n\n");
    scanf("%d", &defesa);
}
    mostra_defesas();
    break;
    }
};

    //jogada da máquina

    escolha_pc = escolha_aleatoria(1,2);
    if (escolha_pc ==1) ataque_pc = escolha_aleatoria(1,3);
    else if (escolha_pc ==2) defesa_pc = escolha_aleatoria(1,3);

    if (escolha == 1 && escolha_pc == 2) {namo4.hp = namo4.hp - 30;} else
    if (escolha_pc == 1 && escolha == 2) {jogador.hp = jogador.hp -30;} else
    if (escolha == 1 & escolha_pc == 1) {namo4.hp = namo4.hp - 30; jogador.hp = jogador.hp - 30;} else
    if (escolha == 2 & escolha_pc == 2) {namo4.hp = namo4.hp - 0; jogador.hp = jogador.hp - 0;};

    if(ataque == 1 && defesa_pc == 1 && ataque_pc == 0 && defesa == 0) {namo4.hp = namo4.hp+30;} else
    if(ataque == 2 && defesa_pc == 2 && ataque_pc == 0 && defesa == 0) {namo4.hp = namo4.hp+30;} else
    if(ataque == 3 && defesa_pc == 3 && ataque_pc == 0 && defesa == 0) {namo4.hp = namo4.hp+30;} else

    if(ataque_pc == 1 & defesa == 1 && ataque == 0 && defesa_pc ==0) {jogador.hp = jogador.hp+30;} else
    if(ataque_pc == 2 & defesa == 2 && ataque == 0 && defesa_pc ==0) {jogador.hp = jogador.hp+30;} else
    if(ataque_pc == 3 & defesa == 3 && ataque == 0 && defesa_pc ==0) {jogador.hp = jogador.hp+30;};

    printf("\n\n\tSeu oponente está jogando."); Sleep(3000);

    //exibindo a jogada escolhida pelo computador
    if(escolha_pc==1)
    {
    //dentro doa ataques existem 3 possibilidades
    if(ataque_pc==1) {printf("\n\n\tO seu oponente escolheu atacar com [GOLPEAR]");}
    if(ataque_pc==2) {printf("\n\n\tO seu oponente escolheu atacar com [ATACAR]");}
    if(ataque_pc==3) {printf("\n\n\tO seu oponente escolheu atacar com [CONFIAR]");};
    } else

    if(escolha_pc==2)
    {
    //dentro das defesas existem 3 possibilidades
    if(defesa_pc==1) {printf("\n\n\tO seu oponente escolheu defender com [BLOQUEIO]");}
    if(defesa_pc==2) {printf("\n\n\tO seu oponente escolheu defender com [ESQUIVAR]");}
    if(defesa_pc==3) {printf("\n\n\tO seu oponente escolheu defender com [DESVIAR]");};

    escolha = 0; escolha_pc = 0; ataque = 0; ataque_pc = 0; defesa = 0; defesa_pc = 0;
    } Sleep(2000);

    }while (namo4.hp>0 && jogador.hp>0);

    if(jogador.hp>0 && namo4.hp<0){
    system("cls");
    printf("\n\n\n\tFIM DA BATALHA");
    printf("\n\tO nível de HP atual de %s é %d", jogador.nome, jogador.hp);
    printf("\n\tO nível de HP atual de %s é %d", namo3.nome, namo3.hp);
    Sleep(3000);} else

    if(namo4.hp>0 && jogador.hp<0){
    system ("cls");
    printf("\n\n\n\t[SCOTT PILGRIM PERDEU A BATALHA.]");
    printf("\n\tA Liga dos ex-namorados malvados de Ramona Flowers a raptou e aprisionou.");
    Sleep(3000);
    system("cls");
    printf("\n\n\n\tGAME OVER");
    Sleep(5000);
    //final_credits();
    Sleep(5000);
    system("cls");
    } else

    if(jogador.hp<0 && namo4.hp<0)
    {
    Sleep(3000); system("cls");
    int cura = escolha_aleatoria(1,2);
    if(cura==1){printf("\n\n\n\tVocê derrotou seu inimigo e ele dropou uma poção de cura.\nInsira alguma letra para utilizá-la.\n\n");} else
    if(cura==2){system ("cls");
    printf("\n\n\n\t[SCOTT PILGRIM PERDEU A BATALHA.]");
    printf("\n\tA Liga dos ex-namorados malvados de Ramona Flowers a raptou e aprisionou.");
    Sleep(3000);
    system("cls");
    printf("\n\n\n\tGAME OVER");
    Sleep(5000);
    //final_credits();
    Sleep(5000);
    morte = 1;
    ;}
    }
    return morte;
}
