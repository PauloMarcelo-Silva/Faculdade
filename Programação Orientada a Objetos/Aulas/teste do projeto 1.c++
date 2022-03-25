#include <iostream>
#include <cstring>
//importe do random
#include <cstdlib>
//------------------
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <ctime>

//funções
void escolha();
void jogo1();
void jogo2();
void jogo3();
void jogo4();

int main()
{
    //escolha da pessoa
    escolha();
}
void escolha()
{
    //variaveis  e operação para o random funcionar
    srand((unsigned int)time(NULL));
    int escolha = rand() % 3 + 1;
    //inicio do jogo
    std::cout << ("\n\n===BEM VINDO AO JOGO DA FORCA!!!===\n\n");
    std::cout << ("\n\n===SEU TEMA SERA SORTEADO!!===\n\n");
    
    switch (escolha)
    {
    case 1:
        jogo1();
        break;
    case 2:
        jogo2();
        break;
    case 3:
        jogo3();
        break;
    case 4:
        jogo4();
        break;
    }
}
void jogo1()
{
    
    std::string tema = nome;

    std::cout << "\n\n===O SEU TEMA É SOBRE" << tema << "===\n\n";
    
    srand((unsigned char)time(NULL));
    
    int x = rand() % 5 + 1;

    int vida = 6, p = 0, contador, i, tm;

    char letra[25], lacuna[25] = "_";

    //char palavra[10][25] = {"azul", "vermelho", "verde", "amarelo", "rosa", "roxo", "preto", "branco", "laranja", "cinza"};

    std::string tr = palavra[x];

    tm = strlen(palavra[x]);

    for (i = 0; i < tm; i++)
    {
        lacuna[i] = '-';
    }

    while (vida > 0)
    {
        contador = 0;
        std::cout << "\n"
                  << lacuna << "\n";
        std::cout << ("\n digite uma letra: ");
        std::cin >> (letra);

        for (i = 0; i < tm; i++)
        {
            if (letra[0] == tr[i])
            {
                lacuna[i] = tr[i];
                p++;
                contador++;
            }
        }
        if (contador == 0)
        {
            vida = vida - 1;

            switch (vida)
            {
            case 5:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|\n|\n|\n|\n|\n|\n|\n|";
                break;

            case 4:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|        |\n|        |\n|        |\n|\n|\n|\n|";
                break;
            case 3:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\n|      / |\n|        |\n|\n|\n|\n|";
                break;
            case 2:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|\n|\n|\n|";
                break;
            case 1:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       /\n|      /\n|\n|";
                break;
            case 0:
                std::cout << " _________\n|        |\n|       _|_\n|      /x x\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       / \\\n|      /   \\\n|\n|";
                std::cout << "\n\n VOCE FOI ENFORCADO!";
                std::cout << "\n A PALAVRA ERA:" << tr;
                break;
            }

            if (vida > 0)
            {
                std::cout << "\n voce errou! lhe restam: " << vida << " tentativas"
                          << "\n";
            }
        }

        else
        {
            if (p == tm)
            {
                std::cout << "\n\n   VOCE GANHOU!!!\n";
                std::cout << "       ___\n      /O O\\\n      \\___/\n        |\n       /|\\\n      / | \\\n        |\n       / \\\n      /   \\\n";
                std::cout << "\n     " << tr << "  ";
                break;
            }

            else
            {
                std::cout << ("\n VOCE ACERTOU UMA LETRA!");
            }
        }
    }
}
void jogo2()
{
    std::cout << ("\n\n===O SEU TEMA É SOBRE OS ANIMAIS===\n\n");
    srand((unsigned char)time(NULL));
    int x = rand() % 5 + 1;

    int vida = 6, p = 0, contador, i, tm;

    char letra[25], lacuna[25] = "_";

    char palavra[10][25] = {"lemori", "leopardo", "borboleta", "cachorro", "peixe", "macaco", "ornitorrinco", "gazela", "pavao", "suricato"};

    std::string tr = palavra[x];

    tm = strlen(palavra[x]);

    for (i = 0; i < tm; i++)
    {
        lacuna[i] = '-';
    }

    while (vida > 0)
    {
        contador = 0;
        std::cout << "\n"
                  << lacuna << "\n";
        std::cout << ("\n digite uma letra: ");
        std::cin >> (letra);

        for (i = 0; i < tm; i++)
        {
            if (letra[0] == tr[i])
            {
                lacuna[i] = tr[i];
                p++;
                contador++;
            }
        }
        if (contador == 0)
        {
            vida = vida - 1;

            switch (vida)
            {
            case 5:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|\n|\n|\n|\n|\n|\n|\n|";
                break;

            case 4:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|        |\n|        |\n|        |\n|\n|\n|\n|";
                break;
            case 3:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\n|      / |\n|        |\n|\n|\n|\n|";
                break;
            case 2:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|\n|\n|\n|";
                break;
            case 1:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       /\n|      /\n|\n|";
                break;
            case 0:
                std::cout << " _________\n|        |\n|       _|_\n|      /x x\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       / \\\n|      /   \\\n|\n|";
                std::cout << "\n\n VOCE FOI ENFORCADO!";
                std::cout << "\n A PALAVRA ERA:" << tr;
                break;
            }

            if (vida > 0)
            {
                std::cout << "\n voce errou! lhe restam: " << vida << " tentativas"
                          << "\n";
            }
        }

        else
        {
            if (p == tm)
            {
                std::cout << "\n\n   VOCE GANHOU!!!\n";
                std::cout << "       ___\n      /O O\\\n      \\___/\n        |\n       /|\\\n      / | \\\n        |\n       / \\\n      /   \\\n";
                std::cout << "\n     " << tr << "  ";
                break;
            }

            else
            {
                std::cout << ("\n VOCE ACERTOU UMA LETRA!");
            }
        }
    }
}
void jogo3()
{
    std::cout << ("\n\n===O SEU TEMA É SOBRE AS FRUTAS===\n\n");
    srand((unsigned char)time(NULL));
    int x = rand() % 5 + 1;

    int vida = 6, p = 0, contador, i, tm;

    char letra[25], lacuna[25] = "_";

    char palavra[10][25] = {"laranja", "pinha", "goiaba", "ameixa", "morango", "pitaia", "pitomba", "abacaxi", "ackee", "ciriguela"};

    std::string tr = palavra[x];

    tm = strlen(palavra[x]);

    for (i = 0; i < tm; i++)
    {
        lacuna[i] = '-';
    }

    while (vida > 0)
    {
        contador = 0;
        std::cout << "\n"
                  << lacuna << "\n";
        std::cout << ("\n digite uma letra: ");
        std::cin >> (letra);

        for (i = 0; i < tm; i++)
        {
            if (letra[0] == tr[i])
            {
                lacuna[i] = tr[i];
                p++;
                contador++;
            }
        }
        if (contador == 0)
        {
            vida = vida - 1;

            switch (vida)
            {
            case 5:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|\n|\n|\n|\n|\n|\n|\n|";
                break;

            case 4:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|        |\n|        |\n|        |\n|\n|\n|\n|";
                break;
            case 3:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\n|      / |\n|        |\n|\n|\n|\n|";
                break;
            case 2:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|\n|\n|\n|";
                break;
            case 1:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       /\n|      /\n|\n|";
                break;
            case 0:
                std::cout << " _________\n|        |\n|       _|_\n|      /x x\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       / \\\n|      /   \\\n|\n|";
                std::cout << "\n\n VOCE FOI ENFORCADO!";
                std::cout << "\n A PALAVRA ERA:" << tr;
                break;
            }

            if (vida > 0)
            {
                std::cout << "\n voce errou! lhe restam: " << vida << " tentativas"
                          << "\n";
            }
        }

        else
        {
            if (p == tm)
            {
                std::cout << "\n\n   VOCE GANHOU!!!\n";
                std::cout << "       ___\n      /O O\\\n      \\___/\n        |\n       /|\\\n      / | \\\n        |\n       / \\\n      /   \\\n";
                std::cout << "\n     " << tr << "  ";
                break;
            }

            else
            {
                std::cout << ("\n VOCE ACERTOU UMA LETRA!");
            }
        }
    }
}
void jogo4()
{
    std::cout << ("\n\n===O SEU TEMA É SOBRE OS PAISES===\n\n");
    srand((unsigned char)time(NULL));
    int x = rand() % 5 + 1;

    int vida = 6, p = 0, contador, i, tm;

    char letra[25], lacuna[25] = "_";

    char palavra[10][25] = {"alemanha", "inglaterra", "cazaquistao", "indonesia", "armenia", "lituania", "paraguai", "macedonia", "letonia", "zimbabwe"};

    std::string tr = palavra[x];

    tm = strlen(palavra[x]);

    for (i = 0; i < tm; i++)
    {
        lacuna[i] = '-';
    }

    while (vida > 0)
    {
        contador = 0;
        std::cout << "\n"
                  << lacuna << "\n";
        std::cout << ("\n digite uma letra: ");
        std::cin >> (letra);

        for (i = 0; i < tm; i++)
        {
            if (letra[0] == tr[i])
            {
                lacuna[i] = tr[i];
                p++;
                contador++;
            }
        }
        if (contador == 0)
        {
            vida = vida - 1;

            switch (vida)
            {
            case 5:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|\n|\n|\n|\n|\n|\n|\n|";
                break;

            case 4:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|        |\n|        |\n|        |\n|\n|\n|\n|";
                break;
            case 3:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\n|      / |\n|        |\n|\n|\n|\n|";
                break;
            case 2:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|\n|\n|\n|";
                break;
            case 1:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       /\n|      /\n|\n|";
                break;
            case 0:
                std::cout << " _________\n|        |\n|       _|_\n|      /x x\\\n|      \\___/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       / \\\n|      /   \\\n|\n|";
                std::cout << "\n\n VOCE FOI ENFORCADO!";
                std::cout << "\n A PALAVRA ERA:" << tr;
                break;
            }

            if (vida > 0)
            {
                std::cout << "\n voce errou! lhe restam: " << vida << " tentativas"
                          << "\n";
            }
        }

        else
        {
            if (p == tm)
            {
                std::cout << "\n\n   VOCE GANHOU!!!\n";
                std::cout << "       ___\n      /O O\\\n      \\___/\n        |\n       /|\\\n      / | \\\n        |\n       / \\\n      /   \\\n";
                std::cout << "\n     " << tr << "  ";
                break;
            }

            else
            {
                std::cout << ("\n VOCE ACERTOU UMA LETRA!");
            }
        }
    }
}