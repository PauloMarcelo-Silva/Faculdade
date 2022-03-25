#include <iostream>
#include <cstring>
//importe do random
#include <cstdlib>
//------------------
#include <stdlib.h>
#include <string>
#include <ctime>

//funções
void start();
void game(char palavra[10][25],char nome[1][10]);

int main()
{
    start();
}

void start()
{
    //arrays com as palavras do jogo
    char pais[10][25] = {"alemanha", "inglaterra", "cazaquistao", "indonesia", "armenia", "lituania", "paraguai", "macedonia", "letonia", "zimbabwe"};
    char fruta[10][25] = {"laranja", "pinha", "goiaba", "ameixa", "morango", "pitaia", "pitomba", "abacaxi", "ackee", "ciriguela"};
    char animal[10][25] = {"lemori", "leopardo", "borboleta", "cachorro", "peixe", "macaco", "ornitorrinco", "gazela", "pavao", "suricato"};
    char cor[10][25] = {"azul", "vermelho", "verde", "amarelo", "rosa", "roxo", "preto", "branco", "laranja", "cinza"};
    
    char nome1[1][10]= {"PAIS"},nome2[1][10]= {"FRUTA"},nome3[1][10]= {"ANIMAL"},nome4[1][10]= {"COR"}; 

    std::cout << ("\n\n===BEM VINDO AO JOGO DA FORCA!!!===\n\n");
    std::cout << ("\n\n===SEU TEMA SERA SORTEADO!!===\n\n");

    //variavel para escolher aleatoriamente o tema
    srand((unsigned int)time(NULL));
    int escolha = rand() % 4 + 1;
    
    switch (escolha)
    {
    case 1:
        game(pais,nome1);
        break;
    case 2:
        game(fruta,nome2);
        break;
    case 3:
        game(animal,nome3);
        break;
    case 4:
        game(cor,nome4);
        break;
    }
}

void game(char lista_palavra[10][25],char nome[1][10])  
{      
    std::cout << "\n\n===O SEU TEMA É SOBRE " << nome[0] << "===\n\n";
    
    //contadores
    int vida = 6, acertos = 0, erros, i, tamanho_palavra;
    char letra[26], lacuna[25] = "_";

    //escolher a palavra aleatoria
    srand((unsigned char)time(NULL));
    int palavra_aleatoria = rand() % 10;
    std::string palavra = lista_palavra[palavra_aleatoria];
    tamanho_palavra = strlen(lista_palavra[palavra_aleatoria]);

    //for para determinar o tamanho das lacunas
    for (i = 0; i < tamanho_palavra; i++)
    {
        lacuna[i] = '-';
    }

    while (vida > 0)
    {
        erros = 0;
        std::cout << "\n"
                  << lacuna << "\n";
        std::cout << ("\n digite uma letra: ");
        std::cin >> (letra);

        for (i = 0; i < tamanho_palavra; i++)
        {
            if (letra[0] == palavra[i])
            {
                lacuna[i] = palavra[i];
                acertos++;
                erros++;
            }
        }
        if (erros == 0)
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
                std::cout << "\n A PALAVRA ERA: " << palavra;
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
            if (acertos == tamanho_palavra)
            {
                std::cout << "\n\n   VOCE GANHOU!!!\n";
                std::cout << "       ___\n      /O O\\\n      \\___/\n        |\n       /|\\\n      / | \\\n        |\n       / \\\n      /   \\\n";
                std::cout << "\n     " << palavra << "  ";
                break;
            }

            else
            {
                std::cout << ("\n VOCE ACERTOU UMA LETRA!");
            }
        }
    }
}