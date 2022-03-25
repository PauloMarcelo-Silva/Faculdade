#include <iostream>
#include <cstring>
//importe do random
#include <cstdlib>
//------------------
#include <stdlib.h>
#include <string>
#include <ctime>
#include <ctype.h>

//funções
void introduction();
void difficulty();
void easy();
void normal();
void hard();
void game(char palavra[10][25], char nome[1][10]);
void hard_game(char palavra[10][25]);

int main()
{
    introduction();
}

void introduction(){
    std::cout << ("\n\n===BEM VINDO AO JOGO DA FORCA!!!===\n\n");
    std::cout << ("\n\n===login[1]===") << ("\n\n===cadastro[2]===\n\n");
    difficulty();
}

void  difficulty(){
    int difficulty;

    std::cout << ("\n\n===Escolha a dificuldade do jogo:===\n\n");

    std::cout << ("\n===easy[1]:===\n");
    std::cout << ("===normal[2]:===\n");
    std::cout << ("===hard[3]:===\n\n");

    //escolha da dificuldade do jogo
    std::cin >> (difficulty);

    switch (difficulty)
    {
    case 1:
        easy();
        break;
    case 2:
        normal();
        break;
    case 3:
        hard();
        break;
    }

}
void easy(){
    std::cout << ("\n\n=== escolha qual tema vc deseja jogar: ===\n\n");
    std::cout << ("\n===animal[1]:===\n");
    std::cout << ("===pais[2]:===\n");
    std::cout << ("===cor[3]:===\n");
    std::cout << ("===fruta[4]:===\n\n");

    char pais[10][25] = {"brasil", "angola", "italia", "mexico", "eua", "canada", "egito", "israel", "russia", "grecia"};
    char fruta[10][25] = {"laranja", "pinha", "goiaba", "ameixa", "morango", "pitaia", "pitomba", "abacaxi", "ackee", "ciriguela"};
    char animal[10][25] = {"lemori", "leopardo", "borboleta", "cachorro", "peixe", "macaco", "ornitorrinco", "gazela", "pavao", "suricato"};
    char cor[10][25] = {"azul", "vermelho", "verde", "amarelo", "rosa", "roxo", "preto", "branco", "laranja", "cinza"};

    char nome1[1][10] = {"PAIS"}, nome2[1][10] = {"FRUTA"}, nome3[1][10] = {"ANIMAL"}, nome4[1][10] = {"COR"};

    int escolha;
    std::cin >> (escolha);


    switch (escolha)
    {
    case 1:
        game(pais, nome1);
        break;
    case 2:
        game(fruta, nome2);
        break;
    case 3:
        game(animal, nome3);
        break;
    case 4:
        game(cor, nome4);
        break;
    }

}
void normal()
{
    //arrays com as palavras do jogo
    char pais[10][25] = {"alemanha", "inglaterra", "cazaquistao", "indonesia", "armenia", "lituania", "paraguai", "macedonia", "letonia", "zimbabwe"};
    char futebol[10][25] = {"barcelona", "liverpool", "juventus", "flamengo", "independente", "Internazionale", "ferencvaros", "anderlecht", "chelsea", "olympiacos"};
    char animal[10][25] = {"cagado", "avestruz", "borboleta", "camaleao", "chimpanze", "Hipopotamo", "ornitorrinco", "gazela", "jaguatirica", "suricato"};
    char profissao[10][25] = {"frentista", "pianista", "taxista", "programador", "streamer", "pedreiro", "vendedor", "professor", "cientista", "influencer-digital"};

    char nome1[1][10] = {"PAIS"}, nome2[1][10] = {"TIME"}, nome3[1][10] = {"ANIMAL"}, nome4[1][10] = {"PROFISSAO"};

    std::cout << ("\n\n===SEU TEMA SERA SORTEADO!!===\n\n");

    //variavel para escolher aleatoriamente o tema
    srand((unsigned int)time(NULL));
    int escolha = rand() % 4 + 1;

    switch (escolha)
    {
    case 1:
        game(pais, nome1);
        break;
    case 2:
        game(futebol, nome2);
        break;
    case 3:
        game(animal, nome3);
        break;
    case 4:
        game(profissao, nome4);
        break;
    }
}
void hard(){
    //arrays com as palavras do jogo
    char biologia[10][25] = {"arteria", "clavicula", "oncologico", "genoma", "polimerase", "nanobiotecnologia", "higienismo", "taxonomia", "protistologia", "limnologia"};
    char historia[10][25] = {"stalingrado", "herotodo", "rankeanismo", "fordismo", "paleolitico", "Internazionale", "ferencvaros", "anderlecht", "chelsea", "olympiacos"};
    char programacao[10][25] = {"cagado", "avestruz", "borboleta", "camaleao", "chimpanze", "Hipopotamo", "ornitorrinco", "gazela", "jaguatirica", "suricato"};
    char ciencia[10][25] = {"frentista", "pianista", "taxista", "programador", "streamer", "pedreiro", "vendedor", "professor", "cientista", "influencer-digital"};
    char diversidade[10][25] = {"frentista", "pianista", "taxista", "programador", "streamer", "pedreiro", "vendedor", "professor", "cientista", "influencer-digital"};


    //variavel para escolher aleatoriamente o tema
    srand((unsigned int)time(NULL));
    int escolha = rand() % 5 + 1;

    switch (escolha)
    {
    case 1:
        hard_game(biologia);
        break;
    case 2:
        hard_game(historia);
        break;
    case 3:
        hard_game(programacao);
        break;
    case 4:
        hard_game(ciencia);
        break;
    case 5:
        hard_game(diversidade);
        break;

    }

}

