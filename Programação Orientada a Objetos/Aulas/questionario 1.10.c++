#include <iostream>

#include <math.h>

#include <conio.h>

using namespace std;

int main (void){

    //variaveis
    int volume,pi,raio;

    //entradas
    cout << "digite o valor desejado para pi: ";
    cin >> pi;

    cout << "digite o valor do raio da espera: ";
    cin >> raio;

    //processamentos
    volume = (4/3) * pi * (raio * raio * raio);

    //saida
    cout << "o valor do volume da esfera é igual a: " << volume ;
    
   

}