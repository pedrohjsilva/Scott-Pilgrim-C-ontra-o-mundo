#include <stdio.h>
#define alert printf
#define prompt scanf
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int breaking_bad ( )
    {
    system("cls");
    system ("color 2F");
    Sleep(50);
    printf("\n\n\n\t\t[Br]eaking");
    printf("\n\t\t[Ba]d");
    Sleep(50);
    system("cls");
    Sleep(50);
    printf("\n\n\n\tVocê é Walter White.");
    Sleep(50);
    printf("\n\tAgora você tem câncer.");
    Sleep(50);
    printf("\n\n\tO que você pretende fazer?");
    Sleep(50);
    printf("\n\n\t<1>.\tCozinhar metanfetamina");
    printf("\n\n\t<2>.\tNada\n\n\t");
    Sleep(50);
    int walter_white;
    scanf("\n\n%c", &walter_white);

    switch(walter_white)
    {
    case '1':
    {
    Sleep(50);
    system("cls");
    printf("\n\n\n\tAgora você é o Heisenberg.");
    Sleep(5000);
    printf("\n\n\tObrigado por jogar.");
    Sleep(5000);
    break;
    }

    case '2':
    {
    Sleep(50);
    system("cls");
    printf("\n\n\n\tVocê morreu.");
    Sleep(5000);
    printf("\n\n\tObrigado por jogar.");
    Sleep(5000);
    break;
    }
    }}

