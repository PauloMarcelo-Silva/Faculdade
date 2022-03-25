#include <iostream>

#include <math.h>

#include <conio.h>

using namespace std;

int main (void){
    //variaveis
    int a,b,c;

    //entradas
    cout << "digite o valor de a: ";
    cin >> a;

    cout << "digite o valor de b: ";
    cin >> b;

    //processamentos
    c = (a * a) - (b * b);

    //saida
    cout << "o valor do quadrado da diferença do primeiro valor pelo segundo valor é: " << c << endl;

}