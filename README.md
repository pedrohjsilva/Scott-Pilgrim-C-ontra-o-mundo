# Scott Pilgrim [C]ontra o mundo
**esse é um jogo programado inteiramente em linguagem C. escrevi esse jogo como um trabalho na disciplina de Programação em Computadores 1, no CEFET/MG<br/>**
<br/>isso aqui deu bastante trabalho pra ficar pronto, mas meu professor tinha nos proposto um outro trabalho que também era um jogo, então quando chegamos no meio do semestre, eu já imaginava que nosso próximo trabalho seria algo próximo a um RPG de batalha em turnos, e fiquei bem empolgado.<br/>
<br/>inicialmente, nosso professor havia dito que faríamos um RPG em *turn-based strategy*, e que queria que fizéssemos pelo menos 5 batalhas de turno contra a nossa IA. foi aí que surgiu a ideia de fazer um TBS baseado nos quadrinhos do Scott Pilgrim.<br/>

## A tela de carregamento
a tela de carregamento desse jogo simula uma *loading screen* genérica dos jogos de *NES*. o programa foi totalmente escrito em linguagem C e, dessa forma, é carregado automaticamente assim que o iniciamos.<br/>
<br/>para solucionar esse problema, e garantir a execução da tão nostálgica tela de carregamento, escrevi a biblioteca "loadingscreen.h".<br/>
utilizando apenas comandos de entrada e saída padrão e uma biblioteca nativa para o SO Windows, consegui simular a tela de carregamento.<br/>
<br/>como a intenção era fazer uma tela de carregamento mais longa pra aumentar a o tempo de experiência com o jogo, tentei ajustá-la para que o tempo casasse com a primeira música de nossa trilha sonora.<br/>

## O menu principal do jogo
ao passarmos pela nossa tela de carregamento, temos o nosso menu principal e, nele, podemos escolher dentre 6 opções:<br/> 
- iniciar o modo história
- acessar as configurações do jogo
- ver informações sobre o jogo
- ver informações sobre os personagens
- ver a trilha sonora
- jogar a DLC disponível
- jogar o modo arcade

## O modo história
o *story mode* desse jogo é a chave principal para o desenvolvimento do projeto. me baseei nos quadrinhos do Scott Pilgrim e escrevi uma versão *nerfada* da história pra dar contexto pras batalhas em turno que ocorrem dentro desse jogo.<br/>
<br/>como o jogo foi escrito apenas em linguagem C, a interação com imagens e vídeos é bem limitada, uma vez que depende da instalação de bibliotecas externas para o seu correto funcionamento. assim, tornar a experiência textual um pouco mais agradável era fundamental para o desenvolvimento do programa.<br/>
<br/>inicialmente, pensei em carregar toda a parte "textual" do jogo em arquivos no formato .txt. isso manteria o código do jogo limpo e permitiria a tradução do *game* para outros idiomas, entretanto, faria comm que a exibição do texto na tela ocorresse sempre de maneira instantânea.<br/>
<br/>ao escrever todo o layout de texto do jogo com comandos de saída, pude "controlar" o *timing* da exibição do texto durante a execução do jogo. assim, consigo trazer a sensação de que o jogo "acontece" a medida que você vai lendo.<br/>

## A tela ~~azul da morte~~ de configurações do jogo
dentro do menu principal do jogo, temos uma opção de acessar as configurações do jogo<br/>
<br/>ao acessá-la, é exibida a "tela azul da morte" do Windows.<br/>
<br/>caso você esteja rodando esse programa em uma máquina com Windows, não se preocupe seu computador (provavelmente) não morreu.<br/>
<br/>como não há o que configurar no jogo no momento, deixei um *easter egg* pra quem estiver acessando essa versão beta.<br/>
<br/>essa tela usa funções da biblioteca "tela_azul.h" que eu mesmo escrevi.

## As informações sobre o jogo
caso esteja lendo esse *read me*, essa opção do menu principal é só um monte de *bla bla bla.*<br/>
<br/>caso acesse a tela, vai ver um resumo sobre o que é esse joguinho e um contato pra falar comigo.<br/>
<br/>escrevi a biblioteca "informacoes.h" pra salvar tudo.<br/>

## As informações sobre os personagens
o jogo só tem um modo história até mais ou menos entrar na *porradaria* das batalhas de turno.<br/>
<br/>caso você tenha caído de pára-quedas aqui, e não faça ideia de quem diabos é Scott Pilgrim e o porque de ele ter caído na mão com sete caras que ele sequer conhecia, dar uma olhadinha nessa tela pode expandir seus horizontes.<br/>
<br/>nela, você encontra um resuminho da lore de cada personagem que aparece no jogo.<br/>
<br/>salvei tudinho na biblioteca "personagens.h".<br/>

## A trilha sonora do jogo
eu usei umas músicas legais pra fazer o jogo ser um pouquinho mais divertido.<br/>
<br/>tecnicamente, eu não tenho autorização legal pra usar nenhuma delas, então é bem possível que um dia essse Git aqui caia.<br/>
<br/>todas as músicas que o jogo roda são cópias piratas, e estão dentro da pasta do *game* no formato .mp3.<br/>
<br/>a linguagem C limita bastante a forma que o programa pode reproduzir um arquivo externo sem utilizar nenhuma biblioteca instalável.<br/>
sempre que uma música começar, ele "chama" de novo seu player de música.<br/>
<br/>recomendo usar o *VLC Media Player*, da *Videolan*. é em código aberto, o que é muito show. e roda qualquer coisa. se sua máquina tiver um drive de *CD*/*DVD*, ele roda até disco de *makita*.<br/>
<br/>escrevi a biblioteca "trilha_sonora.h" pra mostrar quais músicas o jogo toca.<br/>

## DLC -[Br]eaking [Ba]d
acabei de sacar que flertei muito com a violação de *copyright* escrevendo essse jogo.<br/>
<br/>eu não me orgulho disso.<br/>
<br/>mas a minha *DLC* é muito boa.<br/>
<br/>não tenho muito o que falar. não crie muitas expectativas. é bobo.<br/>
<br/>mas se tiver assistido *Breaking Bad*, dá uma olhada.<br/>
<br/>escrevi a biblioteca "breaking_bad.h" pra fazer a *DLC*. na verdade, nem é uma *DLC*, já que já tá disponível *in-game* (me agradeça por não cobrar por isso. eu não sou a *EA Games*.<br/>

## Modo ~~porradaria desenfreada~~ *arcade*
