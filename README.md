# Scott Pilgrim [C]ontra o mundo
**esse é um jogo programado inteiramente em linguagem C. escrevi esse jogo como um trabalho na disciplina de Programação em Computadores 1, no CEFET/MG<br/>**
<br/>isso aqui deu bastante trabalho pra ficar pronto, mas meu professor tinha nos proposto um outro trabalho que também era um jogo, então quando chegamos no meio do semestre, eu já imaginava que nosso próximo trabalho seria algo próximo a um RPG de batalha em turnos, e fiquei bem empolgado.<br/>
<br/>inicialmente, nosso professor havia dito que faríamos um RPG em *turn-based strategy*, e que queria que fizéssemos pelo menos 5 batalhas de turno contra a nossa IA. foi aí que surgiu a ideia de fazer um TBS baseado nos quadrinhos do Scott Pilgrim.<br/>

## Como rodar o jogo?
caso você não entenda como isso tudo aqui nesse repositório funciona, não se preocupe.<br/>
<br/>pra iniciar o jogo, basta baixar o arquivo *.zip* desse repositório, extrair a pasta **(lembre-se de não mover nenhum dos arquivos pra fora dela, caso contrário, as faixas de áudio podem não ser reproduzidas de maneira adequada)**, localizar o arquivo *"Scott pilgrim [C]ontra o mundo.exe"* dentro da pasta e executá-lo.

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
caso você não tenha tempo livre pra jogar meu modo história, ~~eu estou profundamente chateado, porque eu dediquei muito do meu tempo nesse jogo~~, está tudo bem.<br/>
<br/>no menu principal, tem uma opção pra você jogar o *game* sem as *cutscenes* textuais do modo história.<br/>
<br/>pra que isso foi possível, eu escrevi sete bibliotecas.<br/>
<br/>são as bibliotecas "batalha_namoX".<br/>
<br/>cada uma delas, guarda a luta contra um dos vilões do jogo.<br/>
<br/>escrevê-las deixou o código principal do jogo mais limpo, e permitiu que eu eliminasse alguns problemas que aconteciam quando o jogo era executado com a memória cheia, como a interpretação incorreta da *struct* que armazena o nível de *HP* dos personagens.<br/>

## A mecânica de jogo
não tem muito mistério. basicamente, ao escolher bater, a gente dá o dano do ataque.<br/>
<br/>caso a máquina escolha bater, ela também nos dá o dano do ataque.<br/>
<br/>existem três tipos de ataque e três tipos de defesa.<br/>
<br/>cada ataque possui uma defesa que o anula<br/>
<br/>ATAQUE 1 - DEFESA 1<br/>
<br/>ATAQUE 2 - DEFESA 2<br/>
<br/>ATAQUE 3 - DEFESA 3<br/>
<br/>durante a rodada, os danos de ataque são operados e os danos são distribuídos.<br/>
<br/>após isso a máquina verifica se há alguma defesa. caso a defesa "case" com seu ataque, quem defendeu recebe o dano de volta em forma de cura<br/>
<br/>dessa maneira, implemantamos nossa mecânica de ataque bloqueado.<br/>

## A mecânica de *next battle*
pra fazer com que o jogo seguisse, a cada rodada era verificado se o nível de HP de ambos os oponentes era maior que 0.<br/>
<br/>caso o jogador tenha HP negativo, exibimos nossa tela de *game over* e os créditos finais.<br/>
<br/>caso a máquina fique com HP negativo, exibimos o nívl final de HP de ambos os oponentes e o jogo tem sequência.<br/>
<br/>ao terminar a batalha em *game over*, e exibirmos os créditos finais, precisávamos nos certificar de que o jogo não daria sequência, seja na história ou na próxima batalha de turnos.<br/>
<br/>pra isso, usei *morte* temos dentro de cada biblioteca de batalha uma variável do tipo inteiro chamada morte.<br/>
<br/>ao fim  de cada partida, caso o jogador vença, ela é atualizada com um novo valor.<br/>
<br/>pra dar sequência no jogo, testamos em um *if* se *morte* tem o valor que sinaliza vitória.<br/>
<br/>caso sim, chamamos o "resto" do *game*. caso não, encerramos de imediato.<br/>

## A mecânica de *item drop* e *healing*
Scott tem um anjo da guarda no nosso jogo.<br/>
<br/>eu decidi implementar porque precisava criar uma instrução pra quando o jogador e a máquina "morrerem" na mesma rodada.<br/>
<br/>como dois ataques na mesma rodada distribuem seus danos naturlmente, é possível que os dois oponentes fiquem com o nível de HP negativo.<br/>
<br/>eu fiquei meio indeciso em relação ao que fazer nesse caso: se os dois morreram, continua o *game* ou *breaka* e volta pro menu?<br/>
<br/>era fácil solucionar isso criando uma mecânica de *drop* de item (e tava valendo um pontinho extra no trabalho, né).<br/>
<br/>quando os dois oponentes "morrem", o vilão *dropa* um item. esse item, é uma poção de cura.<br/>
<br/>*voilà!* mecânica de *item drop* e de *healing* na mesma tacada.<br/><br/><br/>
<br/>P.S.: talvez, ao jogar isso nem seja evidente, mas no *back-end* isso foi uma puta trapaça.
<br/>nessa situação, o vilão sempre dropa o item, que sempre é uma poção de cura.
<br/>o jogador sempre tem que apertar um botão pra "consumir a poção", mas na verdade, eu nem sequer coleto dado da ingestão da poção.
<br/>eu só botei pra ler algo do teclado e seguir depois que o usuário tiver decidido consumir.
<br/>e meio que é uma ditadura. o jogo diz "beba" e isso é tudo o que pode ser feito, tal qual em *Alice no país das maravilhas*
<br/>chame isso de um *easter egg* de Lewis Carrol ~~ou um estudante universitário fazendo de tudo em seu alcance pra obter a melhor nota possível~~

## Minhas considerações finais
é isso que temos pro joguinho.<br/>
<br/>eu tentei comentar em todas as funções e bibliotecas que eu escrevi. nem parece eu codando.<br/>
<br/>se você vir algum *bug*, quiser apoiar meu trabalho, ou quiser tirar alguma dúvida sobre algo que eu não consegui explicitar, sinta-se à vontade pra entrar em contato comigo.<br/>
