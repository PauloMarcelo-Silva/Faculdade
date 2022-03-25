#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include "teste_armazenararquivo.h"

using namespace std;
/*void cadastro(char _nome,char _senha){
    nome = _nome;
    senha = _senha;

}
*/
void novojogador::setcadastro(){
    FILE *arquivo;
    int i;
    
    char escreva_nome[200];
    arquivo = fopen("arquivo.txt","a");  
    cout << "digite um nome: ";
    cin >> (nome);
    cout << "digite uma senha: ";
    cin >> (senha);
    

    fprintf(arquivo,"nome do jogador:%s",nome);
    fprintf(arquivo," senha do jogador:%s",senha);

}


int main(){
    novojogador novo;
    
    novo.setcadastro();


    getch();
    return 0;
}
