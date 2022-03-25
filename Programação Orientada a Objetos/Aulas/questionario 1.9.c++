#include <iostream>

#include <math.h>

#include <conio.h>

using namespace std;

int main (void){
    //variaveis
    float reais,dolar,c;

    //entradas
    cout << "digite o valor atual da cotação do dolar: ";
    cin >> c;

    cout << "digite o quantos dolares vc possui: ";
    cin >> dolar;

    //processamentos
    reais = dolar * c;

    dolar = reais / c;

    //saida
    cout << "o valor de dolar para real é igual a :" << reais << endl;

    
    cout << "o valor de reais para dolar é igual a :" << dolar << endl;

        

}