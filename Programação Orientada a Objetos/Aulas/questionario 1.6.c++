#include <iostream>

#include <math.h>

using namespace std;

int main (void){
    //variaveis
    float volume,comprimento,largura,altura;

    //entradas
    cout << "digite o comprimento: ";
    cin >> comprimento;

    cout << "digite a largura: ";
    cin >> largura;

    cout << "digite o altura: ";
    cin >> altura;

    //processamentos
    volume = comprimento * altura * largura;

    //saida
    cout << "o valor do volume do retangulo é de : " << volume << endl;
   
}
