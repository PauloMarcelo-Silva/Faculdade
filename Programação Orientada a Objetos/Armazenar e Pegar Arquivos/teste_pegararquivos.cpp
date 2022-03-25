#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct spessoa{
    string nome;
    string senha;  
};

int main(){
    
    string nomecompleto;
    string temp;
    spessoa pessoa;
    
    int i;

    ifstream arq("arquivo.txt");

    if(arq.is_open()){
        //quando conseguir abrir o arquivo,ireia fazer a leitura dos valores dentro dele
        while(getline(arq,nomecompleto)){
            //se o nome completo pegar o nome completo na posição desejada
            temp = "";
            for(i = 0;i < nomecompleto.size();i++){
                if(nomecompleto[i] != ' '){
                temp = temp + nomecompleto[i];
                }
                else{
                    break;
                 //parar o for,quando achar o espaço em branco
                }
            }
            pessoa.nome = temp;
            temp = "";
            for(i=i+1;i < nomecompleto.size();i++){
                temp = temp + nomecompleto[i];
            }
            pessoa.senha = temp;

        } 
        cout << pessoa.nome << " " << pessoa.senha;
    }
    else{
            cout << "aquivo invalido!";
        }

}