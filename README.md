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
