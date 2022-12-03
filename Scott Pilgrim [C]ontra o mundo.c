#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "loadingscreen.h"
#include "tela_azul.h"
#include "personagens.h"
#include "trilha_sonora.h"
#include "informacoes.h"
#include "batalha_namo1.h"
#include "batalha_namo2.h"
#include "batalha_namo3.h"
#include "batalha_namo4.h"
#include "batalha_namo5.h"
#include "batalha_namo6.h"
#include "batalha_namo7.h"
#include "final_credits.h"
#include <locale.h>

/*
Centro Federal de Educa��o Tecnol�gica de Minas Gerais
Gradua��o em Engenharia Mec�nica
Pedro Henrique Silva
*/

int main ( )
{
    setlocale (LC_ALL,"");
    setlocale (LC_CTYPE,"pt_BR.UTF-8" );

    //essas linhas de c�digo aqui fazem o cmd iniciarem em tela cheia
    keybd_event(VK_MENU, 0x36, 0, 0);
    keybd_event(VK_RETURN, 0x1C, 0, 0);
    keybd_event(VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);

    //defini cores para diversas telas do jogo utulizando o comando abaixo
    system("color  0B");

    //tela de carregamento do jogo
    system("start WeAreSexBobOmb.mp3");
    loadingscreen ();
    //a vari�vel abaixo permite a escolha de uma das funcionalidades do jogo
    char game_start;
    int volta_menu = 0;

    do
    {
    Sleep(5000); system("cls"); system("color  0B");
    printf("\n\n\n\t\t\t\tSCOTT PILGRIM\n\t\t\t\tcontra o mundo");
    system("start DreamingOfYou.mp3"); Sleep(500);
    printf("\n\n\t\t\tInsira <0> para iniciar o jogo"); Sleep(500);
    printf("\n\t\t\tInsira <1> para acessar as configura��es"); Sleep(500);
    printf("\n\t\t\tInsira <2> para ver informa��es sobre o jogo"); Sleep(500);
    printf("\n\t\t\tInsira <3> para conhecer o personagens do jogo"); Sleep(500);
    printf("\n\t\t\tInsira <4> para ver a trilha sonora do jogo"); Sleep(500);
    printf("\n\t\t\tInsira <5> para jogar [Br]eaking [Ba]d"); Sleep(500);
    printf("\n\t\t\tInsira <6> para iniciar o jogo em modo arcade\n\n\n\n");
    scanf("%c", &game_start); system("cls");

    switch(game_start)
    {

    case '0':
    {
    do{
    system("start BoisLie.mp3"); Sleep(5000);
    //in�cio da hist�ria do jogo aqui
    printf("\n\n\n\n\tScott Pilgrim tinha 23 e era guitarrista na Sex Bob-Omb..."); Sleep(5000);
    printf("\n\tEle tinha v�rios amigos. N�o precisava pagar muitas contas."); Sleep(5000);
    printf("\n\tEle poderia dizer que tinha uma vida perfeita"); Sleep(5000);
    printf(". "); Sleep(5000);
    printf(". "); Sleep(5000);
    printf(". "); Sleep(5000);
    printf("\n\tMas a�, ele teve aquele sonho."); Sleep(5000);
    printf(" Com aquela garota."); Sleep(5000);
    system("cls"); Sleep(5000);
    system("color 1F"); Sleep(5000);
    printf("\n\n\n\n\tRAMONA: Oi..."); Sleep(5000);
    printf(" Voc� � daqui?"); Sleep(5000);
    printf("\n\n\tSCOTT: O-oi!"); Sleep(5000);
    printf(" Eu sou, sim."); Sleep(5000);
    printf("\n\n\tRAMONA: Eu t� procurando o Pilgrim. Scott Pilgrim. C� conhece ele?"); Sleep(5000);
    printf("\n\n\tSCOTT [Gritando]: Oi? Eu n�o consigo te ouvir."); Sleep(5000);
    printf(" A neve."); Sleep(5000);
    printf(" T� fazendo muito barulho."); Sleep(5000);
    printf("\n\n\tRAMONA [Gritando]: Conhece o Scott Pilgrim?"); Sleep(5000);
    printf("\n\n\tSCOTT: Sou eu..."); Sleep(5000);
    printf(" Eu sou o Scott Pilgrim."); Sleep(5000);
    printf("\n\n\tRAMONA: Scott, eu vim trazer suas coisas."); Sleep(5000);
    printf(" N�o quer me chamar pra entrar?"); Sleep(5000);
    printf(" T� um pouco frio aqui fora"); Sleep(5000);
    system("cls"); Sleep(5000);
    printf("\n\n\n\n\t[DENTRO DA CASA DE SCOTT]\n\n\tSCOTT: Voc� veio bem r�pido. N�o estava esperando receber hoje."); Sleep(5000);
    printf("\n\n\tRAMONA [Apontando para os patins em seus p�s]: Eu vim voando."); Sleep(5000);
    printf("\n\tInclusive, preciso correr."); Sleep(5000);
    printf(" Tenho que terminar essas outras entregas logo."); Sleep(5000);
    printf("\n\tDaqui a pouco, nem vou conseguir andar l� fora..."); Sleep(5000);
    printf(" At� mais, Scott!"); Sleep(5000);
    printf("\n\n\tSCOTT: Hey, mo�a!"); Sleep(5000);
    printf("\n\n\tRAMONA: Diz, Scott..."); Sleep(5000);
    printf("\n\n\tSCOTT: Como eu posso te encontrar?"); Sleep(5000);
    printf("\n\n\tRAMONA: � simples."); Sleep(5000);
    printf(" � s� voc� comprar de novo no site."); Sleep(5000); system("start Complicated.mp3");
    printf(" Eu venho correndo entregar."); Sleep(5000);
    printf("\n\n\tSCOTT: N-no site?"); Sleep(5000);
    printf("\n\n\tRAMONA: �. amazon.com"); Sleep(5000);
    printf("\n\n\tSCOTT: amazon.com"); Sleep(5000); system("color 0B");Sleep(5000);
    printf("\n\n\t[Scott acorda do sonho]"); Sleep(5000);
    system("cls"); Sleep(5000);
    printf("\n\n\n\tSCOTT [Ainda na cama, cochichando para si pr�prio]: Cara..."); Sleep(5000);
    printf(" Eu preciso encontrar essa garota."); Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\t[Dias depois."); Sleep(5000);
    printf(" Em uma festa,"); Sleep(5000);
    printf(" onde a Sex Bob-Omb iria tocar.]"); Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tScott estava come�ando a ficar desesperado."); Sleep(5000);
    printf(" Ele sabia que a garota do seu sonho existia."); Sleep(5000);
    printf(" E precisava encontr�-la a qualquer custo."); Sleep(5000);
    printf("\n\tA Sex Bob-Omb estava come�ando a ascender."); Sleep(5000);
    printf(" Eles estavam come�ando a ficar conhecidos entre o pessoal popular,"); Sleep(5000);
    printf(" ent�o Scott estava certo de que encontraria a garota misteriosa na festa."); Sleep(5000);
    printf("\n\tScott passou a noite inteira perguntando sobre Ramona,"); Sleep(5000);
    printf(" mas sequer sabia seu nome."); Sleep(5000);
    printf("\n\tComo era de se esperar, Scott n�o teve sucesso em sua empreitada."); Sleep(5000);
    printf(" Ele estava quase desistindo,"); Sleep(5000);
    printf(" quando algu�m se sentou ao seu lado."); Sleep(5000);
    printf(" ."); Sleep(5000);
    printf(" ."); Sleep(5000);
    system("cls"); Sleep(5000);
    system("color 1F"); Sleep(5000);
    printf("\n\n\n\tRAMONA [Se sentando ao lado de Scott] : Caramba."); Sleep(5000);
    printf(" Essa banda toca pra caralho, c� n�o acha?"); Sleep(5000);
    printf("\n\n\tSCOTT [Sem olhar para Ramona] : �..."); Sleep(5000);
    printf(" A gente se esfor�ou bastante..."); Sleep(5000);
    printf("\n\n\tRAMONA: Mas por que c� t� t�o pra baixo?"); Sleep(5000);
    printf(" Voc�s mandaram super bem..."); Sleep(5000);
    printf("\n\n\tSCOTT [Ainda sem olhar para Ramona]: � que tem essa garota..."); Sleep(5000);
    printf(" Ela tem esse cabelo, picado. Azul."); Sleep(5000);
    printf(" E � a garota mais linda que eu j� conheci."); Sleep(5000);
    printf(" Ou quase conheci..."); Sleep(5000);
    printf("\n\n\tRAMONA: Por que voc� n�o a chama pra sair?"); Sleep(5000);
    printf(" Seja l� o que quer dizer com \"quase a conheceu\"."); Sleep(5000);
    printf("\n\n\tSCOTT: Essa garota apareceu no meu sonho."); Sleep(5000);
    printf(" Mas, desde ent�o, n�o a vi mais."); Sleep(5000);
    printf(" Mas eu tenho certeza de que ela � real..."); Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\t[Ramona segura as m�os de Scott,"); Sleep(5000);
    printf(" que finalmente olha para ela]"); Sleep(5000);
    printf("\n\n\tRAMONA: Ent�o quer dizer que andou me procurando?"); Sleep(5000);
    printf("\n\n\tSCOTT: V-voc�..."); Sleep(5000);
    printf("\n\n\t[Os dois ficam em sil�ncio e se enncaram por alguns instantes."); Sleep(5000);
    printf(" At� que Ramona beija Scott]"); Sleep(5000);
    system("start IfICanTHaveYou.mp3"); system("cls"); Sleep(5000); system("color 0B"); Sleep(5000);
    printf("\n\n\n\tPor um instante, o mundo havia congelado para Scott."); Sleep(5000);
    printf("\n\tAquele instante parecia um show de fogos de artif�cios."); Sleep(5000); system("cls"); Sleep(5000); system("color 1F"); Sleep(5000);
    printf("\n\n\n\tRAMONA: Desculpa, Pilgrim."); Sleep(5000);
    printf(" Eu n�o posso ficar aqui."); Sleep(5000);
    printf(" A gente se v�."); Sleep(5000); system("cls"); Sleep(5000); system("color 0B"); Sleep(5000);
    printf("\n\n\n\tRamona saiu correndo desesperadamente, deixando Scott confuso."); Sleep(5000);
    printf("\n\tEle n�o sabia o que pensar. Nem o que esperar."); Sleep(5000);
    printf("\n\tEnt�o, algu�m se aproximou de Scott.");  Sleep(5000);
    system("cls"); Sleep(5000);
    printf("\n\n\n\tMATTHEW PATEL [Se aproximando de Scott] : Hey, seu nerd!"); Sleep(5000);
    printf(" Fica longe da Ramona."); Sleep(5000);
    printf("\n\n\tSCOTT: Oi?"); Sleep(5000);
    printf(" Quem � Ramona?"); Sleep(5000);
    printf(" � comigo?"); Sleep(5000);
    printf("\n\n\t[Matthew continua se aproximando de Scott de maneira hostil]"); Sleep(5000);
    printf("\n\n\tAinda sem entender o que estava havendo, Scott acaba entrando em uma briga com Matthew, para se defender.");

    //Batalha 01
    if(morte == 1)
    {
    Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 1 - Matthew Patel"); Sleep(5000);
    batalha_namo1(); Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tScott venceu a briga contra Matthew, mas precisava saber o que estava acontecendo."); Sleep(5000);
    printf("\n\tEle saiu da festa mais cedo."); Sleep(5000);
    printf(" Estava decidido a encontrar Ramona mais uma vez."); Sleep(5000); system ("start JustMyType.mp3");
    printf("\n\tEla poderia esclarecer as coisas para Scott."); Sleep(5000);
    printf("\n\tAlgumas horas mais tarde, Scott estava come�ando a ficar exausto."); Sleep(5000);
    printf("\n\tScott tinha decidido desistir de sua busca pela garota de cabelos azuis."); Sleep(5000);
    printf("\n\tEle entrou no primeiro �nibus para sua casa. Mas, n�o esperava por."); Sleep(5000);
    printf(" ."); Sleep(5000);
    printf(" ."); Sleep(5000); system("cls"); Sleep(5000); system("color 1F"); Sleep(5000);
    printf("\n\n\n\tRAMONA [Gritando do fundo do �nibus]: Hey!"); Sleep(5000);
    printf(" Scott!"); Sleep(5000);
    printf(" Aqui!"); Sleep(5000);
    printf("\n\n\t[Scott vai at� o fundo do �nibus e se senta ao lado de Ramona]"); Sleep(5000);
    printf("\n\n\tSCOTT: O-oi. Noite confusa..."); Sleep(5000);
    printf(" Quem era aquele Matthew? Ele disse pra eu ficar longe de voc�..."); Sleep(5000);
    printf("\n\n\tRAMONA: Ah... Era um ex-namorado meu."); Sleep(5000);
    printf(" Sinto muito por isso, Scott."); (5000);
    printf("\n\n\t[Scott segura a m�o de Ramona]"); Sleep(5000);
    printf("\n\n\tRAMONA: N�s n�o podemos ficar juntos, Scott--"); Sleep(5000);
    printf("\n\n\tSCOTT: Mas qual � o problema?"); Sleep(5000);
    printf(" Eu dei uma surra no Matthew..."); Sleep(5000);
    printf("\n\n\tRAMOONA: � que todos os meus outros ex-namorados vir�o atr�s de voc�..."); Sleep(5000);
    printf("\n\n\tSCOTT: Beleza."); Sleep(5000);
    printf(" Ent�o eu vou acabar com todos os seus ex-namorados babacas."); Sleep(5000);
    printf(" A� a gente pode ficar juntos."); Sleep(5000); system("cls"); Sleep(5000); system("color 0B"); Sleep(5000);
    printf("\n\n\n\tE assim, Scott Pilgrim come�ou sua batalha contra os ex-namorados de Ramona Flowers...");
    } else volta_menu = 0;

    //Batalha 02
    if(morte == 1)
    {
    Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 2 - Lucas Lee"); Sleep(5000);
    batalha_namo2(); Sleep(5000);
    } else volta_menu = 0;

    //Batalha 03
    if(morte == 1)
    {
    Sleep(5000); system("cls"); Sleep(5000); system("start MillionReasons.mp3");
    printf("\n\n\n\tNAMORADO 3 - Todd Ingram"); Sleep(5000);
    batalha_namo3(); Sleep(5000);
    } else volta_menu = 0;

    //Batalha 04
    if(morte == 1)
    {
    Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 4 - Roxy Ritcher"); Sleep(5000);
    batalha_namo4(); Sleep(5000);
    } else volta_menu = 0;

    //Batalha 05
    if(morte == 1)
    {
    Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 5 - Kyle Katayanagi"); Sleep(5000);
    batalha_namo5(); Sleep(5000);
    } else volta_menu = 0;

    //Batalha 06
    if(morte == 1)
    {
    system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 6 - Ken Katayanagi"); Sleep(5000);
    batalha_namo6(); Sleep(5000);
    } else volta_menu = 0;

    //Batalha 07  - Chef�o final
    if(morte ==1)
    {
    Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 7 - Gideon Graves"); Sleep(5000);
    batalha_namo7(); Sleep(5000);
    system("cls"); final_credits();
    volta_menu = 0;
    } else volta_menu = 0;
    } while (volta_menu == 1);
    final_credits();
    break;
    }

    case '6':
    {
    do{
    //Batalha 01
    system("start BoisLie.mp3"); system("color 1F"); Sleep(5000); system("cls");
    printf("\n\n\n\tNAMORADO 1 - Matthew Patel"); Sleep(5000);
    batalha_namo1(); Sleep(5000); system("cls"); Sleep(5000);

    //Batalha 02
    if(morte==1)
    {
    Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 2 - Lucas Lee"); Sleep(5000);
    batalha_namo2(); Sleep(5000);
    } else volta_menu = 0;

    //Batalha 03
    if(morte==1)
    {
    Sleep(5000);  system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 3 - Todd Ingram"); Sleep(5000);
    batalha_namo3(); Sleep(5000);
    } else volta_menu = 0;

    //Batalha 04
    if(morte==1)
    {
    Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 4 - Roxy Ritcher");Sleep(5000);
    batalha_namo4(); Sleep(5000);
    } else volta_menu = 0;

    //Batalha 05
    if(morte==1)
    {
    Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 5 - Kyle Katayanagi"); Sleep(5000);
    batalha_namo5(); Sleep(5000);
    } else volta_menu = 0;

    //Batalha 06
    if(morte==1)
    {
    Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 6 - Ken Katayanagi"); Sleep(5000);
    batalha_namo6(); Sleep(5000);
    } else volta_menu = 0;

    //Batalha 07  - Chef�o final
    if(morte==1)
    {
    Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tNAMORADO 7 - Gideon Graves"); Sleep(5000);
    batalha_namo7(); Sleep(5000);
    final_credits();
    volta_menu = 0;
    } else volta_menu = 0;
    } while (volta_menu == 1);
    final_credits();
    break;
    }

    case '1':
    {
    do{
    tela_azul();
    volta_menu = 0;} while (volta_menu == 1);
    break;
    }

    case '2':
    {
    do{
    system("start AThousandMiles.mp3");
    informacoes(); volta_menu = 0;} while (volta_menu == 1);
    break;
    }

    case '3':
    {
    do{
    system("start TheBalladOfMonaLisa.mp3");
    personagens(); volta_menu ='0';} while (volta_menu == 1);
    break;
    }

    case '4':
    {
    do{
    system("start SomebodyToYou.mp3");
    trilha_sonora();
    Sleep(10000); volta_menu = 0;} while (volta_menu == 1);
    break;
    }

    case '5':
    {

    system("cls"); system ("color 2F"); Sleep(5000);
    printf("\n\n\n\t\t[Br]eaking"); Sleep(3000);
    printf("\n\t\t[Ba]d"); Sleep(5000); system("cls"); Sleep(5000);
    printf("\n\n\n\tVoc� � Walter White."); Sleep(5000);
    printf("\n\tAgora voc� tem c�ncer."); Sleep(5000);
    printf("\n\n\tO que voc� pretende fazer?"); Sleep(5000);
    printf("\n\n\t<1>.\tCozinhar metanfetamina"); Sleep(5000);
    printf("\n\n\t<2>.\tNada"); Sleep(5000);

    int walter_white;
    scanf("\n\n%c", &walter_white);

    switch(walter_white)
    {

    case '1':
    {
    Sleep(5000); system("cls");
    printf("\n\n\n\tAgora voc� � o Heisenberg."); Sleep(5000);
    printf("\n\n\tObrigado por jogar.");  Sleep(5000);
    break;
    }
    case '2':
    {
    Sleep(5000); system("cls");
    printf("\n\n\n\tVoc� morreu."); Sleep(5000);
    printf("\n\n\tObrigado por jogar."); Sleep(5000);
    volta_menu = 0;
    break;
    }
    }
    }
    Sleep(5000);
    }
    }
    while (game_start!=978);
}