void game(char lista_palavra[10][25], char nome[1][10])
{
    std::cout << "\n\n===O SEU TEMA É SOBRE " << nome[0] << "===\n\n";

    //contadores
    int vida = 6, acertos = 0, erros, i, tamanho_palavra;
    char letra[1], lacuna[25] = "_";

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
        erros = true;
        std::cout << "\n"
                  << lacuna << "\n";
        std::cout << ("\ndigite uma letra: ");
        std::cin >> (letra);

        for (i = 0; i < tamanho_palavra; i++)
        {
            if (letra[0] == palavra[i])
            {
                lacuna[i] = palavra[i];
                acertos++;
                erros = false;
            }
        }
        if (erros == true)
        {
            vida--;

            switch (vida)
            {
            case 5:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\_V_/\n|\n|\n|\n|\n|\n|\n|\n|";
                break;

            case 4:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\_V_/\n|       ¨|¨\n|        |\n|        |\n|        |\n|\n|\n|\n|";
                break;
            case 3:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\_V_/\n|       ¨|¨\n|       /|\n|      / |\n|        |\n|\n|\n|\n|";
                break;
            case 2:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\_V_/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|\n|\n|\n|";
                break;
            case 1:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\_V_/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       /\n|      /\n|\n|";
                break;
            case 0:
                std::cout << " _________\n|        |\n|       _|_\n|      /x x\\\n|      \\_~_/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       / \\\n|      /   \\\n|\n|";
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
                std::cout << "       ___\n      /O O\\\n      \\_V_/\n        |\n       /|\\\n      / | \\\n        |\n       / \\\n      /   \\\n";
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
void hard_game(char palavra[10][25])
{
    std::cout << "\n\n===DIFICULDADE HARD!!! ===\n\n";

    //contadores
    int vida = 6, acertos = 0, erros, i, tamanho_palavra;
    char letra[1], lacuna[25] = "_";

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
        erros = true;
        std::cout << "\n"
                  << lacuna << "\n";
        std::cout << ("\ndigite uma letra: ");
        std::cin >> (letra);

        for (i = 0; i < tamanho_palavra; i++)
        {
            if (letra[0] == palavra[i])
            {
                lacuna[i] = palavra[i];
                acertos++;
                erros = false;
            }
        }
        if (erros == true)
        {
            vida--;

            switch (vida)
            {
            case 5:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\_V_/\n|\n|\n|\n|\n|\n|\n|\n|";
                break;

            case 4:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\_V_/\n|       ¨|¨\n|        |\n|        |\n|        |\n|\n|\n|\n|";
                break;
            case 3:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\_V_/\n|       ¨|¨\n|       /|\n|      / |\n|        |\n|\n|\n|\n|";
                break;
            case 2:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\_V_/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|\n|\n|\n|";
                break;
            case 1:
                std::cout << " _________\n|        |\n|       _|_\n|      /O O\\\n|      \\_V_/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       /\n|      /\n|\n|";
                break;
            case 0:
                std::cout << " _________\n|        |\n|       _|_\n|      /x x\\\n|      \\_~_/\n|       ¨|¨\n|       /|\\\n|      / | \\\n|        |\n|       / \\\n|      /   \\\n|\n|";
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
                std::cout << "       ___\n      /O O\\\n      \\_V_/\n        |\n       /|\\\n      / | \\\n        |\n       / \\\n      /   \\\n";
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
