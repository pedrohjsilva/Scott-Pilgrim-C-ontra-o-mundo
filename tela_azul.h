#include <stdio.h>
#include <locale.h>


int tela_azul()
    {
    setlocale (LC_ALL,"");
    setlocale (LC_CTYPE,"pt_BR.UTF-8" );
    system("color 1F");
    system("cls");
    printf("\n\n\n\tFoi detectado um problema e o Windows será desligado para evitar danos ao computador\n");
    Sleep(2000);
    printf("\tSe esta for a primeira vez que você vê esta tela de erro de parada, reinicie o computador.\n\n");
    Sleep(2000);
    printf("\tSe a tela foi exibida novamente, siga estas etapas:\n");
    Sleep(2000);
    printf("\tCertifique-se de que existe espaço suficiente em disco. Se um driver for identificado na mensagem de parada,\n");
    Sleep(2000);
    printf("\tdesative o driver ou solicite atualizações do driver ao fabricante, experimente trocar os adaptadores de vídeo\n");
    Sleep(2000);
    printf("\tConsulte o fornecedor do hardware para obter atualizações de BIOS. Desative opções de memória BIOS, como cache ou sobreamento.\n");
    Sleep(2000);
    printf("\tSe precisar usar o modo de segurança para remover ou desativar componentes, reinicie o computador, pressione F8 para selecionar\n");
    Sleep(2000);
    printf("\tas opções avançadas de inicialização e selecione o modo de Segurança.\n\n");
    Sleep(2000);
    printf("\tInformações técnicas:\n");
    Sleep(2000);
    printf("\t*** STOP: 0x0000008E (0XC0000005, 0XBFABFF1B, 0XB8F61B14, 0X00000000)\n");
    Sleep(2000);
    printf("\t*** nv4_disp.dll – Address BFABBF1B base at BF9D4000, Datestamp 4410c8d4\n\n");
    Sleep(2000);
    printf("\tIniciando despejo de memória física.\n");
    Sleep(3000);
    printf("\tDespejo de memória física concluída.\n\n");
    Sleep(2000);
    printf("\tEntre em contato com o administrador do sistema ou grupo de suporte técnico para obter a informação.");
    Sleep(35000);
}
